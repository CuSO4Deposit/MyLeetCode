// Try if init sum each loop
// 5 ms (< 85.80%), 6.3 MB (< 10.36%)

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max = 0;
    for(int i = 0; i < accountsSize; i++){
        int sum = 0;
        for(int j = 0; j < accountsColSize[i]; j++)
            sum += accounts[i][j];
        max = max < sum ? sum : max;
    }
    return max;
}
