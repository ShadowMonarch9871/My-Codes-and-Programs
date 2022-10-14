from re import S


def main():
    a = int(input("Enter the Number\n"))
    facto = fact(a)
    print(facto)


def fact(num):
    s = 1
    for i in range(1,num+1):
        s = s*i
    return s


main()
