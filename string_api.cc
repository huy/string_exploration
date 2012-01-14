#include <string>
#include <iostream>
#include <vector>

using namespace std;

string replace_all(string s, const char* one, const char* other){
	int pos=0;
	while(1){
		pos = s.find(one,pos);
		if( pos != string::npos){
			s.replace(pos,strlen(one),other);
			pos = pos + strlen(other);
		}	
		else
			break;
	}
	return s;
}

vector<string> split(string s,const char* separator) {
	vector<string> result;
	int prev_pos=0;
	while(1){
		int pos = s.find(separator,prev_pos);
		if( pos != string::npos ){
			result.push_back(s.substr(prev_pos,pos-prev_pos));
			prev_pos=pos+strlen(separator);
		}else {
			result.push_back(s.substr(prev_pos,s.size()-prev_pos));
			break;
		}	
	}
	return result;
}

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
	cout << "--- replace 'l' by '?' in '" << s2 << "'=" << 
		replace_all(s2,"l","?") << "\n";
	cout << "--- split '" << s2 << "' by space" << "\n";
	vector<string> lst = split(s2," ");
	print_list(lst);
	cout << "--- reverse of '" << s2 << "'=";
	reverse(s2.begin(),s2.end());
        cout << s2 << "'\n";

}

