// My First Solution
// 4 ms (< 94.08%), 7 MB (< 67.27%)

char ** fizzBuzz(int n, int* returnSize){
    char** answer = (char**)malloc(n * sizeof(char*));
    char* Fizz = "Fizz";
    char* Buzz = "Buzz";
    char* FB = "FizzBuzz";
    for(int i = 1; i < n + 1; i++){
        if(!(i % 15)){
            answer[i - 1] = FB;
            continue;
        }
        if(!( i % 3)){
            answer[i - 1] = Fizz;
            continue;
        }
        if(!( i % 5)){
            answer[i - 1] = Buzz;
            continue;
        }
        answer[i - 1] = (char*)malloc(5 * sizeof(char));
        sprintf(answer[i - 1], "%d", i);
    }
    *returnSize = n;
    return answer;
}
