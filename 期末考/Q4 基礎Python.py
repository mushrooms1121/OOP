def binarySearch(list, keyWord):
    low = 0
    high = len(list) - 1

    while high >= low:
        mid = (low + high) // 2
        if keyWord < list[mid]:
            high = mid - 1
        elif keyWord == list[mid]:
            return mid
        else:
            low = mid + 1
    return -1

if __name__ == "__main__":
    list1 = [1, 3, 5, 7, 9, 11, 13, 15, 17]
    list2 = [1.1, 3.3, 5.5, 7.7, 9.9, 11.1, 13.3, 15.5, 17.7]
    
    num1 = []
    for i in range(3):
        num1.append(int(input()))
    
    num2 = []
    for i in range(3):
        num2.append(float(input())) #小數是float

    print("list1:{0}".format(list1)) #format用法記得
    for i in range(3):
        print("{0} at {1}".format(num1[i],binarySearch(list1,num1[i])))

    print("\nlist2:{0}".format(list2)) #換行是\n
    for i in range(3):
        print("{0} at {1}".format(num2[i],binarySearch(list2,num2[i])))