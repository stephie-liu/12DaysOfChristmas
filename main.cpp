#include <iostream>
#include "days/day01.h"
#include "days/day02.h"
#include "days/day03.h"
#include "days/day04.h"
#include "days/day05.h"
#include "days/day06.h"
#include "days/day07.h"
#include "days/day08.h"
#include "days/day09.h"
#include "days/day10.h"
#include "days/day11.h"
#include "days/day12.h"
#include "days/intro_line.h"

using namespace std;

int main() {

    for (int day = 1; day <= 12; day++){

        cout << intro_line(day) << day12(day) << day11(day) << day10(day) << day09(day) << day08(day) << day07(day) <<
                day06(day) << day05(day) << day04(day) << day03(day) << day02(day) << day01(day) << "\n";

    }

    return 0;

}
