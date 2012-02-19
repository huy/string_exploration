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
	string s2("Hello"); 
	s2 = s2 + string(" World");
 	cout << s2 << "\n";
	s2 = string("hello");
	s2+=string(" world");
 	cout << s2 << "\n";
	cout << "3.--- length of '" << s2 << "'=" << s2.size() << "\n";
	cout << "4.--- first 5 character of '" << s2 << "'=" << s2.substr(0,5) << "\n";
	cout << "4.1--- last 5 character of '" << s2 << "'=" << s2.substr(s2.size()-5,5) << "\n";
	cout << "5.--- position of 'world' in '" << s2 << "'=" << int(s2.find("world")) << "\n";
	cout << "5.1--- position of 'Hello' in '" << s2 << "'=" << int(s2.find(string("Hello"))) << "\n";
	cout << "6.--- replace 'world' by 'moon' in '" << s2 << "'=" << 
		s2.replace(s2.find("world"),strlen("world"),"moon") << "\n";

	cout << "6.1--- replace 'l' by '?' in '" << s1 << "'=";
	boost::replace_all(s1,"l","?");
        cout <<	s1  << "'\n";

	cout << "7.--- split '" << s2 << "' by space" << "\n";
	vector<string> lst;
	boost::split(lst, s2, boost::is_any_of(" "), boost::token_compress_on);

	print_list(lst);
	cout << "8.--- reverse of '" << s2 << "'=";
	reverse(s2.begin(),s2.end());
        cout << s2 << "'\n";

	string s3 = "Hello World";
        cout << "9.---uppercase of '" << s3 << "' is '" << boost::to_upper_copy(s3) << "'\n";
        cout << "10.---lowercase of '" << s3 << "' is '" << boost::to_lower_copy(s3) << "'\n";
       
        string s4 = string("Hello") + string(" World");
        cout << "11.---compare '" << s3 << "' with '" << s4 << "' returns " << (s3.compare(s4)) << "\n";
        string s5 = string("hello") + string(" World");
        cout << "11.1---compare '" << s3 << "' with '" << s5 << "' returns " << (s3.compare(s5)) << "\n";
	
        cout << "12. --- interate through a string" << "\n";
        for(int i=0; i< s2.size(); i+=1){
            cout << s2[i] << "\n";
        }
}

