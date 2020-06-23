from Student import Student
from Person import Person
from Date import Date

if __name__ == "__main__":
    s1 = Student("Candy", 70, 100, Date(1999, 6, 1))
    s2 = Student("Spotlight", 89, 60, Date(1997, 10, 8))

    s1.toString()
    s2.toString()