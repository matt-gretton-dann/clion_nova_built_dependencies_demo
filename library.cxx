#include "library.h"
#include "standards.h"
#include "unique_name.h"

#include <cstdio>

void hello(void)
{
    std::printf("Hello, World! %u %u\n", unique_fib(10), standards_fib(10));
}
