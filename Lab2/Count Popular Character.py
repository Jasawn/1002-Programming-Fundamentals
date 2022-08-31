import sys

def main():
    pass

if __name__ == '__main__':
    main()

    sortedstr = ''.join(sorted(sys.argv[1].lower()))
    popchar = {}
    while len(popchar) != 5:
        if len(popchar) == 0:
            def most_common(sortedstr):
                return max(sortedstr, key=sortedstr.count)

            popchar[most_common(sortedstr)] = sortedstr.count(most_common(sortedstr))
            newsorted = sortedstr.replace(most_common(sortedstr), "")
        else:
            def most_common1(newsorted):
                return max(newsorted, key=newsorted.count)

            popchar[most_common1(newsorted)] = newsorted.count(most_common1(newsorted))
            newsorted = newsorted.replace(most_common1(newsorted), "")

    print (','.join("{}:{}". format(a,b) for a,b in popchar.items()))
