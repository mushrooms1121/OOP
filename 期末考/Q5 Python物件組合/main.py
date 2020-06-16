from Teacher import Teacher
from Body import Body

if __name__ == "__main__":
    t1 = Teacher("Candy", Body(1.7, 80), 88000)
    t2 = Teacher("Linda", Body(1.6, 90), 61000)

    name = str(input())
    height = float(input())
    weight = int(input())

    t1.setName(name)
    t2.setBody(Body(height,weight))

    t1.toString()
    t2.toString()