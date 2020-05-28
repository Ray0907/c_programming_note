#include <stdio.h>
#include <stdbool.h>
void split_date(int day_of_year, int year, int *month, int *day) {

    int i;
    bool found = false;

    for (i = 1; i <= 12 && !found; i++) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day_of_year <= 31)
                    found = true;
                else
                    day_of_year -= 31;
                break;
            case 4: case 6: case 9: case 11:
                if (day_of_year <= 30)
                    found = true;
                else 
                    day_of_year -= 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    if (day_of_year <= 29)
                        found = true;
                    else
                        day_of_year -= 29;
                } else {
                    if (day_of_year <= 28)
                        found = true;
                    else
                        day_of_year -= 28;
                }
                break;
        }
    }
    *month = i - 1;
    *day = day_of_year;
}