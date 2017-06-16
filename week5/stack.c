typedef struct
{
    int numbers[capacity]; //  capacity is some constant 10 or 50 or something
    int size;  // capacity is the possible size and size is the actual used size of the stack
}
stack;

COMAPRED TO

typedef struct
{
    int *numbers; //  this can point to a malloc allocated first integer
    int size;  // capacity is the possible size and size is the actual used size of the stack
}
stack;



COMAPRED TO

typedef struct
{
    int front; //marks the begining of the array. so the start of the array can be indicated and the sequence can roll inside up to its size
    int *numbers; //  this can point to a malloc allocated first integer
    int size;  // capacity is the possible size and size is the actual used size of the stack
}
queue;


COMPARED TO

typedef struct node
{
    int n;
    struct node *left;
    struct node *right;
}
node;
