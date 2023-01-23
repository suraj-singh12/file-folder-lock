#include<bits/stdc++.h>
typedef std::vector<char> char_array;

char_array charset()
{
    //Change this to suit
    return char_array( 
    {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F',
    'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',
    'V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k',
    'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
    });
};    

std::string random_string( size_t length, std::function<char(void)> rand_char )
{
    std::string str(length,0);
    std::generate_n( str.begin(), length, rand_char );
    return str;
}

int main()
{

    const auto ch_set = charset();
   
    std::default_random_engine rng(std::random_device{}());

    std::uniform_int_distribution<> dist(0, ch_set.size()-1);

    auto randchar = [ ch_set,&dist,&rng ](){return ch_set[ dist(rng) ];};
       
    auto length = 16;
    std::cout<<random_string(length,randchar)<<std::endl;
    return 0;
}