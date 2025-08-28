#include <iostream>
using namespace std;
int main()
{
    int SatrMS, SotonMS;
    cout << "Matrix S chand dar chand bashad? ";
    cin >> SatrMS >> SotonMS;

    int ** MatrixS = new int * [SatrMS];
    for (int i = 0; i < SatrMS; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        MatrixS[i] = new int [SotonMS];
        for (int j = 0; j < SotonMS; j++)
        {
            cin >> MatrixS[i][j];
        }
    }

    int SatrMR, SotonMR;
    cout << "\nMatrix R chand dar chand bashad? ";
    cin >> SatrMR >> SotonMR;

    int ** MatrixR = new int * [SatrMR];
    for (int i = 0; i < SatrMR; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        MatrixR[i] = new int [SotonMR];
        for (int j = 0; j < SotonMR; j++)
        {
            cin >> MatrixR[i][j];
        }
    }

    int ** MatrixRoS = new int * [SatrMS];
    for (int i = 0; i < SatrMS ; i++)
    {
        MatrixRoS[i] = new int [SotonMR];
    }


    if (SotonMS != SatrMR)
    {
        cout << "\nSatr va Soton Namonaseb Ast :(";
        return 0;
    }

    for (int i = 0; i < SatrMS; i++)
    {
        for (int j = 0; j < SotonMR; j++)
        {
            MatrixRoS[i][j] = 0;
            for (int k = 0; k < SotonMR; k++)
            {
                MatrixRoS[i][j] = MatrixRoS[i][j] || (MatrixS[i][k] && MatrixR[k][j]);
            }
        }
    }

    cout << "\nRoS = Matrix(S) * Matrix(R)\n";
    for (int i = 0; i < SatrMS; i++)
    {
        for (int j = 0; j < SotonMR; j++)
        {
            cout << MatrixRoS[i][j] << " ";
        }
        cout << endl;
    }


}

// 10
// ماتریس متناظر با رابطه R و ماتریس متناظر با رابطه S را بگیرد و ماتریس متناظر با RoS را چاپ کند