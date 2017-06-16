struct car{
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
};


struct car mycar; /// like int x; or string name;

//access fields

mycar.year = 2011;
mycar.plate = "cs.50";

struct car *mycar = malloc(sizeof(struct car));


(*mycar).year = 2011;
(*mycar).plate = "cs.50"
//OR
mycar -> year =2011;
mycar -> plate ="cs.50";



typedef char* string //cs50.h code

typedef struct car car_t;
//OR
typedef struct car{
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
}
car_t;

car_t mycar;

mycar.year=2011;