//
//  Sort.c
//  Algorithm
//
//  Created by Youngkook on 16/8/15.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include "Sort.h"

void bucketSort() {
    int a[11] = {0};
    int i,j,num;
    for (i = 1; i <= 5; i++) {
        scanf("%d", &num);
        a[num]++;
    }
    
    for (i = 0; i<=10; i++) {
        for (j = 1; j <= a[i]; j++) {
            printf("%d\n", i);
        }
    }
}

void bubbleSort(int n) {
    int a[100], i, j, t;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] >= a[j+1]) {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}