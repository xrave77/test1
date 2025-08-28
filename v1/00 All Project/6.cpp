#include <iostream>
using namespace std;
int main()
{
    int matrix [3] [3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < 3; j++)
        {
            cin >> matrix [i] [j];
        }
    }
    bool Taghorn = true;
    for (int i = 0; i < 3 && Taghorn; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                Taghorn =false;
                break;
            }
        }
    }
    bool Padtaghorn = true;
    for (int i = 0; i < 3 && Padtaghorn; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j && matrix[i][j] == 1 && matrix[j][i] == 1)
            {
                Padtaghorn = false;
                break;
            }
        }
    }
    bool Tarayabi = true;
    for (int i = 0; i < 3 && Tarayabi; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (matrix[j][k] && !matrix[i][k])
                    {
                        Tarayabi = false;
                        break;
                    }
                }
            }
        }
    }
    cout << "\nTaghoroni: " << (Taghorn ? "Yes" : "No") << endl;
    cout << "Pad Taghorni: " << (Padtaghorn ? "Yes" : "No") << endl;
    cout << "Tarayabi: " << (Tarayabi ? "Yes" : "No") << endl;
}


// 6
// ماتریس متناظر با یک رابطه رو از ورودی بگیره و بررسی کنه که این ماتریس آیا خاصیت تقارن و خاصیت پاد تقارن و خاصیت ترایایی دارد یا خیر؟