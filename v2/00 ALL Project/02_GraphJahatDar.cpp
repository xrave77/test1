#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int Satr,Soton;
    cout << "Matrix chand dar chand bashad? ";
    cin >> Satr >> Soton;

    int ** Matrix = new int*[Satr];
    for (int i = 0; i < Satr; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix[i] = new int [Soton];
        for (int j = 0; j < Soton; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    for (int i = 0; i < Satr; i++)
    {
        cout << "\n" << i + 1 << " -> ";
        bool IsCorrect = false;

        for (int j = 0; j < Soton; j++)
        {
            if (Matrix [i] [j] == 1)
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
