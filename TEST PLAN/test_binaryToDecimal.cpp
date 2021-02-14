 
#include "unity.h"
#include "binaryToDecimal.h"
#include "test_binaryToDecimal.h"

void test_binaryToDecimal_basic(void)
{

	TEST_ASSERT_EQUAL( 25000, binaryToDecimal(500000));
}

int test_binaryToDecimal(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_binaryToDecimal_basic);

	
	return UNITY_END();
}