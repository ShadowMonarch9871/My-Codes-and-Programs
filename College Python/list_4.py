def main():
    a=int(input("Enter the Size of List\n"))
    list=[0]*a
    sum=0
    for i in range(0,a):
        b=int(input("Enter the Number"))
        list[i]=b
        sum=sum+b
    print(list) 
    print((sum/a))
main()