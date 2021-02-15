 
#include "unity.h"
#include "checkOctal.h"
#include "test_checkOctal.h"

void test_checkOctal_basic(void)
{

	TEST_ASSERT_EQUAL( 1, checkOctal(077));
}

int test_checkOctal(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_checkOctal_basic);

	
	return UNITY_END();
}
