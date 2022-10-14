def main():
    size=int(input("Enter the size\n"))
    list1=[0]*size
    for i in range (0,size):
        a=int(input("Enter the Number\n"))
        list1[i]=a*a*a
    print(list1)
main()


