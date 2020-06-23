from Date import Date

class Person():
    def __init__(self, newName, newBirthday):
        self.__name = newName
        self.__birthday = newBirthday
    def setName(self, newName):
        self.__name = newName
    def setBirthday(self, newBirthday):
        self.__birthday = newBirthday
    def getName(self):
        return self.__name
    def getBirthday(self):
        return self.__birthday
    def toString(self):
        print(self.getName(), end=' ')
        self.getBirthday().toString()
