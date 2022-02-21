#include <gtest/gtest.h>
#include "calc.h"

TEST(calc, add) {
	ASSERT_EQ(7, add(3, 4));
}
