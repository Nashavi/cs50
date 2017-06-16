// n is the number to search, and list is the pointer
bool search(int n , node *list)
{
    node *ptr = list;
    
    while (ptr != NULL)
    {
        if(ptr ->n == n)
        {
            return true;
        }
        
        ptr = ptr -> next;
    }
    
    return false;
}