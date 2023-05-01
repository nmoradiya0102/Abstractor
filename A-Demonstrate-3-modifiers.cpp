#include<iostream>

using namespace std;

class user{
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};
class sub:protected user{
	public:
		void show(){
			z=50;
			cout<<"protected : "<<z<<endl;
		}
};

int main(){
	
	user done;
	sub obj;

	done.y=30;
                       
	cout<<"public : "<<done.y<<endl;           

	obj.show(); 
	return 0;
}
