#include <stdio.h>
#include <time.h>

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = {205, 134, 899, 220, 612, 902, 165, 48, 387, 349, 56, 589, 953, 736, 152, 475, 729, 345, 408, 389, 314, 308, 144, 661, 259, 418, 452, 591, 794, 639, 390, 749, 487, 177, 799, 699, 879, 738, 330, 773, 697, 514, 960, 143, 791, 820, 888, 30, 862, 768, 487, 776, 58, 127, 575, 195, 731, 974, 709, 269, 796, 476, 681, 987, 475, 495, 506, 792, 812, 717, 661, 22, 347, 262, 831, 996, 398, 628, 561, 854, 395, 554, 632, 458, 517, 770, 82, 635, 461, 308, 957, 733, 997, 230, 312, 914, 848, 211, 478, 225};
    int x;
    printf("\nEnter the number to search: ");
    scanf("%d", &x);
    int N = sizeof(arr) / sizeof(arr[0]);

    clock_t start, end;
    double cpu_time_used;
    start = clock();
    int result = search(arr, N, x);
    end = clock();
    
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    cpu_time_used = ((double) (end - start));
    printf("\nTime taken: %lf", cpu_time_used);
    return 0;
}
