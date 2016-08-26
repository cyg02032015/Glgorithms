//
//  LinkedList.c
//  Algorithm
//
//  Created by Youngkook on 16/8/26.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include "LinkedList.h"
#include <stdlib.h>

// 创建链表及插入数据
struct node {
    int data;
    struct node *next;
};

void createAndInsert() {
    struct node *head, *p, *q = NULL, *t;
    int i, n, a;
    scanf("%d", &n);
    head = NULL;
    for (i = 0; i < n; i++) { // 循环读入
        scanf("%d", &a);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;
        p->next = NULL;
        if (head == NULL) {
            head = p;
        } else {
            q->next = p;
        }
        q = p;
    }
    
    t = head;
    printf("origin int = ");
    while (t != NULL) {
        printf(" %d", t->data);
        t = t->next;
    }
    
    scanf("%d", &a);
    t = head;
    while (t != NULL) {
        if (t->next == NULL || t->next->data > a) {
            p = (struct node *)malloc(sizeof(struct node));
            p->data = a;
            p->next = t->next;
            t->next = p;
            break;
        }
        t = t->next;
    }
    
    t = head;
    printf("insert int = ");
    while (t != NULL) {
        printf(" %d", t->data);
        t = t->next;
    }
    
    getchar();
}