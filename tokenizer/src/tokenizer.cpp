#include <boost/tokenizer.hpp>
#include <string.h>
#include <iostream>
#include <stdio.h>


int main()
{
  typedef boost::tokenizer<boost::char_separator<char>> tokenizer;
  std::string s = "Boost C++ Libraries";
  tokenizer tok{s};
  for (tokenizer::iterator it = tok.begin(); it != tok.end(); ++it)
    std::cout << *it << '\n';

  typedef boost::tokenizer<boost::char_separator<char>> tokenizer;
  std::string ss = "Boost C++ Libraries";
  boost::char_separator<char> sep{" "};
  tokenizer toke{ss, sep};
  for (const auto &t : toke)
    std::cout << t << '\n';

}
