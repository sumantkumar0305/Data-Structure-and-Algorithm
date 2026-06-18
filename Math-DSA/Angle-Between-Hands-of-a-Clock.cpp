// Leetcode
// 1344. Angle Between Hands of a Clock -> Med.

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double HrAngle = 30.00*hour + 0.5*minutes;
        double MinAngle = 6.00*minutes;

        double angle = abs(HrAngle-MinAngle);

        if(angle >= 180.00){
            double it = angle - 180.00;
            angle = 180.00 - it;
        }

        return angle;
    }
};
