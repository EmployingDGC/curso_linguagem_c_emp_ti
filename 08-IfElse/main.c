#include <stdio.h>

int main(int argc, char const *argv[])
{
    //      falso ou false -> 0
    // verdadeiro ou true  -> 1

    // E ou AND -> &&

    // 1 && 0 -> 0
    // 0 && 1 -> 0
    // 0 && 0 -> 0
    // 1 && 1 -> 1

    // OU ou OR -> ||

    // 1 || 0 -> 1
    // 0 || 1 -> 1
    // 0 || 0 -> 0
    // 1 || 1 -> 1

    // maior que -> ">"

    // 15 > 10 -> 1
    // 15 > 87 -> 0

    // menor que -> "<"

    // 15 < 10 -> 0
    // 15 < 87 -> 1
    // 10 < 10 -> 0

    // igual a -> "=="

    // 15 == 10 -> 0
    // 15 == 87 -> 0
    // 10 == 10 -> 1

    // maior igual a -> ">="

    // 15 >= 10 -> 1
    // 15 >= 87 -> 0
    // 10 >= 10 -> 1

    printf("\n%d", 15 >= 10);
    printf("\n%d", 15 >= 87);
    printf("\n%d", 10 >= 10);
    
    return 0;
}
