#include <iostream>

using namespace std;

int main()
{
    int a=0, b=1, c=0, d=2;
    int hm[3][2][2];
    float rata_rata;

    for(int o=0; o<3; o++){
        for(int k=0; k<2; k++){
            for(int e=0; e<2; e++){
                hm[o][k][e] = d;
                d += 2;
                cout << d << " ";
                c += d;
                a += b;
                rata_rata = (float)c / a;
            }
        }
    }
    cout << "\n";
    cout << "Sum kelipatan 4 = "  << c << endl;
    cout << "Rata-rata sum kelipatan 4 = " << rata_rata << endl;

    return 0;
}
