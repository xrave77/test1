#include <iostream>
using namespace std;
int main()
{
    int Satr,Soton;
    cout << "Matrix Chand Dar Chand Bashad? ";
    cin >> Satr >> Soton;

    int ** Matrix = new int *[Satr];
    for (int i = 0; i < Satr; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix[i] = new int[Soton];
        for (int j = 0; j < Soton; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    bool Tagharon = true;
    for (int i = 0; i < Satr; i++)
    {
        for (int j = 0; j < Soton; j++)
        {
            if (Matrix[i][j] != Matrix[j][i])
            {
                Tagharon = false;
                break;
            }
        }
    }
    
    bool PadTagharon = true;
    for (int i = 0; i < Satr; i++)
    {
        for (int j = 0; j < Soton; j++)
        {
            if (i != j && Matrix[i][j] == 1 && Matrix[j][i] == 1)
            {
                PadTagharon = false;
            }
        }
    }

    bool Tarayabi = true;
    for (int i = 0; i < Satr; i++)
    {
        for (int j = 0; j < Soton; j++)
        {
            if (Matrix[i][j] == 1 )
            {
                for (int k = 0; k < Soton; k++)
                {
                    if (Matrix[j][k] == 1 && Matrix[i][k] == 0)
                    {
                        Tarayabi = false;
                    }
                }
            }
        }
    }

    cout << "\nTaghoroni? " << (Tagharon ? "Yes" : "No") << endl;
    cout << "Pad Taghorni? " << (PadTagharon ? "Yes" : "No") << endl;
    cout << "Tarayabi? " << (Tarayabi ? "Yes" : "No") << endl;
}



// 6
// ماتریس متناظر با یک رابطه رو از ورودی بگیره و بررسی کنه که این ماتریس آیا خاصیت تقارن و خاصیت پاد تقارن و خاصیت ترایایی دارد یا خیر؟