#concatenation
def main():
    list1=[1,2,3,4]
    list2=[5,6,7,8]
    list3=list1+list2
    print(list3[2:5])# slicing
    print(list3[0:len(list3)])
    print(list3[0:])
    print("Odd list is -",list3[0:8:2])
    print("Even list is -",list3[1:8:2])
    print(list3[-8:-1:2])
main() 