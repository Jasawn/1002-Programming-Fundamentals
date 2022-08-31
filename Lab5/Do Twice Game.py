import sys


if sys.argv[1].isnumeric() == False:
    print("Value input error")
elif sys.argv[2].isnumeric() == False or sys.argv[2] >= '4':
    print("It cannot be supported")
else:
    value = int(sys.argv[1])
    userinput = int(sys.argv[2])

    def doTwice(x,y):
        return x(x(y))

    if userinput == 1:
        double = lambda x : x * 2
        print(doTwice(double, value))

    elif userinput == 2:
        square = lambda x : x ** 2
        print(doTwice(square, value))

    else:
        cube = lambda x : x ** 3
        print(doTwice(cube, value))
