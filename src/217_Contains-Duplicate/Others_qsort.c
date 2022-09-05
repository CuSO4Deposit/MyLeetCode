// Another alg. use qsort: O(n logn).

static int comp(const int* l, const int* r){
    return (*l - *r);
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);
    for(int i = 1; i < numsSize; i++){
        if(nums[i] == nums[i - 1])
            return true;
    }
    return false;
}
