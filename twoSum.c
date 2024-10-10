#include <stdio.h>

// Function to find two sum
void twoSum(int nums[], int numsSize, int target, int result[]) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

int main() {
    int nums[] = {6, 5, 3, 2};
    int target = 11;
    int result[2] = {-1, -1}; // To store the output indices
    
    twoSum(nums, 4, target, result);
    
    if (result[0] != -1) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No solution found\n");
    }

    return 0;
}
