#pragma once

namespace phcnum::core
{

class Token {
  public:
    Token() = default;
    Token(const Token&) = default;
    virtual ~Token() = 0;
};
inline Token::~Token() {}


class CharToken final: public Token {
  public:
    CharToken(char c): val{c} {}
    ~CharToken() override {}
    char getVal() { return val; }
  private:
    char val;
};

} /* phcnum::core */
