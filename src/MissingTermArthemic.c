#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int findMissing(const int *nums, size_t n);

int main(){
    size_t size;
    const int *nums;
    scanf("Enter a fixed size: &u", &size);
    for(size_t i = 0; i < size; ++i){
        scanf("Enter a number &u", &i);
    }
    scanf("Enter an array of ints");
    return 0;
}

int findMissing(const int *nums, size_t n){
    int *end = nums[n-1];
    int *begining = nums[0];
    int missing = 0;
    int *difference = (&end - &begining)/n;
    for(unsigned int i = 0; i < n - 1; ++i){
        if(&nums[i + 1] - &nums[i] !=difference){
            return &nums[i] + *difference;
        }
    }

}