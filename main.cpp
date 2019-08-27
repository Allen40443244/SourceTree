#include <gtest/gtest.h>

int foobar(void)
{
    return ;
}

TEST(foobar, test)
{
    ASSERT_EQ(1, foobar()); 
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
