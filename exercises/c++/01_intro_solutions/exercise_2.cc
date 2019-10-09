#include <iostream>

using namespace std;

int main()
{
	int number_of_words = 0;
	string previous = " "; // not a word
	string current;
	while (cin>>current) {
		
	if (previous == current)
		++number_of_words; // increase word count
		cout << "word number " << number_of_words
		<< " repeated: " << current << '\n';
	previous = current;
	}
}

