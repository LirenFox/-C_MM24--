#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hr, SPH;
    while(cin >> hr >> SPH){
        double salary=0;
        if(hr <=60){//60 小時 ( 含 ) 以下的薪水部份，以固定時薪計算
            salary = hr * SPH * 1.0;
            cout << fixed << setprecision(1) << salary << endl;
        }
        else if(hr <= 120){//61 ～ 120 小時之間的薪水部份，以固定時薪的 1.33 倍計算。
            salary = 60.0 * SPH;
            salary += (hr-60) * SPH * 1.33;
            cout << fixed << setprecision(1) << salary << endl;
        }
        else if(hr > 120){//第 121 小時以上的薪水部份，以固定時薪的 1.66 倍計算。
            salary = 60.0 * SPH;
            salary += 60.0 * SPH * 1.33;
            salary += (hr-120) * SPH * 1.66;
            cout << fixed << setprecision(1) << salary << endl;
        }
    }
    return 0;
}
