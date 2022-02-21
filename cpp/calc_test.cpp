#include <gtest/gtest.h>
#include "calc.hpp"

TEST(calc, add) {
	ASSERT_EQ(7, Calc().add(3, 4));
}
