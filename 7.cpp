#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        matrix [i][i] = 1;
    }
    
    cout << "\nBASTAR BAZTABI\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix [i] [j] << " ";
        }
        cout << endl;
    }
}


// 7
//  یک ماتریس متناظر با یک رابطه را بگیرد بستار های بازتابی