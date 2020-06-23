class Date():
    def __init__(self, newYear, newMonth, newDay):
        self.__year = newYear
        self.__month = newMonth
        self.__day = newDay
    def setYear(self, newYear):
        self.__year = newYear
    def setMonth(self, newMonth):
        self.__month = newMonth
    def setDay(self, newDay):
        self.__day = newDay
    def getYear(self):
        return self.__year
    def getMonth(self):
        return self.__month
    def getDay(self):
        return self.__day
    def toString(self):
        print(str(self.getYear()) + "-" + str(self.getMonth()) + "-" + str(self.getDay()), end=' ')