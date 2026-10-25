#include <bits/stdc++.h>
using namespace std;
#define ROW 6
#define COL 5

int main(void){
    int examWeek;
    cout << "exam_week = ";
    cin >> examWeek;

    int k = ROW - examWeek + 1;

    vector<vector<string>> v = {
        {"A", "B", "C", "D", "E"},
        {"F", "G", "H", "I", "J"},
        {"K", "L", "M", "N", "O"},
        {"P", "Q", "R", "S", "T"},
        {"U", "V", "W", "X", "Y"},
        {"Z", "AA", "BB", "CC", "DD"}
    };

    int frndROW = 0;

    for (int i = 0; i < v.size(); i++){
        cout << "| ";
        for (int j = 0; j < v[i].size(); j++){
            cout << v[(i+k)%ROW][j] << " |";
            if (v[i][j] == "AA") frndROW = i;
        }
        cout << endl;
    }

    int res = (frndROW+examWeek)%ROW;

    cout << "Your friend AA will be on row " << res << endl;
}