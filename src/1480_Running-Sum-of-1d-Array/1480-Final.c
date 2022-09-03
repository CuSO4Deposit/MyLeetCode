// Final
// Use the input array as output, reduce space complexity.
// 18ms, 6.6MB
int* runningSum(int* nums, int numsSize, int* returnSize){
    for(int i = 1; i < numsSize; i++)
        nums[i] += nums[i - 1];
    *returnSize = numsSize;
    return nums;
}
