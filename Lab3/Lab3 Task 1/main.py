from MyMath import *
import sys

def main():
    pass

if __name__ == '__main__':
    main()

numlist = list(map(int, sys.argv[1].split(',')))

print ("The difference is:%d" %(subtraction(maximum(numlist),minumum(numlist))), "The summation of all input is:%d" %(sumTotal(numlist)), "The number of even numbers is:%d" %(evenNum(numlist)), "The values in the list are:%s" %(clear(numlist)))