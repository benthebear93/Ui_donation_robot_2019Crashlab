#!/usr/bin/env python
import vlc
import time
import numpy as np
import rospy
import yaml
from std_msgs.msg import Int32
from std_msgs.msg import String
from merry_sound.msg import TaskCommand
def playthankyou():
    thankyou_player.play()
    time.sleep(3)
    print("play thankyou?")
    thankyou_player.stop()

def playmusic(data):
    if data.pushcheck == 2:
        playthankyou()
        player.play()
        time.sleep(1)
    else:
        print("stop", data.pushcheck)
        player.stop()
        time.sleep(1)

def listener():
    rospy.init_node('merry_sound', anonymous=True)
    rospy.Subscriber("/merry_wtwo/button_msg_2", TaskCommand, playmusic)
    rospy.Subscriber("/merry_win/button_msg_1", TaskCommand, playmusic)
    rospy.spin()

if __name__ == '__main__':

    with open("/home/benlee/catkin_ws/src/merry_sound/scripts/music_list.yaml", 'r') as stream:
        out = yaml.load(stream)
        #a = "'" + out['music_list'][0] + "'"
        #print a
    instance = vlc.Instance()
    player = instance.media_player_new()
    media = instance.media_new(out['music_list'][0])

    instance2 = vlc.Instance()
    thankyou_player = instance2.media_player_new()
    thx_media = instance2.media_new(out['vocal_list'][0])

    player.set_media(media)
    thankyou_player.set_media(thx_media)
    listener()
    print("here?")

