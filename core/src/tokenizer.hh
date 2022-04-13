#pragma once

#include <memory>
#include <utility>
#include <sstream>

namespace phcnum::core
{

class Token;

class Tokenizer {
  public:
    Tokenizer() = delete;
    Tokenizer(const Tokenizer&) = delete;
    /* Each tokenizer has its own dedicated stream */
    Tokenizer(std::stringstream ss): feed{std::move(ss)} {}

    std::unique_ptr<Token> next();
  private:
    std::stringstream feed;
};

} /* phcnum::core */
