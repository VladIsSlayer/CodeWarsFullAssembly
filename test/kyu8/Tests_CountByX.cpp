#include "CountByX.hpp"
#include <gmock/gmock.h>  // Для матчеров контейнеров
#include <gtest/gtest.h>

TEST(CountByXTest, BasicCases) {
    EXPECT_THAT(countBy(1, 5), testing::ElementsAre(1, 2, 3, 4, 5));
    EXPECT_THAT(countBy(2, 5), testing::ElementsAre(2, 4, 6, 8, 10));
}

TEST(CountByXTest, EdgeCases) {
    EXPECT_THAT(countBy(100, 1), testing::ElementsAre(100));        // n=1
    EXPECT_THAT(countBy(1, 1), testing::ElementsAre(1));            // x=1, n=1
    EXPECT_THAT(countBy(123, 3), testing::ElementsAre(123, 246, 369)); // Большие числа
}

TEST(CountByXTest, ZeroAndNegative) {
    // По условию x,n > 0, но тесты на защиту от дурака:
    EXPECT_THAT(countBy(5, 0), testing::IsEmpty());      // n=0 → пустой вектор
    EXPECT_THAT(countBy(-3, 3), testing::ElementsAre(-3, -6, -9)); // Отрицательные
}