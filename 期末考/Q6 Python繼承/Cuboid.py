from Shape import Shape

class Cuboid(Shape):
    def __init__(self, newLength, newWidth, newHeight, newColor):
        self.__length = newLength
        self.__width = newWidth
        self.__height = newHeight
        super().__init__(newColor)
    def setLength(self, newLength):
        self.__length = newLength
    def getLength(self):
        return self.__length
    def setWidth(self, newWidth):
        self.__width = newWidth
    def getWidth(self):
        return self.__width
    def setHeight(self, newHeight):
        self.__height = newHeight
    def getHeight(self):
        return self.__height
    def getVolume(self):
        return self.getLength() * self.getWidth() * self.getHeight()
    def __str__(self):
        return "Cuboid"