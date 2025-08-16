#include "functions.hpp"

#include <gtest/gtest.h>

TEST(ExampleTest, Test1) {
    EXPECT_EQ(5 + 5, add(5,5));
}

TEST(ExampleTest, Test2) {
    EXPECT_EQ(5+5, add(5,5));
}

int main(int arge, char *argv[]) {
    testing::InitGoogleTest(&arge, argv);
    return RUN_ALL_TESTS();
}
