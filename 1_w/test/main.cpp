#include "../my/d3_m.h"
#include <gtest/gtest.h>



TEST(d3_m, LOL)
{
    d3_m<double, 3> m;
    EXPECT_EQ(0, m.a[0]);
}

TEST(d3_m, HELL_YEAH)
{
    d3_m<double, 3> m;
    EXPECT_EQ(0, m.b[1]);
}

TEST(d3_m, KARTOSHKA)
{
    d3_m<double, 3> m;
    EXPECT_EQ(0, m.c[2]);
}








int main(int argc, char *argv[])
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
