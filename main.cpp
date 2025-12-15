#include <iostream>
#include <string>
using namespace std;


int main()
{
    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };
    
    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };
    for (int i=0; i<5; i++){
        int sum=0;
        cout << name[i] << "的成績: ";
        for (int j=0;j<3;j++) {
            cout << score[i][j];   
        }
        cout<< "總分為: " << sum << endl;
    }
    return 0;
}