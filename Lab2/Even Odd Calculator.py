import sys

def main():
    pass

if __name__ == '__main__':
    main()

    even = []
    odd = []
    numberlist = []
    a = 0
    error = True
    if len(sys.argv) == 2:
        inputn = sys.argv[1].split(",")
    else:
        (sys.argv).pop(0)
        inputn = sys.argv

    while a < len(inputn):
        if inputn[a].isnumeric() != True:
            error = False
            break
        else:
            a += 1
            continue

    if bool(error) == False:
        print ("Please enter valid integers.")

    else:
        for i in range(0, len(inputn)):
            number = int (inputn[i])
            numberlist.append(number)

            if number % 2 == 0:
                even.append(number)

            else:
                odd.append(number)

        sumeven = sum(even)
        sumodd = sum(odd)
        a = 0

        difference = max(numberlist) - min(numberlist)

        numberlist.remove(max(numberlist))
        numberlist.remove(min(numberlist))

        sumall = sum(numberlist)
        avg = sumall / len(numberlist)

        print ("The sum of all even numbers is", sumeven, ", the sum of all odd numbers is", sumodd, ", the difference between the biggest and smallest number is", difference, ", the total number of even numbers is", len(even), ", the total number of odd numbers is", len(odd), ", the cantered average is", int(avg), ".")




