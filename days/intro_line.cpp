#include <iostream>
#include "intro_line.h"

using namespace std;

string intro_line(int day){

    string line = "On the " + to_string(day);

    if (day == 1){
        line += "st";
    } else if (day == 2){
        line += "nd";
    } else if (day == 3){
        line += "rd";
    } else {
        line += "th";
    }

    line += " day of Christmas\nMy true love sent to me\n";

    return line;

}
