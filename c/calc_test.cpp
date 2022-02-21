#include <gtest/gtest.h>
extern "C" {
#include "calc.h"
}

TEST(calc, add) {
	ASSERT_EQ(7, add(3, 4));
}
