#include <iostream>
using namespace std;

main() {
	int num1 ,result ,num2 ;
	char op;
	cout << "please enter a hogoog number : ";
	cin  >> num1 >> op >> num2;
	 
	 switch (op){
	 	
	 	case '6<num1':
	 		result = num1 + 0%num2;
	 		break;
	 	case '6=>num2,8<num2':
		 	result = num1 + 5% num2;
	 		break; 
	 	case '8=>num3,10<num3':
		 	result = num1 + 10%num2 ;
	 		break;
	 	case '10=>num4,14<num4':
		 	result = num1 + 15% num2;
	 		break;
	 	case '14=>num5,18<num5':
		 		result = num1 + 20%num2;
	 		break;	
			 
		case'18=>num6,25<num6':
		 		result = num1 + 25 %num2;
	 		break;		 
		case '25>num7':
		 		result = num1 + 35%num2;
	 		break;	
			 
			 	
	 		
	 }
	
	cout << result;
		
	
}