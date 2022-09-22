#include"gtest/gtest.h"
#include"../natural_number.h"

//int natural_number(int N, int amount);
TEST(Natural_number_test, Test1)
{

    EXPECT_EQ(natural_number(0), 0);
}
TEST(Natural_number_test, Test2)
{
    EXPECT_EQ(natural_number(-2), 0);
}
TEST(Natural_number_test, Test3)
{
    EXPECT_EQ(natural_number(7), 1);
}
TEST(Natural_number_test, Test4)
{
    EXPECT_EQ(natural_number(10), 2);
}
TEST(Natural_number_test, Test5)
{
     EXPECT_EQ(natural_number(125), 3);
}
