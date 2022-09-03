// Inspired by: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/discuss/502809/just-count-number-of-0-and-1-in-binary
// 0 ms(< 100%), 5.6 MB (< 12.45%)

int numberOfSteps(int num){
    int n = 0;
    if(!num)    return 0;
    while(num){
        n += (num & 1) ? 2 : 1;
        num >>= 1;
    }
    return n - 1;   // leftmost 1 don't need a division.
}
