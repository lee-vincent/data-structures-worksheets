//
//
//  worksheet14-code
//
//  Created by Vincent Lee on 1/19/17.
//  Copyright © 2017 Vincent Lee. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
# define TYPE int

struct DynArr
{
    TYPE *data;	/* pointer to the data array */
    int size;		/* Number of elements in the array */
    int capacity;	/* capacity of the array */
};

void _setCapacityDynArr(struct DynArr *v, int newCap) {
    TYPE *tempArray = (TYPE*)malloc(newCap * sizeof(TYPE));
    assert(tempArray != 0);
    
    for(int i = 0; i < v->size; i++) {
        tempArray[i] = v->data[i];
    }
    
    free(v->data);

    v->data = tempArray;
    v->capacity = newCap;
    tempArray = 0;

}


TYPE getDynArr (struct DynArr * da, int position) {
    assert(da->size >= 1);
    assert(position >= 0 && position < da->size);
    return da->data[position];
}


void putDynArr(struct DynArr * da, int position, TYPE value) {
    assert(da->size >= 1);
    assert(position >= 0 && position < da->size);
    da->data[position] = value;
}


void swapDynArr (struct DynArr * da, int i, int j) {
    assert(da->size >= 1);
    assert(i >= 0 && i <= da->size && j >= 0 && j < da->size);
    TYPE temp = da->data[i];
    da->data[i] = da->data[j];
    da->data[j] = temp;
}

void removeAtDynArr (struct DynArr * da, int index) {
    assert(da->size >= 1);
    assert(index >= 0 && index <= da->size);
    while(index + 1 < da->size) {
        da->data[index] = da->data[index + 1];
        index++;
    }
    
    da->size--;
}



