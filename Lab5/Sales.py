import sys

try:
    value = list(map(int, sys.argv[1].split(',')))
    value1 = int(sys.argv[2])

    scale = lambda x,y : [a * y for a in x]

    sort = sorted(value,key=lambda x: x % 10)

    goodsales = list(filter(lambda x : x > sum(value)/len(value),value))

    print('The scaled number is: %s'%scale(value,value1) + ' The sorted sales numbers are: %s'% sort + ' The good sales numbers are: %s'%goodsales)

except ValueError:
    print("Wrong input")