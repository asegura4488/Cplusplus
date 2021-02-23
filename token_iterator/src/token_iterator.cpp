#include<iostream>
#include<boost/token_iterator.hpp> // install boost libraries for c++ http://www.boost.org/doc/libs/1_61_0/more/getting_started/unix-variants.html
#include<string>
#include <stdio.h>



int main(){
   std::string s = "12252001";
   int offsets[] = {2,2,4};

   typedef boost::token_iterator_generator<boost::offset_separator>::type Iter;
   boost::offset_separator f(offsets, offsets+3);
   
   Iter beg = boost::make_token_iterator<std::string>(s.begin(),s.end(),f);
   Iter end = boost::make_token_iterator<std::string>(s.end(),s.end(),f); 
   // The above statement could also have been what is below
   // Iter end;
   for(;beg!=end;++beg){
     std::cout << *beg << std::endl;
   }
}
