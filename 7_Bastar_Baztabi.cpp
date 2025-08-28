#include <iostream>
using namespace std;
int main()
{
    int Satr, Soton;
    cout << "Matrix Chand Dar Chand Bashad? ";
    cin >> Satr >> Soton;

    int ** Matrix = new int*[Satr];
    for (int i = 0; i < Satr; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix[i] = new int[Soton];
        for (int j = 0; j < Soton; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    for (int i = 0; i < Satr; i++)
    {
        Matrix[i][i] = 1;
    }

    for (int i = 0; i < Satr; i++)
    {
        for (int j = 0; j < Soton; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// 7
// بستار بازتابی