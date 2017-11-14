#include "unity.h"
#include "tryexception.h"
#include "Exception.h"

void setUp(void)
{
}
void tearDown(void)
{
}
void test_tryexception_2_5(void)
{
    tryException(2,5);
}

void test_tryexception_3_0(void)
{
    tryException(3,0);
}

void test_tryexception_56_minus_4(void)
{
    tryException(56,-4);
}