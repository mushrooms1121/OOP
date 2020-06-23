from Person import Person

class Student(Person):
    def __init__(self, newName, newMathScore, newChineseScore, newBirthday):
        self.__mathScore = newMathScore
        self.__chineseScore = newChineseScore
        super().__init__(newName, newBirthday)
    def setMathScore(self, newMathScore):
        self.__mathScore = newMathScore
    def setChineseScore(self, newChineseScore):
        self.__chineseScore = newChineseScore
    def getMathScore(self):
        return self.__mathScore
    def getChineseScore(self):
        return self.__chineseScore
    def average(self):
        return (self.__mathScore + self.__chineseScore) / 2
    def toString(self):
        super().toString()
        print(self.average())