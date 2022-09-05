// Second Try. Python program got TLE.
// when 100000 nodes: 165 ms(< 51.07%), 69.1 MB(< 5.07%)
// when 10000 nodes: 148 ms(< 63.63%), 20.2 MB(< 8.43%)
// when 1000 nodes: 169 ms(< 48.32%), 14.2 MB(< 15.13%)
// when 100 nodes: 273 ms(< 10.49%), 13.5 MB(< 18.06%)

typedef struct node{
    int val;
    struct node* next;
}node;

int hash(int i){
    if(i < 0)
        i = -i;
    return i % 10000;
}

int Append(node** hashtable, int idx, int tocheck){
    // if tocheck in linklist, return 1; else append into
    //  linklist and thenreturn 0
    node* ptr = hashtable[idx];
    node* prior = hashtable[idx];
    if(!ptr){
        node* newNode = (node*)malloc(sizeof(node));
        newNode->val = tocheck;
        newNode->next = NULL;
        hashtable[idx] = newNode;
        return 0;
    }
    while(ptr){
        if(ptr -> val == tocheck)
            return 1;
        prior = ptr;
        ptr = ptr -> next;
    }
    node* newNode = (node*)malloc(sizeof(node));
    prior->next = newNode;
    newNode->val = tocheck;
    newNode->next = NULL;
    return 0;
}

bool containsDuplicate(int* nums, int numsSize){
    node** hashtable = (node*)malloc(10000 * sizeof(node*));
    for(int i = 0; i < 10000; i++)
        hashtable[i] = NULL;
    for(int i = 0; i < numsSize; i++){
        int HashedVal = hash(nums[i]);
        if(Append(hashtable, HashedVal, nums[i]))
            return true;
    }
    return false;
}
