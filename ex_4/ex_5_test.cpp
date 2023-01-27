#include "ex_4.hpp"
#include <gtest/gtest.h>


namespace{
    TEST(ConcatRemoveTest,YesResponse){
        EXPECT_EQ("Yes", ConcatRemove("blablablabla", "blablabcde", 8));
        EXPECT_EQ("Yes", ConcatRemove("tab", "aba", 7));
    }

    TEST(ConcatRemoveTest,NoResponse){
        EXPECT_EQ("Yes", ConcatRemove("blablablabla", "blablabcde", 5));
        EXPECT_EQ("Yes", ConcatRemove("tab", "aba", 2));
    }

}
