 
#include "unity.h"
#include "hexaDecimalToDecimal.h"
#include "test_hexaDecimalToDecimal.h"

void test_hexaDecimalToDecimal_basic(void)
{

	TEST_ASSERT_EQUAL( 2783, hexaDecimalToDecimal(ADF));
}

int test_hexaDecimalToDecimal(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_hexaDecimalToDecimal_basic);

	
	return UNITY_END();
}
