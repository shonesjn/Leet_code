double findMedianSortedArrays(int* nums1, int nums1Size,
                              int* nums2, int nums2Size) {

    int m = nums1Size + nums2Size;
    int done[m];

    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j])
            done[k++] = nums1[i++];
        else
            done[k++] = nums2[j++];
    }

    while (i < nums1Size)
        done[k++] = nums1[i++];

    while (j < nums2Size)
        done[k++] = nums2[j++];

    if (m % 2 == 1)
        return done[m / 2];

    return (done[m / 2] + done[m / 2 - 1]) / 2.0;
}