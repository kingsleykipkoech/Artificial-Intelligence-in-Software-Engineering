#include <stdio.h>

#ifndef MULTIPLY
#define MULTIPLY(a, b) ((a) * (b))
#endif

#ifdef DEBUG_MULTIPLY
#define SAFE_MULTIPLY(a, b) ( \
    printf("Debug: Multiplying %d and %d\n", (a), (b)), \
    MULTIPLY(a, b) \
)
#else
#define SAFE_MULTIPLY(a, b) MULTIPLY(a, b)
#endif

int main(void)
{
    int result = SAFE_MULTIPLY(2 + 3, 4);
    /* Correctly outputs 20 */
    printf("Result: %d\n", result);
    return (0);
}
