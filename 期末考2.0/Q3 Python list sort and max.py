def max(list):
    currentMax = list[0]
    for i in range(0, len(list)):
        if list[i] > currentMax:
            currentMax = list[i]
    return currentMax

def selectionSort(list):
    for i in range(0, len(list)):
        currentMin = list[i]
        currentMinIndex = i
        for j in range(i+1, len(list)):
            if currentMin > list[j]:
                currentMin = list[j]
                currentMinIndex = j
        if currentMinIndex != i:
            list[currentMinIndex] = list[i]
            list[i] = currentMin

if __name__ == "__main__":
    integerList = [75, 55, 4, 44, 31, 81, 98, 75, 81, 86, 54, 40]
    decimalList = [7.5, 5.5, 4.0, 4.4, 3.1, 8.1, 9.8, 7.5, 8.1, 8.6, 5.4, 40.0]

    selectionSort(integerList)
    print("Integer list sort:")
    for i in range(0, len(integerList)):
        print(integerList[i], end=' ')
    print("\nInteger list maximum value:", max(integerList))

    selectionSort(decimalList)
    print("\nDecimal list sort:")
    for i in range(0, len(decimalList)):
        print(decimalList[i], end=' ')
    print("\nDecimal list maximum value:", max(decimalList))