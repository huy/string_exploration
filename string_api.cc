#include <string>
#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

template <class T>
void print_list(const T& lst){
	typename T::const_iterator it;
	cout << "[";
	for(it=lst.begin();it != lst.end(); it++){
		cout << *it ;
		if(*it != lst.back() )
			cout << ",";
	}
	cout << "]" << "\n";
}

int main(int argc,char** argv){
        cout << "--- create string from const\n";
	string s1("hello");
        cout << s1 << "\n";
	s1 = string("hello world");
        cout << s1 << "\n";
        cout << "--- append 2 strings \n";
	string s2("hello"); 
	s2 = s2 + string(" world");
 	cout << s2 << "\n";
	s2 = string("hello");
	s2+=string(" world");
 	cout << s2 << "\n";
	cout << "--- length of '" << s2 << "'=" << s2.size() << "\n";
	cout << "--- first 5 character of '" << s2 << "'=" << s2.substr(0,5) << "\n";
	cout << "--- last 5 character of '" << s2 << "'=" << s2.substr(s2.size()-5,5) << "\n";
	cout << "--- position of 'world' in '" << s2 << "'=" << s2.find("world") << "\n";
	cout << "--- position of 'hello' in '" << s2 << "'=" << s2.find(string("hello")) << "\n";
	cout << "--- replace 'world' by 'moon' in '" << s2 << "'=" << 
		s2.replace(s2.find("world"),strlen("world"),"moon") << "\n";

	cout << "--- replace 'l' by '?' in '" << s1 << "'=";
	boost::replace_all(s1,"l","?");
        cout <<	s1  << "'\n";

	cout << "--- split '" << s2 << "' by space" << "\n";
	vector<string> lst;
	boost::split(lst, s2, boost::is_any_of(" "), boost::token_compress_on);

	print_list(lst);
	cout << "--- reverse of '" << s2 << "'=";
	reverse(s2.begin(),s2.end());
        cout << s2 << "'\n";
}

