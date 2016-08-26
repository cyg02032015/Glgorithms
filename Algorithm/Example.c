//
//  Example.c
//  Algorithm
//
//  Created by Youngkook on 16/8/15.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include "Example.h"

struct student {
    char name[21];
    int score;
};

void bubleEg(int n) {
    struct student a[100], t;
    int i,j;
    for (i = 1; i <= n; i++) {
        scanf("%s %d", a[i].name, &a[i].score);
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (a[j].score < a[j+1].score) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%s %d", a[i].name, a[i].score);
    }
}
