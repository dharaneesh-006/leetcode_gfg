int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int i = 0, j = 0;
    int cnt = 0;
    int n = startTimeSize;
    while(i < n)
    {
        if(startTime[i] <= queryTime && endTime[i] >= queryTime)
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}