#include <iostream>

using namespace std;

int main()
{
	int number_of_words = 1;
	string previous = " "; // not a word
	string current;
	while (cin>>current) {
		
		if (previous == current){
			number_of_words += 1; // increase word count	
		}
	
		else{
			if(previous != " "){
				cout << "\t" <<  number_of_words << " " << previous << endl;
				number_of_words = 1;
			}
		}

		previous = current;
	}
	
	
}

