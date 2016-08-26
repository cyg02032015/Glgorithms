//
//  Stack.c
//  Algorithm
//
//  Created by Youngkook on 16/8/25.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include "Stack.h"
#include <string.h>
#include <stdlib.h>

// xyzyx   回文字符  入栈出栈
void stack() {
    char a[101], s[101];
    int i, len, mid, next, top = 0;
    gets(a);
    len = (int)strlen(a);
    mid = len/2 - 1;
    for (i = 0; i <= mid; i++) {
        s[++top] = a[i];
    }
    
    if (len % 2 == 0) {
        next = mid + 1;
    } else {
        next = mid + 2;
    }
    
    for (i = next; i <= len - 1; i++) {
        if (a[i] != s[top]) {
            break;
        }
        top--;
    }
    
    if (top == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
}