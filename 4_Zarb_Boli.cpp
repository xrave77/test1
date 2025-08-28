#include <iostream>
using namespace std;
int main()
{
    int SatrM1, SotonM1;
    cout << "Matrix 1 chand dar chand Bashad? ";
    cin >> SatrM1 >> SotonM1;

    int ** Matrix1 = new int *[SatrM1];
    for (int i = 0; i < SatrM1; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix1[i] = new int [SotonM1];
        for (int j = 0; j < SotonM1; j++)
        {
            cin >> Matrix1[i][j];
        }
    }
    int SatrM2, SotonM2;
    cout << "\nMatrix 2 chand dar chand Bashad? ";
    cin >> SatrM2 >> SotonM2;

    int ** Matrix2 = new int *[SatrM2];
    for (int i = 0; i < SatrM1; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix2[i] = new int[SotonM2];
        for (int j = 0; j < SotonM2; j++)
        {
            cin >> Matrix2[i][j];
        }
    }


    int ** Matrix3 = new int*[SatrM1];
    for (int i = 0; i < SatrM1; i++)
    {
        Matrix3[i] = new int[SotonM2];
    }

    if (SotonM1 == SatrM2)
    {
        cout << "\nZarb Boli Emkan Pazir Ast :)\n";
    }
    else
    {
        cout << "\nZarb Boli Emkan Pazir Nist :(\n";
        return 0;
    }

    for (int i = 0; i < SatrM1; i++)
    {
        for (int j = 0; j < SotonM2; j++)
        {
            Matrix3[i][j] = 0;
            for (int k = 0; k < SotonM1; k++)
            {
                Matrix3[i][j] = Matrix3[i][j] || (Matrix1[i][k] && Matrix2 [k][j]);
            }
        }
    }

    for (int i = 0; i < SatrM1; i++)
    {
        for (int j = 0; j < SotonM2; j++)
        {
            cout << Matrix3[i][j] << " ";
        }
        cout << endl;
    }


}

//4
// دوتا ماتریس بولی از ورودی گرفته و بررسی کند ضرب بولی امکان پذیر هست اگر هست ضرب بولی رو انجام بده