//
//  arrayBagStack.h
//  worksheet0-code
//
//  Created by Vincent Lee on 1/19/17.
//  Copyright © 2017 Vincent Lee. All rights reserved.
//  Interface for an array based BAG and STACK data structure

#ifndef ArrayBagStack
#define ArrayBagStack

# define TYPE int
# define EQ(a, b) (a == b)

struct arrayBagStack {
    TYPE data [100];
    int count;
};

void initArray(struct arrayBagStack * b);

/* Bag Interface Functions */
void addArray (struct arrayBagStack * b, TYPE v);
int containsArray (struct arrayBagStack * b, TYPE v);
void removeArray (struct arrayBagStack * b, TYPE v);
int sizeArray (struct arrayBagStack * b);


/* Stack Interface  Functions */
void pushArray (struct arrayBagStack * b, TYPE v);
TYPE topArray (struct arrayBagStack * b);
void popArray (struct arrayBagStack * b);
int isEmptyArray (struct arrayBagStack * b);

#endif /* ArrayBagStack */
