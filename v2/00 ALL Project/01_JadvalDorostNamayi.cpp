#include <iostream>
using namespace std;
int main()
{
    int choice;

    cout << "[1] p -> q" << endl;
    cout << "[2] p <-> q" << endl;
    cout << "[3] p AND q" << endl;
    cout << "[4] p OR q" << endl;
    cout << "[5] (p AND q) -> r" << endl;
    cout << "[6]  p -> q       q -> p          p <-> q " << endl;
    cout << "[7] (p -> q) AND (~r)" << endl;
    cout << "[8] ~(p OR q)" << endl;
    cout << "[9] [p AND (p -> q)] -> q" << endl;
    cout << "[10] [(p -> q) AND ~q] -> ~p" << endl;
    cout << "\nEnter Your Choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "p     q       p -> q" << endl;
            cout << "_______________________" << endl;

            cout << " T     T       T" << endl;
            cout << " T     F       F" << endl;
            cout << " F     T       T" << endl;
            cout << " F     F       T" << endl;
            break;

        case 2:
            cout << "p     q       p <-> q" << endl;
            cout << "_______________________" << endl;

            cout << " T     T       T" << endl;
            cout << " T     F       F" << endl;
            cout << " F     T       F" << endl;
            cout << " F     F       T" << endl;
            break;

        case 3:
            cout << "p     q       p AND q" << endl;
            cout << "_______________________" << endl;

            cout << " T     T       T" << endl;
            cout << " T     F       F" << endl;
            cout << " F     T       F" << endl;
            cout << " F     F       F" << endl;
            break;

        case 4:
            cout << "p     q       p OR q" << endl;
            cout << "_______________________" << endl;

            cout << " T     T       T" << endl;
            cout << " T     F       T" << endl;
            cout << " F     T       T" << endl;
            cout << " F     F       F" << endl;
            break;

        case 5:
            cout << "p     q        r       p AND q     (p AND q) -> r" << endl;
            cout << "___________________________________________________" << endl;

            cout << " T     T       T          T            T" << endl;
            cout << " T     T       F          T            F" << endl;
            cout << " T     F       T          F            T" << endl;
            cout << " F     T       T          F            T" << endl;

            cout << " T     F       F          F            T" << endl;
            cout << " F     F       T          F            T" << endl;
            cout << " F     T       F          F            T" << endl;
            cout << " F     F       F          F            T" << endl;
            
            break;
        
        case 6:
            cout << "p     q       p -> q       q -> p          p <-> q" << endl;
            cout << "_____________________________________________________" << endl;

            cout << " T     T       T              T                T" << endl;
            cout << " T     F       T              T                F" << endl;
            cout << " F     T       T              F                F" << endl;
            cout << " F     F       F              T                T" << endl;
            break;
        
        case 7:
            cout << "p     q        r       p -> q          ~r      (p -> q) AND (~r)" << endl;
            cout << "_________________________________________________________________" << endl;

            cout << " T     T       T          T            F               F" << endl;
            cout << " T     T       F          T            T               T" << endl;
            cout << " T     F       T          F            F               F" << endl;
            cout << " F     T       T          T            F               F" << endl;

            cout << " T     F       F          F            T               F" << endl;
            cout << " F     F       T          T            F               F" << endl;
            cout << " F     T       F          T            T               T" << endl;
            cout << " F     F       F          T            T               T" << endl;

            break;
        
        case 8:
            cout << "p     q       ~p       ~q     p OR q         ~(p OR q)" << endl;
            cout << "______________________________________________________" << endl;

            cout << " T     T       F        F       T                F" << endl;
            cout << " T     F       F        T       T                F" << endl;
            cout << " F     T       T        F       T                F" << endl;
            cout << " F     F       T        T       F                T" << endl;
            break;
        
        case 9:
            cout << "p     q       p -> q       p AND (p -> q)     [p AND (p -> q)] -> q" << endl;
            cout << "_____________________________________________________________________" << endl;

            cout << " T     T       T               T                       T" << endl;
            cout << " T     F       F               F                       T" << endl;
            cout << " F     T       T               F                       T" << endl;
            cout << " F     F       T               F                       T" << endl;
            break;

        case 10:
            cout << "p     q       ~p       ~q        p -> q      (p -> q) AND ~q     [(p -> q) AND ~q] -> ~p" << endl;
            cout << "________________________________________________________________________________________" << endl;

            cout << " T     T       F       F          T                 F                      T" << endl;
            cout << " T     F       F       T          F                 F                      T" << endl;
            cout << " F     T       T       F          T                 F                      T" << endl;
            cout << " F     F       T       T          T                 T                      T" << endl;
            break;
    }


}

// 1
//  ورودی یک گزاره مرکب بگیره و جدول ارزش گزاره ای  رو وصل کنه و در خروجی نشان دهد