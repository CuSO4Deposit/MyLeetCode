// A more elegant algorithm: string cat.
// and use hash... I think my first approach is kind of a hash.
// Though the algorithm is good, it's hard to impl in C.
// 14 ms(< 27.78%), 6.9 MB (< 87.56%)

char ** fizzBuzz(int n, int* returnSize){
    char** answer = (char**)malloc(n * sizeof(char*));
    char* Fizz = "Fizz";
    char* Buzz = "Buzz";
    for(int i = 1; i < n + 1; i++){
        answer[i - 1] = (char*)malloc(9 * sizeof(char));
        if(!(i % 3)){
            strcpy(answer[i - 1], Fizz);
        }
        if(!(i % 5)){
            if(i % 3)
                strcpy(answer[i - 1], Buzz);
            else    
                strcat(answer[i - 1], Buzz);
        }
        if(i % 3 && i % 5)
            sprintf(answer[i - 1], "%d", i);
    }
    *returnSize = n;
    return answer;
}
