def add(x,y):
    sumnum = x + y
    return sumnum

def subtraction(x,y):
    sub = x - y
    return sub

def evenNum(x):
    num = len([a for a in x if a % 2 == 0])
    return num

def maximum(x):
    maxnum = max(x)
    return maxnum

def minumum(x):
    minnum = min(x)
    return minnum

def absolute(x):
    value = abs(x)
    return value

def sumTotal(x):
    sumtotal = sum(x)
    return sumtotal

def clear(x):
    smallestnum = minumum(x)
    length = len(x)

    if smallestnum < 5:
        x = [0 for a in range(length)]
        return x
    else:
        return x


