#include<iostream>
#include<string>
using namespace std;

class term{
public:
	string inhalt;
	void print(){
		std::cout<<inhalt<<std::endl;
	}

	term operator+(const term& b){
		term result;
		result.inhalt =  inhalt + "+" + b.inhalt;
		return result;
	}

	term operator-(const term& b){
		term result;
		result.inhalt =  inhalt + "-" + b.inhalt;
		return result;
	}

	term operator/(const term& b){
		term result;
		result.inhalt =  inhalt + "/" + b.inhalt;
		return result;
	}

	term swap(term a){
		char array[a.inhalt.size()];
		term summand1;
		term summand2;
		

	}


	
};


	

int main(int argc, char const *argv[])
{
	term a,b,c;
	a.inhalt="a";
	b.inhalt="b";
	
	

	
	return 0;
}  


