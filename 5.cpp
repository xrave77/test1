#include <iostream>
using namespace std;
int main()
{
    int matrix [3] [3];
    int n;
    cout << "n: ";
    cin >> n;

    cout << "\nMATRIX\n";
    for (int i = 0; i < 3 ; i++)
    {
        cout << "Satr " <<  i + 1 << ": ";
        
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix [i] [j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << n * matrix [i] [j] << " ";
        }
        cout << endl;
    }
}


// 5
// ماتریس متناظر با یک رابطه رو از ورودی بگیره  و عدد n رو هم از ورودی بگیره و ماتریس متناظر با Rn رو رو چاپ کنه: