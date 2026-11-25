class Solution {
public:
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    bool isRobotBounded(string ins) {
        int x = 0, y = 0;
        int dir = 0;  
        for (char a : ins) {
            if (a == 'G') {
                x += dx[dir];
                y += dy[dir];
            }
            else if (a == 'L') {
                dir = (dir + 3) % 4;
            }
            else if (a == 'R') {
                dir = (dir + 1) % 4;
            }
        }

        return (x == 0 && y == 0) || dir != 0;
    }
};