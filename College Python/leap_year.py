def main():
    year = int(input("Enter the Year\n"))
    leap = leap_year(year)
    print(leap)


def leap_year(year):
    if (((year % 400 == 0) and (year % 100 == 0)) or ((year % 100 != 0) and (year % 4 == 0))):
        return True
    else:
        return False
main()
