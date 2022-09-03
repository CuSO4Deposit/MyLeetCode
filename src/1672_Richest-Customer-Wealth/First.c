// My First Solution
// 11 ms (< 37.93%), 6.2 MB (< 38.13%) 

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int sum = 0;
    int max = 0;
    for(int i = 0; i < accountsSize; i++){
        sum = 0;
        for(int j = 0; j < accountsColSize[i]; j++)
            sum += accounts[i][j];
        max = max < sum ? sum : max;
    }
    return max;
}
