#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int day = 0;
    char answer;

    vector<vector<vector<int>>> dates(5, vector<vector<int>>(4, vector<int>(4)));
    
    int set1 = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dates[0][i][j] = set1;
            set1 += 2;
        }
    }

    int set2 = 2;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dates[1][i][j] = set2;
            if (j % 2 == 0)
                set2 += 1;
            else
                set2 += 3;
        }
    }

    int set3 = 4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dates[2][i][j] = set3;
            if (j == 3)
                set3 += 5;
            else
                set3 += 1;
        }
    }

    int set4 = 8;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dates[3][i][j] = set4;
            if (i == 1&&j==3)
                set4 += 9;
            else
                set4 += 1;
        }
    }

    int set5 = 16;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dates[4][i][j] = set5;
            set5 += 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Is your birthday in Set" << (i + 1) << "?" << endl;
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
                cout << setw(3) << dates[i][j][k] << " ";
            cout << endl;
        }
        cout << "\nEnter N for No and Y for Yes: ";
        cin >> answer;
        if (answer == 'Y')
            day += dates[i][0][0];
    }

    cout << "Your birthday is " << day << endl;

    return 0;
}