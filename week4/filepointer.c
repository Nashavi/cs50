FIlE* ptr1 = fopen("file1.txt", "r");

FIlE* ptr2 = fopen("file1.txt", "w"); // or "a"

fclose(ptr1)

char ch = fgetc(ptr1)


char ch;
while((ch = fgetc(ptr)) != EOF)
    printf("%c",ch);
    
//above code is similar to cat function


write a single character into a file - fputc

fputc('A',ptr2)

//EG:
char ch;
while((ch = fgetc(ptr)) != EOF)
    fputc(ch,ptr3);
//above code does the same as cp or copy in linux


fread()
fwrite()


//Eg:

int arr[10];
fread(arr,sizeof(int),10,ptr);
//40 bytes of information from ptr to arr



