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

def main():
    pass

if __name__ == '__main__':
    main()

def letter_count(x):
    dict1 = {}

    for keys in x:
        dict1[keys] = dict1.get(keys, 0) + 1

    return dict1

def double_count(x,y):
    dict1 = {}

    for keys in x + y: #loop through 2arguments
        dict1[keys] = dict1.get(keys, 0) + 1

    return dict1

def various_count(*str):
    list1 = str[0]
    str1 = ""

    dict1 = {}
    for keys in str1.join(list1):   #need to convert into string because list is a hash argument and cannot append to key
        dict1[keys] = dict1.get(keys,0) + 1

    return dict1