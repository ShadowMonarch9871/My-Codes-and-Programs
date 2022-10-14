def main():
    a = int(input("Enter the Number\n"))
    fact = facto(a)
    print(fact)


def facto(a):
    if a == 0:
        return 1
    else:
        return a*facto(a-1)


main()
