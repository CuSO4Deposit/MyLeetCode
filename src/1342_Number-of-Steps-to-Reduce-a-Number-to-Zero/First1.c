// My Another First Solution (bitwise). Maybe no diff after compiler's optimization.
// 0 ms (< 100%), 5.4 MB (< 65.37 %)

int numberOfSteps(int num){
    int n = 0;
    while(num){
        if(num & 1)
            num -= 1;
        else
            num >>= 1;
        n++;
    }
    return n;
}
