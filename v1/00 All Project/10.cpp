#include <iostream>
using namespace std;
int main()
{
    int Matrix_R [3] [3];
    int Matrix_S [3] [3];
    int Matrix_Javab [3] [3];

    cout << "MATRIX R\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < 3; j++)
        {
            cin >> Matrix_R[i] [j];
        }
    }

    cout << "\nMATRIX S\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < 3; j++)
        {
            cin >> Matrix_S[i] [j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Matrix_Javab[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                Matrix_Javab[i][j] = Matrix_Javab[i][j] || (Matrix_S[i][k] * Matrix_R [k][j]);
            }
        }
    }
    cout << "\nRoS = MATRIX S . Matrix R " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Matrix_Javab[i][j] << " ";
        }
        cout << endl;
    }
}


// 10
// ماتریس متناظر با رابطه R و ماتریس متناظر با رابطه S را بگیرد و ماتریس متناظر با RoS را چاپ کند .