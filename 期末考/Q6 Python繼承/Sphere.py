from Shape import Shape
class Sphere(Shape):
    def __init__(self, newRadius, newColor):
        self.__radius = newRadius
        super().__init__(newColor) #繼承別人的變數用super
    def setRadius(self, newRadius):
        self.__radius = newRadius
    def getRadius(self):
        return self.__radius
    def getVolume(self):
        return 3.14159 * self.getRadius() * self.getRadius() * self.getRadius() * 4 / 3
    def __str__(self):
        return "Sphere"