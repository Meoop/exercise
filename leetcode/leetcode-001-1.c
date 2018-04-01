/**
 * Given an array of integers, return indices of the two numbers 
 * such that they add up to a specific target. You may assume that 
 * each input would have exactly one solution, and you may not use
 * the same element twice.
 * Example:
 *     Given nums = [2, 7, 11, 15], target = 9,
 *     Because nums[0] + nums[1] = 2 + 7 = 9,
 *     return [0, 1].
 */

int* twoSum(int* nums, int numsSize, int target) {
    int *r = (int *)malloc(sizeof(int) * 2);
    r[0] = -1;
    r[1] = -1;
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(target == nums[i]+nums[j]){
                r[0] = i;
                r[1] = j;
                return r;
            }
        }
    }
    return r;
}
