import sys

def el(x,y):
    if x == "":
        return False
    else:
        if y == "":
            return True
        else:
            if y[0] == x[0]:
                newy = y.replace(y[0],"")
                newx = x.replace(x[0],"")
                return el(newx,newy)
            else:
                newx = x.replace(x[0],"")
                newy = y
                return el(newx,y)


userinput = sys.argv[1]
inputval = ''.join(sorted(userinput))
elf = 'efl'

if el(inputval,elf) == True:
    print(userinput + " is one elfish word!")
else:
    print(userinput + " is not an elfish word!")

