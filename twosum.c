/**
 * Note: The returned array must be malloced, assume caller calls free().
 int* nums is the array
 int numsSize is how big the array is
 int target is the value we are looking for
 int* returnSize is the dimenion of the array we are giving back
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* retarr=malloc(2*sizeof(int)); // we are giving back 2 integers
    retarr[0]=0;
    retarr[1]=1; //initialization with random numbers
    for(int i=0;i<numsSize;i++){  // bruteforce is enough for a first exercise
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                retarr[0]=i;
                retarr[1]=j;
                return retarr;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
