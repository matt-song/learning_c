#include <stdio.h>

int main()
{
    char array[] = "test string";
    
    puts("change value in double quota");
    array[1] = "_";     // 用双引号引起的字符串，代表的是一个指向无名数组起始字符的指针。
    puts(array);

    puts("change vale in single quota");
    array[2] = '_';     //用单引号引起的一个字符实际上代表一个整数，整数值对应于该字符在编译器采用的字符集中的序列值。
    puts(array);
}


