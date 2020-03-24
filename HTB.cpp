#include <iostream>
#include <string>
using namespace std;

int main() {
	string bina="Answer:";
	char hexa[50];
	cout<<"Enter a hexadecimal number \n";
	cin >> hexa;
	for (int i=0;i<50;i++) {
	    switch(hexa[i]){
	        case '0':
                bina.append("0000");
            case '1':
	            bina.append("0001");
	            break;
	        case '2':
	            bina.append("0010");
	            break;
	        case '3':
	            bina.append("0011");
	            break;
	        case '4':
	            bina.append("0100");
	            break;
	        case '5':
	            bina.append("0101");
	            break;
	        case '6':
	            bina.append("0110");
	            break;
	        case '7':
	            bina.append("0111");
	            break;
	        case '8':
	            bina.append("1000");
	            break;
	        case '9':
	            bina.append("1001");
	            break;
	        case 'A':
	            bina.append("1010");
	            break;
	        case 'B':
	            bina.append("1011");
	            break;
	        case 'C':
	            bina.append("1100");
	            break;
	        case 'D':
	            bina.append("1101");
	            break;  
	        case 'E':
	            bina.append("1110");
	            break;     
	        case 'F':
	            bina.append("1111");
	            break;
	        case '.':
	            bina.append(".");
	            break;
            default:
                i = 50;    
	    }
	}
	cout<<bina;
	
	
	return 0;
}