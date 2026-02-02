//1st
#include <stdio.h>
int main() {
    int size, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[size];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    int result[2];  
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                printf("Result Array: [%d, %d]\n", result[0], result[1]);
                return 0;
            }
        }
    }
    printf("No solution found\n");
    return 0;
}