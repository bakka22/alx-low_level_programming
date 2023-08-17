#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("swwsifcswiw", "hello", "bakka", 22, 33.5, 'A', NULL, 77);
    print_all(NULL, "hello", "bakka", 22, 33.5, 'A', NULL);
    return (0);
}