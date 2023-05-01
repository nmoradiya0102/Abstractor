#include<iostream>

using namespace std;

class car{
	public:
		virtual void Auto()=0;
};
class BMW : public car{
	public:
	void Auto(){
		cout<<"car is automatic"<<endl;
	}
};
int main(){
	
	BMW ok;
	ok.Auto();
	
	
	return 0;
}
