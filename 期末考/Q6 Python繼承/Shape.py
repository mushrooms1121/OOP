class Shape():
    def __init__(self, newColor):
        self.__color = newColor
    def setColor(self, newColor):
        self.__color = newColor
    def getColor(self):
        return self.__color
    def __str__(self):
        return "Shape"