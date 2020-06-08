#include <iostream>
using namespace std;

template<typename T>
void InsertionSort(T list[], int listSize)
{
    for (int i = 1; i < listSize; i++)
    {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}

template<typename T>
int BinarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int size = 9,input1[3], list1[] = { 1,5,6,2,3,7,9,8,4 };
    double input2[3], list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };

    for (int i = 0; i < 3; i++) cin >> input1[i];
    for (int i = 0; i < 3; i++) cin >> input2[i];

    cout << "From: ";
    for (int i = 0; i < size-1; i++) cout << list1[i] << ",";
    cout << list1[size-1] << endl;
    InsertionSort(list1, size);
    cout << "To: ";
    for (int i = 0; i < size - 1; i++) cout << list1[i] << ",";
    cout << list1[size-1] << endl;
    cout << input1[0] << " at " << BinarySearch(list1, input1[0], size) << endl;
    cout << input1[1] << " at " << BinarySearch(list1, input1[1], size) << endl;
    cout << input1[2] << " at " << BinarySearch(list1, input1[2], size) << endl;

    cout << "From: ";
    for (int i = 0; i < size - 1; i++) cout << list2[i] << ",";
    cout << list2[size - 1] << endl;
    InsertionSort(list2, size);
    cout << "To: ";
    for (int i = 0; i < size - 1; i++) cout << list2[i] << ",";
    cout << list2[size-1] << endl;
    cout << input2[0] << " at " << BinarySearch(list2, input2[0], size) << endl;
    cout << input2[1] << " at " << BinarySearch(list2, input2[1], size) << endl;
    cout << input2[2] << " at " << BinarySearch(list2, input2[2], size) << endl;

    system("pause");
    return 0;
}