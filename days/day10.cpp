#include <iostream>
#include "intro_line.h"

using namespace std;

string day10(int day){

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

    if(day == 1){
        line += "";
    } else if (day == 2){
        line += "";
    } else if (day == 3){
        line += "";
    } else if (day == 4){
        line += "";
    } else if (day == 5){
        line += "";
    } else if (day == 6){
        line += "";
    } else if (day == 7){
        line += "";
    } else if (day == 8){
        line += "";
    } else if (day == 9){
        line += "";
    } else if (day == 10){
        line += "Ten lords a-leaping\n";
    } else if (day == 11){
        line += "Ten lords a-leaping\n";
    } else {
        line += "Ten lords a-leaping\n";
    }

    return line;

}