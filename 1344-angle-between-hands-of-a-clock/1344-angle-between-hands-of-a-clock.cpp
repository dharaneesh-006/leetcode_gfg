class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mini = 6.0*minutes;
        double hs = 30.0 * hour + 0.5*minutes;
        double diff = abs(hs - mini);
        return min(diff, 360.0 - diff);
    }
};