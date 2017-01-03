#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void reversestring (char *str){
	for (unsigned int i=0; i<strlen(str)/2; i++){
		swap(str[i],str[strlen(str)-i-1]);
	}
}
void reversestring2 (string &str){
	for(unsigned int i=0; i<str.length()/2; i++){
		swap(str[i],str[str.length()-i-1]);
	}
}



int main(){
	char str[50]="Reversing a string";
	reversestring(str);
	cout<<str << endl;
	char *str2 = "something";
	cout << str2 << endl;
	char str3[]="something";
	cout << str3 << endl;
	int arr[]={16,20,50,40};
	cout << arr << endl;
	cout << arr[1] << endl;
	string realstring = "can I reverse this string in one pass?";
	reversestring2(realstring);
	cout << realstring << endl;
}
