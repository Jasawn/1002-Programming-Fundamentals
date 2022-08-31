#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      Lim
#
# Created:     28/09/2021
# Copyright:   (c) Lim 2021
# Licence:     <your licence>
#-------------------------------------------------------------------------------
from CountLettersFunc import *
import sys

def main():
    pass

if __name__ == '__main__':
    main()

value = sys.argv[1]
output = ""

if ',' in value:  #if there are 2 or more words in an input
    value = value.split(',')    #split them up
    sorted_total = various_count(value)

    for key in sorted(sorted_total):  #sort them according to descending
        output ="%s:%d" % (key, sorted_total[key]) + " " + output   #add to string for output
    print(output)
else:
    print(letter_count(value))  #if there is only 1 word
