#include <stdio.h>

typedef struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
} animal;

int main()
{
    animal dog = {"Test", "Robot", 999, 30};
    
    printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
    dog.name, dog.species, dog.teeth, dog.age);
    
    return 0;
}
