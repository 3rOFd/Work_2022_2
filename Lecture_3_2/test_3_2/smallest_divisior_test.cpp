#include "gtest/gtest.h"
#include"../smallest_divisior.h"

//void smallest_divisior(int x, int y, int z);

TEST(smallest_divisior_test, Test1)
{
    EXPECT_EQ(smallest_divisior(1, 1, 1), 1);
}
TEST(smallest_divisior_test, Test2)
{
    EXPECT_EQ(smallest_divisior(4, 6, 8), 2);
}
TEST(smallest_divisior_test, Test3)
{
    EXPECT_EQ(smallest_divisior(10, 15, 20), 5);
}
