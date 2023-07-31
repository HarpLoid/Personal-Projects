#!/usr/bin/python3

import random
import string


def randomItemList(strlength):
    randomString = ""
    for i in range(strlength):
        randomString += random.choice(string.ascii_letters)
    return randomString

def read(aList=[]):
    for _ in aList:
        print(_)
        

noOfStrings = int(input("How many Strings: "))
lengthOfStrings = int(input("Length of Strings: "))

aList = []

for i in range(noOfStrings):
    aList.append(randomItemList(lengthOfStrings))

print(aList)
read(aList)