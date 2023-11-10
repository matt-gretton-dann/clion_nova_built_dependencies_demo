#include "library.h"
#include "standards.h"

#include <cstdio>

void hello(void)
{
    std::printf("Hello, World! %u %u\n", ::global_fib(10), Foo::Bar().fib(10));
}
