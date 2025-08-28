#include <iostream>
using namespace std;
int main()
{
    int SatrM1, SotonM1;
    cout << "Matrix 1 chand dar chand bashad? ";
    cin >> SatrM1 >> SotonM1;

    int ** Matrix1 = new int*[SatrM1];
    for (int i = 0;i < SatrM1; i++)
    {
        cout << "SatrM1 " << i + 1 << ": ";
        Matrix1[i] = new int[SotonM1];
        for (int j = 0; j < SotonM1; j++)
        {
            cin >> Matrix1[i][j];
        }
    }

    int SatrM2, SotonM2;
    cout << "\nMatrix 2 chand dar chand bashad? ";
    cin >> SatrM2 >> SotonM2;

    int ** Matrix2 = new int*[SatrM2];
    for (int i = 0;i < SatrM1; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix2[i] = new int[SotonM2];
        for (int j = 0; j < SotonM2; j++)
        {
            cin >> Matrix2[i][j];
        }
    }

    if (SotonM1 != SatrM2)
    {
        cout << "\nSatr va Soton Matrix Namonaseb Ast :(";
        return 0;
    }

    bool Zirgeraf = true;
    for (int i = 0; i < SatrM1; i++)
    {
        for (int j = 0; j < SotonM2; j++)
        {
            if (Matrix1[i][j] == 1 && Matrix2[i][j] != 1)
            {
                Zirgeraf = false;
            }
        }
    }

    cout << "\nG1 ZirGraph G2 hast? " << (Zirgeraf ? "Yes" : "No");
}

// 14
// ماتریس مجاورت g1 و g2  را بگیرد  و بگوید آیا g1 زیر گراف g2 یا خیر 