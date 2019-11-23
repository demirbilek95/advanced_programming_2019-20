#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    std::cout << "Please enter words (for finishing program please type exit)\n" ;

    std::vector<std::string> word_list;
    std::string word;

    while(std::getline(std::cin,word)){

        word_list.push_back(word);

    	if(word == "exit")
	    	break;
    }

    std::sort( word_list.begin(), word_list.end() );

    std::string previous = word_list[0];

    std::cout << "\nNumber of words that you entered " << word_list.size() << std::endl;

    for(auto i : word_list){

        if(i != previous){
            std::cout << previous << std::endl; 
            previous = i;
        }

    }


}

