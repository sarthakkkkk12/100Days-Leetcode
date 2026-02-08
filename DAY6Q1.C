void moveZeroes(int* nums, int numsSize) {
    int k = 0;   // index for next non-zero element

    // Move non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Fill remaining positions with zeros
    while (k < numsSize) {
        nums[k] = 0;
        k++;
    }
}
