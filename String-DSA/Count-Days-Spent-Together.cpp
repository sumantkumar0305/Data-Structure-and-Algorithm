// leetcode
// 2409. Count Days Spent Together -> Easy

class Solution {
    int days(int month, int day){
        static const int un[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int totalDays = 0;

        for (int m = 1; m < month; ++m) {
            totalDays += un[m];
        }

        totalDays += day;
        return totalDays;
    }

    bool isBw(string st, string end, string check){
        int cMon = stoi(check.substr(0, 2));
        int eMon = stoi(end.substr(0, 2));
        int sMon = stoi(st.substr(0,2));

        if(cMon < sMon)return false;
        if(cMon > eMon)return false;

        int cDate = stoi(check.substr(3, 2));
        int eDate = stoi(end.substr(3, 2));
        int sDate = stoi(st.substr(3, 2));

        if(cMon == sMon && cDate < sDate) return false;
        if(cMon == eMon && cDate > eDate) return false;

        return true;
    }

    pair<int, int>arr_mon_day(string fir, string sec){
        int fMon = stoi(fir.substr(0, 2));
        int sMon = stoi(sec.substr(0, 2));

        int maxM = max(fMon, sMon);

        int fDate = stoi(fir.substr(3, 2));
        int sDate = stoi(sec.substr(3, 2));

        int maxD;
        if (fMon > sMon) maxD = fDate;
        else if (sMon > fMon) maxD = sDate;
        else maxD = max(fDate, sDate);

        return {maxM, maxD};
    }

    pair<int, int>lea_mon_day(string fir, string sec){
        int fMon = stoi(fir.substr(0, 2));
        int sMon = stoi(sec.substr(0, 2));

        int maxM = min(fMon, sMon);

        int fDate = stoi(fir.substr(3, 2));
        int sDate = stoi(sec.substr(3, 2));

        int minD;
        if (fMon < sMon) minD = fDate;
        else if (sMon < fMon) minD = sDate;
        else minD = min(fDate, sDate);

        return {maxM, minD};
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        if(!(isBw(arriveAlice, leaveAlice, arriveBob) || isBw(arriveAlice, leaveAlice, leaveBob) || isBw(arriveBob, leaveBob, leaveAlice) || isBw(arriveBob, leaveBob, arriveAlice)))return 0;

        auto arr = arr_mon_day(arriveAlice, arriveBob);
        auto lea = lea_mon_day(leaveAlice, leaveBob);

        int startDayNum = days(arr.first, arr.second);
        int endDayNum = days(lea.first, lea.second);

        int duration = endDayNum-startDayNum+1;

        return duration;
    }
};
