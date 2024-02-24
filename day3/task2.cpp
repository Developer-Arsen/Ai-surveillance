#include <iostream>
#include <string>
struct Date {
    int day;
    int month;
    int year;
};

enum WeekDays {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

void printDate(Date& date) {
    WeekDays weekDays;
    std::string week_day;

    switch (date.day)
    {
    case MONDAY:
        week_day = "Monday";
        break;
    case TUESDAY:
        week_day = "Tuesday";
        break;
    case WEDNESDAY:
        week_day = "Wednesday";
        break;        
    case FRIDAY:
        week_day = "Friday";
        break;
    case SATURDAY:
        week_day = "Saturday";
        break;
    case SUNDAY:
        week_day = "Sunday";
        break;
    }

    std::cout << "Date is: " << week_day << " " << date.month << "-" << date.year << std::endl;
}

int main () {
    Date today = {7, 2, 2024};

    printDate(today);
    return 0;
}