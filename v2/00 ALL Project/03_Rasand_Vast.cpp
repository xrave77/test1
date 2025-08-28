#include <iostream>
using namespace std;
int main()
{
    int SatrM1, SotonM1;
    cout << "Matrix 1 Chand dar Chand Bashad? ";
    cin >> SatrM1 >> SotonM1;

    int ** Matrix1 = new int *[SatrM1];
    for (int i = 0; i < SatrM1; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix1[i] = new int[SotonM1];
        for (int j = 0; j < SotonM1; j++)
        {
            cin >> Matrix1[i][j];
        }
    }

    int SatrM2, SotonM2;
    cout << "\nMatrix 2 Chand dar chand bashad? ";
    cin >> SatrM2 >> SotonM2;

    int ** Matrix2 = new int*[SatrM2];
    for (int i = 0; i < SatrM2; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix2[i] = new int[SotonM2];
        for (int j = 0; j < SotonM2; j++)
        {
            cin >> Matrix2[i][j];
        }
    }

    if (SotonM1 == SatrM2)
    {
        cout << "\nVast va Rasand Ghabel Mohasebe Ast :)\n";

    }
    else
    {
        cout << "\nVast va Rasand Ghabel Mohasebe Nist :(\n";
        return 0;
    }

    bool ** Eshterak = new bool *[SatrM1];
    bool ** Ejtema = new bool *[SatrM1];
    
    for (int i = 0; i < SatrM1; i++)
    {
        Eshterak[i] = new bool [SotonM2];
        Ejtema[i] = new bool [SotonM2];
        for (int j = 0; j < SotonM2; j++)
        {        
            Eshterak[i][j] = Matrix1[i][j] && Matrix2[i][j];
            Ejtema [i][j] = Matrix1[i][j] || Matrix2[i][j];  
        }
    }

    cout << "\nEshterak\n";
    for (int i = 0; i < SatrM1; i++)
    {
        for (int j = 0; j < SotonM2; j++)
        {
            cout << Eshterak[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nEjtema\n";
    for (int i = 0; i < SatrM1; i++)
    {
        for (int j = 0; j < SotonM2; j++)
        {
            cout << Ejtema [i][j] << " ";
        }
        cout << endl;
    }
}


// 3
// دوتا ماتریس بولی از ورودی گرفته و بررسی کند آیا وست و رسند آن ها قابل محاسبه هست  و در صورت قابل محاسبه بودن در خروجی چاپ کند: