// My First solution
// 0 ms (< 100%), 5.7 MB (< 12.45%)

int numberOfSteps(int num){
    int n = 0;
    while(num){
        if(num % 2)
            num -= 1;
        else
            num /= 2;
        n++;
    }
    return n;
}
