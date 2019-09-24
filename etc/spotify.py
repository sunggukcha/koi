# This code is an implementation of the post below. 
# https://labs.spotify.com/2014/02/28/how-to-shuffle-songs/

'''
    Author: Sungguk Cha
    eMail : navinad@naver.com

    Spotify Algorithm

    Given N songs and M singers, imagine a [0, 100N] ranged one dimension. 
    0. construct structures {O(N)}
        (dict) singer : (list) song
        (dict) singer : offset. Each value is uniform randomed in range[-10N, 10N].
        (list) (song, timestamp)
    1. for each singer, shuffle his/her songs-list. {O(NlogN)}
    2. Using a period (100N/S) and the offset of the singer, where 'S' is the number of songs for a singer, mark a timestamp for each song. {O(N)}
    3. sort by the timestamps. {O(NlogN)}

    Expected running time complexity: O(NlogN).


    Note that all randoms are uniform.
'''

import random
import sys

total_scale = 100 # 
offset_scale = 10 # set it [0, total_scale)
random_rate = 0.2 # 20% of period

N = int(input())
for nth in range(N):
    songs = sys.stdin.readline().split('\t')
    singers = sys.stdin.readline().split('\t')

    number = len(songs) # number of songs
    Lists = {} # singer : song
    Times = [] # (song, time) lists
    Offsets = {} # singer : offset

    for i in range(number):
        song = songs[i]
        singer = singers[i]
        if singer in Lists.keys():
            Lists[singer].append(song)
        else:
            Lists[singer] = [song]

    for singer in singers:
        Offsets[singer] = random.randint(-offset_scale * number, +offset_scale * number)

    for singer in Lists.keys():
        random.shuffle(Lists[singer]) # 
        period = number * total_scale / len(Lists[singer])
        offset = Offsets[singer]
        for i, song in enumerate(Lists[singer]):
            time = offset + (i*period) + random.randint(int(-random_rate * period), int(+random_rate * period))
            Times.append( (song, time) )

    Times.sort(key=(lambda x:x[1]))

    for i, (song, time) in enumerate(Times):
        if i > 0:
            print('\t', end='')
        print(song, end='')
    print('')
