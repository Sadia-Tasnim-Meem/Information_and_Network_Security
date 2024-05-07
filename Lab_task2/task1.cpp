#include <iostream>
using namespace std;


int main()
{
	string plain = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";

    for(int shift = 0; shift < 26; shift++){
        string input = plain;
        for (int i = 0; i < input.length(); i++) {
	
		if (isupper(input[i]))
			input[i] = char(int(input[i] + shift - 65) % 26 + 65);

		
		else
			input[i] = char(int(input[i] + shift - 97) % 26 + 97);
	}
    cout<<shift<<" "<<input<<endl;
    }
	
}
