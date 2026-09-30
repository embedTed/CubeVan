#ifndef Circular_Buffer
#define Circular_Buffer

struct self;

void init(self, int);
bool enQueue(self, int);
bool deQueue(self);
int Front(self);
int Rear(self);
bool isEmpty(self);
bool isFull(self);

#endif