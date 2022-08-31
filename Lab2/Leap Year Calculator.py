#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      Jason
#
# Created:     21/09/2021
# Copyright:   (c) Jason 2021
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import sys

def main():
    pass

if __name__ == '__main__':
    main()

    if len(sys.argv)>= 4:
        print("Error")
    elif sys.argv[1].isnumeric() != True:
        print("Please enter correct value")
    elif sys.argv[2].isnumeric() != True:
        print("Please enter correct value")
    else:
        start = int(sys.argv[1])
        end = int(sys.argv[2])

        leapyear = []

        while start <= end:
            if start % 400 == 0 or start % 100 !=0 and start % 4 ==0:
                leapyear.append(start)
            start += 1

        leapyear1 = [str(a) for a in leapyear]
        outputleapyear = (','.join(leapyear1))
        print ("The number of Leap Years is", len(leapyear), ", the Leap Years are", outputleapyear)
