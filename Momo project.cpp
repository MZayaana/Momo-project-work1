#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int pin =0000;
	int authentication;
	float balance=1000;
	int attempts=0;
	int option;
	
	
	
	
	 while(true){
	 cout<<"please select an option:"<<endl;
	 cout<<"1.authentication"<<endl;
	 cout<<"2.change pin:"<<endl;
	 cout<<"3.check balance:"<<endl;
	 cout<<"4.send money:"<<endl;
	 cout<<"5.exit:"<<endl;
	 cin>>option;
	 
	 
	 
	 switch (option){
	 	case 1:
	 		int enterpin;
	 	cout<<"enter your pin"<<endl;
	 	cin>>enterpin;
	 	if(enterpin==pin){
	 		cout<<"authentification successful"<<endl;
	 	}else {
	 		cout<<"enter pin again"<<endl;
	 }if(attempts==3){
	 	cout<<"attempts too many"<<endl;
	 	return 0;
	 }
		 
		 break;
	case 2:
		
		int new_pin;
		
		
		cout<<"enter old pin"<<endl;
		cin>>pin;
		if(pin==0000){
		}else{
			return 0;
		}
		
		cout<<"enter new pin"<<endl;
		cin>>new_pin;
		
		cout<<"your pin is changed"<<endl;
		
	break;
	case 3:
		cout<<"enter your pin:"<<endl;
		cin>>pin;
		
		if(pin==00000||pin==new_pin){
			cout<<"balance is:"<<balance<<endl;
		}else {
			cout<<"incorrect pin"<<endl;
			attempts++;
	} if(attempts==3){
		cout<<"too many attempts"<<endl;
		return 0;
	}
break ;
case 4:
	
    float amount;
	int pin,num,reference;
	    cout<<"enter reciever number:"<<endl;
		cin>>num;
		
	cout<<"enter amount:"<<endl;
	cin>>amount;
	cout<<"enter reference numberd:"<<endl;
	cin>>reference;
		cout<<"enter pin:"<<endl;
		cin>>pin;
		if(amount>balance){
			cout<<"not enough balance";
		}else if(pin==0000||pin==new_pin){
			balance==amount;
			cout<<balance<<endl;
		}if (pin==0000 || pin==new_pin){
			cout<<"Done"<<endl;
		}else{
			cout<<"incorrect pin"<<endl;
		}
		
    break;
    
         cout<<"exit"<<endl;
    
    return 0;
    }
    
    
}
	
return 0;		 
} 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	