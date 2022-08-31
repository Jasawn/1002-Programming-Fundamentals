import sys

def main():
    pass

if __name__ == '__main__':
    main()

    if len(sys.argv) == 4:
        try:
            metric = str(sys.argv[1])
            height = float(sys.argv[2])
            weight = float(sys.argv[3])

            if metric == "metric":
                BMI = weight/height/height

            else:
                BMI = 703*weight/height/height

            if BMI < 16:
                print ("%.2f"%BMI + " " + "Severe Thinness")
            elif BMI <17 and BMI >= 16:
                print ("%.2f"%BMI + " " + "Moderate Thinness")
            elif BMI <18.5 and BMI >= 17:
                print ("%.2f"%BMI + " " + "Mild Thinness")
            elif BMI <25 and BMI >= 18.5:
                print ("%.2f"%BMI + " " + "Normal")
            elif BMI <30 and BMI >= 25:
                print ("%.2f"%BMI + " " + "Overweight")
            elif BMI <35 and BMI >= 30:
                print (" %.2f"%BMI + " " + "Obese Class I")
            elif BMI <40 and BMI >= 35:
                print ("%.2f"%BMI + " " + "Obese Class II")
            elif BMI >40:
                print ("%.2f"%BMI + " " + "Obese Class III")


            else:
                print("Your metric input is Invalid")

        except ValueError:
            print("Your input is Invalid!")

    else:
        print("Your Input is Invalid!")
