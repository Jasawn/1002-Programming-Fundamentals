import sys

def main():
    pass

if __name__ == '__main__':
    main()

    if len(sys.argv) == 4:
        try:
            workhours = float(sys.argv[1])
            normalrate = float(sys.argv[2])
            otrate = float(sys.argv[3])
            payment = float(0)

            if workhours < 40.00:
                paymentnormal = normalrate * workhours
                print ("Normal Salary:%.2f"%paymentnormal + ", Extra Salary:%.2f"%payment + ", Total Salary:%.2f"%(paymentnormal+payment))

            elif workhours >= 40.00 and workhours <= 168 :
                paymentnormal = (normalrate * 40)
                paymentot = (otrate * (workhours - 40))
                print ("Normal Salary:%.2f"%paymentnormal + ", Extra Salary:%.2f"%paymentot + ", Total Salary:%.2f"%(paymentnormal+paymentot))

            else:
                print("Your input is Invalid!")

        except ValueError:
            print("Your input is Invalid!")

    else:
        print("Your input is Invalid!")