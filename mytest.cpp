#include <gtest/gtest.h>
#include "myfunctions.h"

TEST(myfunctions, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
}

TEST(myfunctions, helloworld)
{
    
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}