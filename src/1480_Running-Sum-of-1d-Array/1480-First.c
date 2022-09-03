// My First Solution
// 11ms, 6.7MB
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int* sum = (int*)malloc(numsSize * sizeof(int));
    sum[0] = nums[0];
    for(int i = 1; i < numsSize; i++)
        sum[i] = sum[i - 1] + nums[i];
    *returnSize = numsSize;
    return sum;
}
