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

    for (int i = 0; i < 3; i++)
    {
        cout << "\nGraph " << i + 1 << " -> ";
        bool IsCorrect = false;

        for (int j = 0; j < 3; j++)
        {
            if (matrix [i] [j] == 1)
            {
                cout << j + 1 << " ";
                IsCorrect = true;
            }
        }
        if (!IsCorrect)
        {
            cout << "NONE";
        }
        
    }
}


// 2
// ماتریس متناظر با یک رابطه رو از ورودی گرفته و گراف جهت دار متناظر با آن رو وصل کند و در خروجی چاپ کند
