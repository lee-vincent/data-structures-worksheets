//
//  arrayBagStack.c
//  worksheet0-code
//
//  Created by Vincent Lee on 1/19/17.
//  Copyright © 2017 Vincent Lee. All rights reserved.
//

#include <stdio.h>
#include "arrayBagStack.h"


void initArray(struct arrayBagStack * b){
    b->count = 0;
    for(int i = 0; i < 100; i++) {
        b->data[i] = 0;
    }
}

/* Bag Functions */
void addArray (struct arrayBagStack * b, TYPE v) {
    if(b->count < 100) {
        b->data[b->count] = v;
        b->count++;
    }
}

int containsArray (struct arrayBagStack * b, TYPE v) {
    for(int i = 0; i < b->count; i++) {
        if(b->data[i] == v) {
            return 1;
        }
    }
    return 0;
}

void removeArray (struct arrayBagStack * b, TYPE v) {
    for(int i = 0; i < b->count; i++) {
        if(b->data[i] == v) {
            //found it
            b->count--;
            //remove at position i
            int j = i;
            //would like to replace hard coded 100 with capacity of array
            if(j+1 != 100) {
                while(j <= b->count && j + 1 < 100) {
                    b->data[j] = b->data[j + 1];
                    j++;
                }
            }
            //need to account for the end of the array that shifted down one index
            b->data[j] = 0;
            return;
        }
    }
}

int sizeArray (struct arrayBagStack * b) {
    return b->count;
}


/* Stack  Functions */
void pushArray (struct arrayBagStack * b, TYPE v) {
    if(b->count < 100) {
        b->data[b->count] = v;
        b->count++;
    }
}

TYPE topArray (struct arrayBagStack * b) {
    if(b->count >= 1) {
        return b->data[b->count - 1];
    } else {
        return 0;
    }
}

void popArray (struct arrayBagStack * b) {
    if(b->count >= 1) {
        b->count--;
        b->data[b->count] = 0;
    }
}

int isEmptyArray (struct arrayBagStack * b) {
    if(b->count == 0) {
        return 1;
    } else {
        return 0;
    }
}
