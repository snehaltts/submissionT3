 
#include "unity.h"
#include "octalToBinary.h"
#include "test_octalToBinary.h"

void test_octalToBinary_basic(void)
{

	TEST_ASSERT_EQUAL( 25000, octalToBinary(500000));
}

int test_octalToBinary(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_octalToBinary_basic);

	
	return UNITY_END();
}