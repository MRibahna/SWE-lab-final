//gtest file to check factory.cpp
#include <gtest/gtest.h>
#include "factory.h"

TEST(FactoryTest, TestFunction1) {
    // Add your test logic here
    EXPECT_EQ(function1(), expected_value);
}

TEST(FactoryTest, TestFunction2) {
    // Add your test logic here
    EXPECT_TRUE(function2());
}

TEST(FactoryTest, TestFunction3) {
    // Add your test logic here
    EXPECT_NE(function3(), unexpected_value);
}