 
#include "unity.h"
#include "changeBinaryToOctal.h"
#include "test_changeBinaryToOctal.h"

void test_changeBinaryToOctal_basic(void)
{

	TEST_ASSERT_EQUAL( 16, changeBinaryToOctal(1110));
}

int test_changeBinaryToOctal(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_changeBinaryToOctal_basic);

	
	return UNITY_END();
}
