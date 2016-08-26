//
//  main.c
//  Algorithm
//
//  Created by Youngkook on 16/8/15.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include <stdio.h>
#include "Example.h"
#include "Sort.h"
#include "Queue.h"
#include "Stack.h"
#include "CardGame.h"
#include "LinkedList.h"
#include "DeepFirstSearch.h"
//int a[101], n;
int a[10], book[10], n, sum = 0;
void quickSort(int left, int right);
int main(int argc, const char * argv[]) {
//    bubleEg(5);
//    bucketSort();
//    bubbleSort(5);
//    queue();
//    stack();
//    playgame();
//    createAndInsert();
    deepFirstSearch();
    printf("%d\n", sum);
    
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &a[i]);
//    }
//    quickSort(0, 4);
//    for (int i = 0; i < 5; i++) {
//        printf("%d", a[i]);
//    }
    return 0;
}


void dfs(int step) {
    int i;
    if (step == n + 1) {
        for (i = 1; i <=n; i++) {
            
//            printf("%d", a[i]);
        }
        sum++;
//        printf("\n");
        return;
    }
    
    for (i = 1; i <= n; i++) {
        if (book[i] == 0) {
            a[step] = i;
            book[i] = 1;
            dfs(step + 1);
            book[i] = 0;
        }
    }
    return;
}

void deepFirstSearch() {
    scanf("%d", &n);
    dfs(1);
    getchar();
}

/**
 *  快速排序
 *  时间复杂度 O(NlogN)
 */
void quickSort(int left, int right) {
    int i,j,t,temp; // temp是基准数
    if (left > right) {
        return;
    }
    temp = a[left];
    i = left;
    j = right;
    while (i != j) {
        while (a[j] >= temp && i < j) {
            j--;
        }
        while (a[i] <= temp && i <j) {
            i++;
        }
        
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    // 基准数归为
    a[left] = a[i];
    a[i] = temp;
    
    quickSort(left, i-1);
    quickSort(i+1, right);
}