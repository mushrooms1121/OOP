from Date import Date
from Person import Person

if __name__ == "__main__":
    p1 = Person("Candy", Date(1999, 6, 1))
    p2 = Person("Spotlight", Date(1997, 10, 8))

    newName = str(input())
    newMonth = int(input())

    p1.setName(newName)
    p2.setBirthday(Date(1997, newMonth, 8))

    p1.toString()
    p2.toString()