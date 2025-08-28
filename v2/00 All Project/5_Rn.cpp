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

    cout << "\n" << n << " * Matrix(R)" << Satr << "x" << Soton << endl;
    for (int i = 0; i < Satr; i++)
    {
        for (int j = 0; j < Soton; j++)
        {
            cout << n * Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// 5
// ماتریس متناظر با یک رابطه رو از ورودی بگیره  و عدد n رو هم از ورودی بگیره و ماتریس متناظر با Rn رو رو چاپ کنه: