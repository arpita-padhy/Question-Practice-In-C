#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int count = 0, candidate = 0;

    for (int i = 0; i < numsSize; i++) {
        if (count == 0)
            candidate = nums[i];

        if (nums[i] == candidate)
            count++;
        else
            count--;
    }
    return candidate;
}

int main() {
    int arr[] = {2, 2, 1, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maj = majorityElement(arr, n);
    printf("Majority element is %d\n", maj);

    return 0;
}