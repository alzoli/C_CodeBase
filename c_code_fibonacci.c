#include <stdio.h>
#include <stdint.h>

/**
 * @brief Prints the first 10 Fibonacci numbers to standard output.
 * @return 0 on success, -1 on failure.
 */
static int32_t printFibonacciSequence(void)
{
    const uint32_t FIBONACCI_COUNT = 10U;
    uint32_t fibonacciNumbers[FIBONACCI_COUNT] = {0U};

    /* Initialize first two Fibonacci numbers */
    if (FIBONACCI_COUNT > 0U) {
        fibonacciNumbers[0] = 0U;
    }
    if (FIBONACCI_COUNT > 1U) {
        fibonacciNumbers[1] = 1U;
    }

    /* Generate Fibonacci sequence */
    for (uint32_t i = 2U; i < FIBONACCI_COUNT; i++) {
        fibonacciNumbers[i] = fibonacciNumbers[i - 1U] + fibonacciNumbers[i - 2U];
    }

    /* Print Fibonacci numbers */
    for (uint32_t i = 0U; i < FIBONACCI_COUNT; i++) {
        (void)printf("%u\n", fibonacciNumbers[i]);
    }

    return 0;
}