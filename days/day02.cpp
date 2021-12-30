#include <iostream>
#include "day02.h"

using namespace std;

string day02(int day){
    string line = "";
    if (day >= 2 & day <= 12){
        line = "Two turd o' doves\n";
    }
    return line;
}

int main() {
    int day = 2;
    cout << day02(day) << endl;
    return 0;
}