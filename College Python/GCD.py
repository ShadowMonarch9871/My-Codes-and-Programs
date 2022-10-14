def main():
    a=int(input("Enter the First Number\n"))
    b=int(input("Enter the second Number\n"))
    c=gcd(a,b)
    print(c)
def gcd(a,b):
    if a%b==0:
        return b
    else:
        return gcd(a,a%b)
main()
