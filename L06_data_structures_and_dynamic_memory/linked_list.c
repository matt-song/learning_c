#include <stdio.h>

/*
If you use the typedef command, you can normally skip giving the struct a proper name. But in a recursive structure, you need to include a pointer to the same type. C syntax won’t let you use the typedef alias, so you need to give the struct a proper name. That’s why the struct here is called struct island.
*/
typedef struct island // 在递归结构中,需要包含一个相同类型的指针
{
    char *name ;
    char *opens ;
    char *closes ;
    struct island *next; // 在结构中保存了一个指针, 指向下一个
} island;

void display(island *start )
{
    island *i = start;
    for (; i != NULL; i = i->next)  //You don’t need any extra code at the start of the loop. loop until there is no next island
    {
        printf ("Name: %s open: %s-%s\n", i->name , i-> opens, i ->closes);
    }
}

int main()
{

    // create amity amity isla_nublar shutter
    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = { "Isla Nublar", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};
   
    //  amity -> craggy -> isla_nublar
    amity.next = & craggy;
    craggy.next = & isla_nublar;
    isla_nublar.next = & shutter;
   
    // create skull
    island skull = {"Skull", "09:00", "17:00", NULL};
   
    // amity -> craggy -> isla_nublar -> skull
    isla_nublar.next = & skull;
    // amity -> craggy -> isla_nublar -> skull -> shutter
    skull.next = & shutter;
   
    display(&amity );
}

