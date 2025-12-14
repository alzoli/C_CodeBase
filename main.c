#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c_write.h"

/* MISRA 2012 Violation Examples for Training */

/* Rule 2.1: A project shall not contain unreachable code */
void unreachable_code(void) {
    return;
    printf("This code is unreachable\n"); /* VIOLATION */
}

/* Rule 5.1: External identifiers shall be distinct */
int very_long_external_identifier_that_exceeds_limit_1 = 10;
int very_long_external_identifier_that_exceeds_limit_2 = 20; /* VIOLATION */

/* Rule 8.2: Function types shall be in prototype form */
int add(a, b) /* VIOLATION: Missing parameter types */
    int a, b;
{
    return a + b;
}

/* Rule 10.1: Operands shall not be of an inappropriate type */
void type_violations(void) {
    char c = 'A';
    int i = c + 5; /* VIOLATION: Implicit conversion */
    float f = i / 2; /* VIOLATION: Integer division */
}

/* Rule 11.3: A cast shall not be performed between a pointer and an integer type */
void cast_violation(void) {
    int x = 10;
    int *ptr = (int *)x; /* VIOLATION */
}

/* Rule 21.3: The memory allocation and deallocation functions of <stdlib.h> shall not be used */
void memory_violation(void) {
    int *p = malloc(sizeof(int) * 10); /* VIOLATION */
    free(p); /* VIOLATION */
}

/* Rule 20.7: Expressions resulting from the expansion of macro parameters shall be enclosed in parentheses */
#define ADD(a, b) a + b /* VIOLATION: Missing parentheses */

int main(void) {
    printf("MISRA 2012 Violations Demo\n");
    /* Test code */
    unreachable_code();
    /* Print FiboNumbers */
    print_fibonacci("Five");
    return 0;
}