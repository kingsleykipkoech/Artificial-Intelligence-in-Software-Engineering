#include <stdio.h>

#define MULTIPLY(a, b) a * b

int main(void)
{
    int result = MULTIPLY(2 + 3, 4);
    /* Expected 20, but gets 14 because 2 + 3 * 4 */
    printf("Result: %d\n", result);
    return (0);
}
