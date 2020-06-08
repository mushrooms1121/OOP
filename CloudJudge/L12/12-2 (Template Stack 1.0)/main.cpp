#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    char c;
    Stack<char> sum;
    int n1, symbol,n2,a = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> c;
        sum.push(c);
    }
    for (int i = 0; i < 4; i++)
    {
        n1 = sum.pop() - 48;
        symbol = sum.pop();
        n2 = sum.pop() - 48;

        if (symbol == 43)
            a = n2 + n1;
        else if (symbol == 45)
            a = n2 - n1;
        else if (symbol == 42)
            a = n2 * n1;
        else if(symbol == 47)
            a = n2 / n1;

        cout << a << endl;
        sum.push(a + 48);
    }

    system("pause");
    return 0;
}