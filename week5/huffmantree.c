//for text encoding
typedef struct node
{
    char symbol;
    float frequency;
    struct node *left;
    struct node *right;
}
node;