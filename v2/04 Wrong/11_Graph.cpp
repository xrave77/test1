#include <iostream>
using namespace std;
int main()
{
    int Satr, Soton;
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
        for (int j = 0; j < Soton; j++)
        {
            if (Matrix[i][j] == 1)
            {
                cout << "Raes " << i + 1 << " ---> Be Raes " << j + 1 << " Vasl Mishavad" << endl;
            }
        }
    }
}

// 11
// ماتریس مجاورت یک گراف را از ورودی گرفته و گراف را رسم کنید