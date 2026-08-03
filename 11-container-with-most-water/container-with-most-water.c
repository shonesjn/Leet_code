#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max_water = 0;

    while (left < right) {
        // Calculate the width between pointers
        int width = right - left;
        
        // Find the limiting height (shorter of the two lines)
        int current_height = height[left] < height[right] ? height[left] : height[right];
        
        // Calculate current area and update max_water if it's larger
        int current_area = width * current_height;
        if (current_area > max_water) {
            max_water = current_area;
        }

        // Move the pointer corresponding to the shorter line inward
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_water;
}