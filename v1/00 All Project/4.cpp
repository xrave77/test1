#include <iostream>
using namespace std;
int main()
{
    int Matrix_1 [3] [3];
    int Matrix_2 [3] [3];
    
    const int satrM1 = 3, satrM2 = 3;
    const int sotonM1 = 3, sotonM2 = 3;
    bool natije [satrM1] [sotonM2];

    cout << "MATRIX 1" << endl;
    for (int i = 0; i < satrM1; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < sotonM1; j++)
        {
            cin >> Matrix_1 [i] [j];
        }
    }

    cout << "\nMATRIX 2" << endl;
    for (int i = 0; i < satrM2; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < sotonM2; j++)
        {
            cin >> Matrix_2 [i] [j];
        }
    }

    if (sotonM1 == satrM2)
    {
        cout << "\nZarb Boli Emkan Pazir Ast" << endl;
    }
    else
    {
        cout << "\nZarb Boli Emkan Pazir Nist";
        return 0;
    }


    for (int i = 0 ; i < satrM1; i++)
    {
        for (int j = 0; j < sotonM2; j++)
        {
            natije[i][j] = false;
            for (int k = 0; k < sotonM1; k++)
            {
                natije[i][j] = natije[i][j] || (Matrix_1[i][k] && Matrix_2 [k][j]);
            }
        }
    }
    for (int i = 0; i < satrM1; i++)
    {
        for (int j = 0; j < sotonM2; j++)
        {
            cout << natije[i][j] << " ";
        }
        cout << endl;
    }

}

//4
// دوتا ماتریس بولی از ورودی گرفته و بررسی کند ضرب بولی امکان پذیر هست اگر هست ضرب بولی رو انجام بده