//
//  CardGame.c
//  Algorithm
//
//  Created by Youngkook on 16/8/26.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include "CardGame.h"

// 每个人手里的牌
struct queue {
    int data[1000];
    int head;
    int tail;
};

// 桌子
struct stack {
    int data[1000];
    int top;
};

void playgame() {
    struct queue wang, zhang;
    struct stack table;
    
    // 初始化空队列
    wang.head = 1; wang.tail = 1;
    zhang.head = 1; zhang.tail = 1;
    // 初始化栈
    table.top = 0;
    
    int book[10];
    int i, t;
    
    for (i = 1; i <= 9; i++) {
        book[i] = 0;
    }
    
    // 分牌  1-9
    for (i = 1; i <= 6; i++) {
        scanf("%d", &wang.data[wang.tail]);
        wang.tail++;
    }
    
    for (i = 1; i <= 6; i++) {
        scanf("%d", &zhang.data[zhang.tail]);
        zhang.tail++;
    }
    
    while (wang.head < wang.tail && zhang.head < zhang.tail) { // 当队列不为空
        t = wang.data[wang.head]; // 隔壁老王出牌
        if (book[t] == 0) { // 没有相同的牌
            wang.head++;
            table.top++;
            table.data[table.top] = t;
            book[t] = 1;
        } else {
            wang.head++;
            wang.data[wang.tail] = t;
            wang.tail++;
            while (table.data[table.top] != t) {
                book[table.data[table.top]] = 0; // 取消标记
                wang.data[wang.tail] = table.data[table.top];
                wang.tail++;
                table.top--;
            }
            book[table.data[table.top]] = 0;
            wang.data[wang.tail] = table.data[table.top];
            wang.tail++;
            table.top--;
        }
        if (wang.head == wang.tail) { // 老王没牌了
            break;
        }
        
        t = zhang.data[zhang.head]; // 隔壁老张出牌
        if (book[t] == 0) { // 没有相同的牌
            zhang.head++;
            table.top++;
            table.data[table.top] = t;
            book[t] = 1;
        } else {
            zhang.head++;
            zhang.data[zhang.tail] = t;
            zhang.tail++;
            while (table.data[table.top] != t) {
                book[table.data[table.top]] = 0; // 取消标记
                zhang.data[zhang.tail] = table.data[table.top];
                zhang.tail++;
                table.top--;
            }
            book[table.data[table.top]] = 0;
            zhang.data[zhang.tail] = table.data[table.top];
            zhang.tail++;
            table.top--;
        }
        if (zhang.head == zhang.tail) { // 老王没牌了
            break;
        }
    }
    
    if (zhang.head == zhang.tail) {
        printf("老王win\n");
        printf("老王手中的牌是\n");
        for (i = wang.head; i <= wang.tail - 1; i++) {
            printf("%d", wang.data[i]);
        }
        
        if (table.top > 0) { // 桌面有牌
            printf("\n桌上的牌：");
            for (i = 1; i <= table.top; i++) {
                printf("%d", table.data[i]);
            }
        } else {
            printf("\n桌子上没牌");
        }
    } else {
        printf("老张win\n");
        printf("老张手中的牌是\n");
        for (i = zhang.head; i <= zhang.tail - 1; i++) {
            printf("%d", zhang.data[i]);
        }
        
        if (table.top > 0) { // 桌面有牌
            printf("\n桌上的牌：");
            for (i = 1; i <= table.top; i++) {
                printf("%d", table.data[i]);
            }
        } else {
            printf("\n桌子上没牌");
        }
    }
}
