#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float s=0;
    float k=0;
    for (int i=1; i<7; i++){
        s = (1/(pow(i, (1.5))));
        k += s;
        cout << s << endl;
    }
    cout << k << endl;
}
/*
1
0.353553
0.19245
0.125
0.0894427
0.0680414
1.82849
Вывод программы
*/

