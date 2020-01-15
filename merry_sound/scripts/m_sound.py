#!/usr/bin/env python
import vlc
import time
import numpy as np
import rospy
import yaml
from std_msgs.msg import Int32
from std_msgs.msg import String
from merry_sound.msg import TaskCommand

global music_num

def v_play1(play): # sound test for admin_ui
    if play == 9:
        v_player1.play()
        time.sleep(10)
        play = 0
    if play ==0: 
        v_player1.stop()

def v_play2(play): #beep sound
    if play == 1:
        v_player2.play()
        time.sleep(3)
        play = 0
    if play ==0: 
        v_player2.stop()

def v_play3(play): #donation explain 
    if play == 1:
        v_player3.play()
        time.sleep(10)
        play = 0
    if play ==0: 
        v_player3.stop()

def v_play4(play): #"thankyou for donation"
    if play == 1:
        v_player4.play()
        time.sleep(10)
        play = 0
    if play ==0: 
        v_player4.stop()
####################################
####################################
####################################

def music_play1(play):
    if play == 2:
        player1.play()
        time.sleep(3)
    else:
        player1.stop()
        time.sleep(3)

def music_play2(play):
    if play ==2:
        player2.play()
        time.sleep(3)
    else:
        player2.stop()
        time.sleep(3)

def music_play3(play):
    if play ==2:
        player3.play()
        time.sleep(3)
    else:
        player3.stop()
        time.sleep(3)

def music_play4(play):
    if play ==2:
        player4.play()
        time.sleep(3)
    else:
        player4.stop()
        time.sleep(3)

def music_play5(play):
    if play ==2:
        player5.play()
        time.sleep(3)
    else:
        player5.stop()

def music_play6(play):
    if play ==2:
        player6.play()
        time.sleep(3)
    else:
        player6.stop()

def music_play7(play):
    if play ==2:
        player7.play()
        time.sleep(3)
    else:
        player7.stop()

def music_play8(play):
    if play ==2:
        player8.play()
        time.sleep(3)
    else:
        player8.stop()

def music_play9(play):
    if play ==2:
        player9.play()
        time.sleep(3)
    else:
        player9.stop()

def music_play10(play):     
    if play ==2:
        player9.play()
        time.sleep(3)
    else:
        player10.stop()

def sound_test(data):
    print("here")
    if data.data == 9:
        v_play1(data.data)

def play_music(data):
    global music_num

    if data.pushcheck == 2: #donation_end button pushed(w2)
        v_play2(1) #beep sound
        music_num = music_num + 1
        v_play4(1) # "thank you for donation"
        if music_num == 1: 
            music_play1(data.pushcheck)

        if music_num == 2:
            music_play2(data.pushcheck)

        if music_num == 3:
            music_play3(data.pushcheck)

        if music_num == 4:
            music_play4(data.pushcheck)

        if music_num == 5:
            music_play5(data.pushcheck)

        if music_num == 6:
            music_play6(data.pushcheck)

        if music_num == 7:
            music_play7(data.pushcheck)

        if music_num == 8:
            music_play8(data.pushcheck)

        if music_num == 9:
            music_play9(data.pushcheck)

            music_num = 0  
        if music_num == 10:
            music_play10(data.pushcheck)

            music_num = 0  

    else: #donation_start button pushed(w1)
        if music_num == 1: 
            v_play2(1) #beep sound
            music_play1(data.pushcheck)
            v_play3(1) #donation explain 
        if music_num == 2:
            v_play2(1)
            music_play2(data.pushcheck)
            v_play3(1)
        if music_num == 3:
            v_play2(1)
            music_play3(data.pushcheck)
            v_play3(1)
        if music_num == 4:
            v_play2(1)
            music_play4(data.pushcheck)
            v_play3(1)
        if music_num == 5:
            v_play2(1)
            music_play5(data.pushcheck)
            v_play3(1)
        if music_num == 6:
            v_play2(1)
            music_play6(data.pushcheck)
            v_play3(1)
        if music_num == 7:
            v_play2(1)
            music_play7(data.pushcheck)
            v_play3(1)
        if music_num == 8:
            v_play2(1)
            music_play8(data.pushcheck)
            v_play3(1)
        if music_num == 9:
            v_play2(1)
            music_play9(data.pushcheck)
            v_play3(1)
        if music_num == 10:
            v_play2(1)
            music_play10(data.pushcheck)
            v_play3(1)
            music_num = 0
            

def listener():
    rospy.init_node('merry_sound', anonymous=True)
    rospy.Subscriber("/merry_wtwo/button_msg_2", TaskCommand, play_music)
    rospy.Subscriber("/merry_win/button_msg_1", TaskCommand, play_music)
    rospy.Subscriber("/admin_ui/test_sound", Int32, sound_test) #9 is sound test 
    rospy.spin()

if __name__ == '__main__':
    music_num = 0
    vocal_num = 0 
    with open("/home/benlee/catkin_ws/src/Ui_donation_robot_2019Crashlab/merry_sound/scripts/music_list.yaml", 'r') as stream:
        out = yaml.load(stream)
        #a = "'" + out['music_list'][0] + "'"
        #print a
    music1 = vlc.Instance()
    player1 = music1.media_player_new()
    media1 = music1.media_new(out['music_list'][0]) 

    music2 = vlc.Instance()
    player2 = music2.media_player_new()
    media2 = music2.media_new(out['music_list'][1]) 

    music3 = vlc.Instance()
    player3 = music3.media_player_new()
    media3 = music3.media_new(out['music_list'][2]) 

    music4 = vlc.Instance()
    player4 = music4.media_player_new()
    media4 = music4.media_new(out['music_list'][3]) 

    music5 = vlc.Instance()
    player5 = music5.media_player_new()
    media5 = music5.media_new(out['music_list'][4]) 

    music6 = vlc.Instance()
    player6 = music6.media_player_new()
    media6 = music6.media_new(out['music_list'][5])

    music7 = vlc.Instance()
    player7 = music7.media_player_new()
    media7 = music7.media_new(out['music_list'][6])

    music8 = vlc.Instance()
    player8 = music8.media_player_new()
    media8 = music8.media_new(out['music_list'][7])

    music9 = vlc.Instance()
    player9 = music9.media_player_new()
    media9 = music9.media_new(out['music_list'][8])

    music10 = vlc.Instance()
    player10 = music10.media_player_new()
    media10 = music10.media_new(out['music_list'][8])

    vocal1 = vlc.Instance()
    v_player1 = vocal1.media_player_new()
    v_media1 = vocal1.media_new(out['vocal_list'][0]) #thankyou test

    vocal2 = vlc.Instance()
    v_player2 = vocal2.media_player_new()
    v_media2 = vocal2.media_new(out['vocal_list'][1]) #beep sound

    vocal3 = vlc.Instance()
    v_player3 = vocal3.media_player_new()
    v_media3 = vocal3.media_new(out['vocal_list'][2]) #explain

    vocal4 = vlc.Instance()
    v_player4 = vocal4.media_player_new()
    v_media4 = vocal4.media_new(out['vocal_list'][3]) #end



    v_player1.set_media(v_media1) 
    v_player2.set_media(v_media2)
    v_player3.set_media(v_media3)
    v_player4.set_media(v_media4)

    player1.set_media(media1)
    player2.set_media(media2)
    player3.set_media(media3)
    player4.set_media(media4)
    player5.set_media(media5)
    player6.set_media(media6)
    player7.set_media(media7)
    player8.set_media(media8)
    player9.set_media(media9)
    player10.set_media(media10)

    listener()
    print("here?")