from Body import Body

class Teacher():
    def __init__(self, newName, newBody, newSalary):
        self.__name = newName
        self.__body = newBody
        self.__salary = newSalary
    def setName(self, newName):
        self.__name = newName
    def getName(self):
        return self.__name
    def setBody(self, newBody):
        self.__body = newBody
    def getBody(self):
        return self.__body
    def setSalary(self, newSalary):
        self.__salary = newSalary
    def getSalary(self):
        return self.__salary
    def toString(self):
        print(str("{0} {1} {2}".format(self.__name, self.__body.toString(), self.__salary)))