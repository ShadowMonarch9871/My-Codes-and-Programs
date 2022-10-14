# Append
def main():
    size = int(input("Enter the Size\n"))
    list = []
    i = 0
    while (i < size):
        value = int(input("Enter the Number"))
        list.append(value)
        i += 1
    print(list)
    list.sort()
    print(list)
    list.reverse()
    print(list)


main()
