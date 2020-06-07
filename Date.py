# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

class Date():
    def __init__(self,newMonth = 1,newDay = 1,newYear = 1111):
        self.__month = newMonth
        self.__day = newDay
        self.__year = newYear
        
    def setMonth(self,newMonth):
        self.__month = newMonth
    def setDay(self,newDay):
        self.__day = newDay
    def setYear(self,newYear):
        self.__year = newYear
    def getMonth(self):
        return self.__month
    def getDay(self):
        return self.__day
    def getYear(self):
        return self.__year
    def toString(self):
       return ("{}\{}\{}".format(self.__month, self.__day, self.__year))