#include <stdio.h>

int main() {
    int n, arr[100], i, x, first = 0, last, mid,f=0;
    
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("\n Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\n Enter the element to be searched: ");
    scanf("%d", &x);
    
    last = n - 1;
   
    
    while (first <= last) {
         mid = (first + last) / 2;
        if (arr[mid] < x) {
            first = mid + 1;
        } else if (arr[mid] == x) {
            printf("Element found");
            f=1;
            break;
        } else {
            last = mid - 1;
            mid = (first + last) / 2;
        }
    }
    
    if (f==0) {
        printf("Element not found");
    }
    
    return 0;
}
