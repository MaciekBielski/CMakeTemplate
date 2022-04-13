#include <tokenizer.hh>

#include <token.hh>

#include <memory>

namespace phcnum::core
{

/**
* @brief: Returns next Token, if any.
*
* @return: Token
*/
std::unique_ptr<Token> Tokenizer::next()
{
    char out;
    feed >> out;
    return std::make_unique<CharToken>(out);
}

} /* phcnum::core */
