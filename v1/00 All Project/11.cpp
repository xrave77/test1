#include <iostream>
using namespace std;

int main() 
{
    int Matrix [3][3];

    for (int i = 0 ; i < 3 ; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < 3; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Matrix [i] [j])
            {
                cout << "Raes " << i + 1 << " ---> " << "Be Raes " << j + 1  << " Vasl Mishavad "<< endl;
            }
        }
    }
    
}


// 11
// ماتریس مجاورت یک گراف را از ورودی گرفته و گراف را رسم کنید