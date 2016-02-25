#include <config.h>
#include <stdio.h>

int main (void)
{
    printf("Hello "PACKAGE_STRING"\n");
#ifdef HAVE_FEATURE1
    printf("Hello Feature1 \n");
#endif

#ifdef HAVE_FEATURE2
    printf("Hello Feature2 \n");
#endif
#ifdef HAVE_FEATURE3
    printf("Hello Feature3 \n");
#endif

#ifdef HAVE_FOO
    printf("Hello Foo \n");
#endif
    return 0;
}
