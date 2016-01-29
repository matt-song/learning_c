#include <stdio.h>

struct exercise {
    const char *description;
    float duration;
};

struct meal {
    const char *ingredients;
    float weight;
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void report(struct fish a)
{
    printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
    a.name, a.species, a.teeth, a.age);
    
    printf("Feed with %2.1f lbs of %s and allow to %s for %2.1f hours\n",
    a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
}

int main()
{
    struct fish matt = {"Matt", "Robot", 999, 30, {{"apple",1.5}, {"vedio game", 23.9}}};
    report(matt);
    return 0;
}
