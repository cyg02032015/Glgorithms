//
//  Queue.c
//  Algorithm
//
//  Created by Youngkook on 16/8/25.
//  Copyright © 2016年 youngkook. All rights reserved.
//

#include "Queue.h"


void queue() {
    int q[101] = {6,3,1,7,5,8,9,2,4}, head = 0, tail = 9;
    
    while (head < tail) {
        printf("%d", q[head]);
        head++;
        
        q[tail] = q[head];
        tail++;
        head++;
    }
}