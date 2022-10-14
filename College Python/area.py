def main():
    a = int(input("Enter the radius of cirlce\n"))
    b = int(input("Enter the length of rectangle\n"))
    c = int(input("Enter the breadth of rectangle\n"))
    area1 = area_of_rectangle(b, c)
    area2 = area_of_circle(a)
    print(area1)
    print(area2)


def area_of_rectangle(b, c):
    area = b*c
    return area


def area_of_circle(a):
    area = 3.14*a*a
    return area


main()
