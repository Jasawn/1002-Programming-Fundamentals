import sys

def digit(x):
    if x < 10:
        return 1
    else:
        return 1 + digit(x//10)

def digit_iterative(x):
    counter = 1
    if x < 10:
        return 1
    else:
        while x > 10:
            x = x//10
            counter += 1
        return counter


inputval = int(sys.argv[1])
if inputval >= 0:
    print("The number of digit(s) calculated by recursive is %d"%digit(inputval)+" and by iterative is %d"%digit(inputval))
else:
    print("Positive Number Only!")