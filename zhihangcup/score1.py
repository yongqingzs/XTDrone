#!/usr/bin/python
# -*- coding: UTF-8 -*-

import rosbag
import sys 
import math
        
if __name__ == "__main__":
    armed = False
    target_finish = 0
    score = 0
    first_record = True
    armed_array = []
    with rosbag.Bag('score1.bag') as bag:
        for topic, msg, time in bag.read_messages(topics=['/iris_0/mavros/state']):
            armed_array.append([math.floor(time.to_sec()), msg.armed])
        for topic, msg, time in bag.read_messages(topics=['/gazebo/model_states']):
            if(first_record):
                start_time = time.to_sec()
                target_id = msg.name.index('landing1')
                target_pos = msg.pose[target_id].position
                target_pos.y = target_pos.y + 3 #初始偏差
                first_record = False
            time_usage = time.to_sec() - start_time
            if(time_usage > 1200):
                print("Time out, score: 0")
                sys.exit(0)
            uav_id = msg.name.index('iris_0')
            target_id = msg.name.index('landing1')
            uav_pos = msg.pose[uav_id].position
            try:
                index = [x[0] for x in armed_array].index(math.floor(time.to_sec()))
            except:
                continue
            armed = armed_array[index][1]
            if(uav_pos.z < 0.15 and time_usage > 10 and not armed):
                    distance = ((uav_pos.x - target_pos.x) ** 2 + (uav_pos.y - target_pos.y) ** 2) ** 0.5
                    print("Arrived, distance is %.4f meters"%distance)
                    print("Time usage is %.4f seconds"%time_usage)
                    if (time_usage < 600):
                        score = 40
                        if (distance <= 3):
                            score = score + 60 - 18 * distance                 
                        else:
                            score = 0
                    elif (time_usage < 1200):
                        score = 40 - 3.6 * (time_usage/60 - 10)
                        if (distance <= 3):
                            score = score + 60 - 18 * distance                 
                        else:
                            score = 0
                    else:
                        score = 0

                    print("Score: %.3f"%score)
                    sys.exit(0)