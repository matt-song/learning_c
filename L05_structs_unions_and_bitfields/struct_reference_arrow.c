#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
    } turtle;

void happy_birthday(turtle *t)   // t = myrtle 
{
    t->age = t->age + 1;    // myrtle.age is still 99
    printf("Happy Birthday %s! You are now %i years old!\n", 
    t->name, t->age);
    
    printf("%s", t->name);  
} 

int main()
{
    turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
    happy_birthday(&myrtle);
    printf("%s's age is now %i\n", myrtle.name, myrtle.age);
    return 0;
}
