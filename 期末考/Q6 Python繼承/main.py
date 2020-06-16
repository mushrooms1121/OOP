from Sphere import Sphere
from Cuboid import Cuboid

if __name__ == "__main__":
    r = int(input())
    sc = str(input())
    l = int(input())
    w = int(input())
    h = int(input())
    cc = str(input())

    sphere = Sphere(int(r), sc)
    cuboid = Cuboid(int(l), int(w), int(h), cc)

    print(sphere.__str__() + ":(" + str(sphere.getRadius()) + ")," +
          str(round(sphere.getVolume(), 1)) + "," + sphere.getColor())
    print(cuboid.__str__() + ":(" + str(cuboid.getLength()) + "," + str(cuboid.getWidth()) + "," +
          str(cuboid.getHeight()) + ")," + str(round(float(cuboid.getVolume()), 1)) + "," + cuboid.getColor())