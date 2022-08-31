import sys

def sum_recursive(x):
    if x == 0:
        return 0
    else:
        return x + sum_recursive(x-1)

def sum_iterative(x):
    a = 0
    if x == 0:
        return 0
    else:
        for b in range(x):
            a = b + (a+1)
        return a

inputval = int(sys.argv[1])
if inputval >= 0:
    print("The SUM value calculated by recursive is %d"%sum_recursive(inputval)+" and by iterative is %d"%sum_iterative(inputval))
else:
    print("Positive Number Only!")