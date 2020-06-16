class Body():
    def __init__(self, newHeight, newWeight):
        self.__height = newHeight
        self.__weight = newWeight
    def setHeight(self, newHeight):
        self.__height = newHeight
    def getHeight(self):
        return self.__height
    def setWeight(self, newWeight):
        self.__weight = newWeight
    def getWeight(self):
        return self.__weight
    def toString(self):
        bmi = self.__weight / self.__height**2 #**為平方
        return round(bmi, 2) #round為小數點第幾位