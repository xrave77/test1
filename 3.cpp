#include <iostream>
using namespace std;
int main()
{
    int Matrix_1 [3] [3];
    int Matrix_2 [3] [3];

    const int satrM1 = 3, satrM2 = 3;
    const int sotonM1 = 3, sotonM2 = 3;

    cout << "MATRIX 1" << endl;
    for (int i = 0; i < satrM1; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        for (int j = 0; j < sotonM1 ; j++)
        {
            cin >> Matrix_1 [i] [j];
        }
    }

    cout << "\nMATRIX 2" << endl;
    for (int i = 0; i < satrM2; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        for (int j = 0; j < sotonM2 ; j++)
        {
            cin >> Matrix_2 [i] [j];
        }
    }

    if (sotonM1 == satrM2)
    {
        cout << "\nVast & Rasand Ghabel Mohasebe Ast";
    }
    else
    {
        cout << "\nVast & Rasand Ghabel Mohasebe Nist";
        return 0;
    }

    bool Ejtema [3] [3];
    bool Eshterak [3] [3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Ejtema[i][j] = Matrix_1[i][j] || Matrix_2[i][j];
            Eshterak[i][j] = Matrix_1[i][j] && Matrix_2[i][j];
        }
    }

    cout << "\nEjtema: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Ejtema [i] [j] << " ";
        }
        cout << endl;
    }


    cout << "\nEshterak: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Eshterak [i] [j] << " ";
        }
        cout << endl;
    }
    
}

// 3
// دوتا ماتریس بولی از ورودی گرفته و بررسی کند آیا وست و رسند آن ها قابل محاسبه هست  و در صورت قابل محاسبه بودن در خروجی چاپ کند: