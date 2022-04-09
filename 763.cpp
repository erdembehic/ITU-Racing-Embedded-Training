//Author : Rana Tilki
//ITU Racing Embedded Team 2022
//Leet Code #763 c++ solution 
//contact: tilkir18@itu.edu.tr

#include <iostream>
#include <vector>
#include <string>
using namespace std;

	int main() {
	string str; // Declaring string
	getline(cin, str); // Taking string input using getline()
	
	while(sizeof(str)>=0){
	int temp1 = str.find_last_of(str.at(0));
	int max = temp1;
	
	for (int i = 1; i <= max; i++) {
		char c = str.at(i);

   		int found; // To store the index of last character found
 
   		found = str.find_last_of(c); // Function to find the last character c in str
		
		if (found > max) {
			max = found;
		}
		else {
			temp1 = found;
		}
	}
	cout<<max + 1<<" ";
	str.erase(0, max+1 ); 
	
	}
	
	
	return 0;

}


