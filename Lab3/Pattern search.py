import sys
import re

def main():
    pass

if __name__ == '__main__':
    main()

if len(sys.argv) == 3 :
    candidate = sys.argv[1].replace(',', "") #remove the comma
    pattern = sys.argv[2].replace(',', "")   #remove the comma

    results = len(re.findall(pattern,candidate))   #using regex to find the matching pattern & return count
    if results != 0:                                #if not empty
        print ("Pattern appears %d" %results + " time!")

    else:
        print ("Pattern appears -1 time!")
else:
    print("Error, put in 2 arugments only!")
