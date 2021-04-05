//3.1.cpp
#include <iostream>
#include "Date.h"

int main()
{
    Date A, B, C, D;
    int result;

    cout << " Enter t1: " << endl;
    cin >> A;

    cout << " Enter t2: " << endl;
    cin >> B;

    cout << " Comparison Triad: " << endl;
    result = A.Сomparison(A, B);
    A.TriadResult(result);

    cout << " Enter d1: " << endl;
    cin >> C;

    cout << " Enter d2: " << endl;
    cin >> D;

    cout << " Comparison Date: " << endl;
    result = C.Сomparison(C, D);
    C.date1(result);

    return 0;
}
