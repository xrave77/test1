#include <iostream>
using namespace std;
int main()
{
    int Satr, Soton;
    cout << "Matrix chand dar chand bashad? ";
    cin >> Satr >> Soton;

    int ** Matrix = new int *[Satr];
    for (int i = 0; i < Satr; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix[i] = new int [Soton];
        for (int j = 0; j < Soton; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    for (int k = 0; k < Soton; k++)
    {
        for (int i = 0; i < Satr; i++)
        {
            for (int j = 0; j < Soton; j++)
            {
                if (Matrix[i][k] && Matrix[k][j])
                {
                    Matrix [i] [j] = 1;
                }
            }
        }
    }

    cout << "\nBASTAR TARAYABI\n";
    for (int i = 0; i < Satr; i++)
    {
        for (int j = 0; j < Soton; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// 9
// بستار ترایابی