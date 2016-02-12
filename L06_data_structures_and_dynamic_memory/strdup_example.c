#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island 
{
    char *name;
    char *opens;
    char *closes;
    struct island *next; 
} island;

island* create(char* name)  // 返回一个结构体island的指针
{
    island *i = malloc(sizeof(island));
    
    // 如果使用 指针, 则name 指向同一个地址, 重复调用会覆盖之前的值
    //i->name = name; 

    // 这里应该使用strdup(), 将name保存在堆上
    i->name = strdup(name);

    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

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
    //create 1st island
    char name[80];
    fgets(name, 80, stdin);
    island *p_island0 = create(name);

    //create 2nd island
    fgets(name, 80, stdin);
    island *p_island1 = create(name);
    p_island0->next = p_island1;
      
    display(p_island0);


    return 0;
}
