//
//  Queue.h
//  Algorithm
//
//  Created by Youngkook on 16/8/25.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>

void queue();

struct queue {
    int data[100];
    int head;
    int tail;
};

#endif /* Queue_h */
