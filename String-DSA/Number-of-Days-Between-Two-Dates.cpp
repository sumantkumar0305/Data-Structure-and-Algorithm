// leetcode
// 1360. Number of Days Between Two Dates -> Easy

class Solution {
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int days(int year, int month, int day){
        static const int un[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int totalDays = day;

        for (int m = 1; m < month; ++m) {
            totalDays += un[m];
        }

        if(month > 2 && isLeapYear(year)){
            totalDays ++;
        }
        
        for(int i = 1971; i < year; i++){
            totalDays += 365;
            if(isLeapYear(i)){
                totalDays++;
            }
        }

        return totalDays;
    }
public:
    int daysBetweenDates(string date1, string date2) {
        int fYear = stoi(date1.substr(0, 4));
        int sYear = stoi(date2.substr(0, 4));    
        
        int fMon = stoi(date1.substr(5, 2));
        int sMon = stoi(date2.substr(5, 2));

        int fDay = stoi(date1.substr(8, 2));
        int sDay = stoi(date2.substr(8, 2));

        return abs(days(fYear, fMon, fDay)-days(sYear, sMon, sDay));
    }
};
