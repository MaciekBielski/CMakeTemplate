#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <tokenizer.hh>
#include <token.hh>

using namespace testing;
namespace
{
using Tokenizer = phcnum::core::Tokenizer;
using CharToken = phcnum::core::CharToken;
}



TEST(token_suite, token_tests)
{
    auto ss = std::stringstream{};
    ss << 'a';
    auto gen = Tokenizer{std::move(ss)};
    auto token = gen.next();
    auto out = dynamic_cast<CharToken*>(token.get())->getVal();

    EXPECT_EQ(out, 'a');
}

