#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(dummy_suite, dummy_tests)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
