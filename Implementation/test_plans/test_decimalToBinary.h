 
#include "unity.h"
#include "decimalToBinary.h"
#include "test_decimalToBinary.h"

void test_decimalToBinary_basic(void)
{

	TEST_ASSERT_EQUAL( 1010, decimalToBinary(10));
}

int test_decimalToBinary(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_decimalToBinary_basic);

	
	return UNITY_END();
}
