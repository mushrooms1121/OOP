#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack<char> sc;
    char input;

    for (int i = 0; i < 9; i++)
    {
        cin >> input;
        sc.push(input);
    }

    for (int i = 0; i < 4; i++)
    {
        int n1 = sc.peek() - '0';
        sc.pop();
        char symbol = sc.peek();
        sc.pop();
        int n2 = sc.peek() - '0';
        sc.pop();

        switch (symbol)
        {
        case '+':
            sc.push((n2 + n1) + '0');
            break;
        case '-':
            sc.push((n2 - n1) + '0');
            break;
        case '*':
            sc.push((n2 * n1) + '0');
            break;
        case '/':
            sc.push((n2 / n1) + '0');
            break;
        }
        cout << sc.peek() << endl;
    }
  
    system("pause");
    return 0;
}