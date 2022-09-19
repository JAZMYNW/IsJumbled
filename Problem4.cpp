#include <iostream>
#include <cstring>
using namespace std;



bool isJumbled(char* str1, char* str2){
	int str1sum=0;
	int str2sum=0;
	
	for(int i =0;i<strlen(str1);i++){
		str1sum+= int(str1[i]);
	}
  	for(int i =0;i<strlen(str2);i++){
                str2sum+= int(str2[i]);
        }

	if(str1sum ==str2sum)
	return true;
	else
	return false;
}


int main(int argc, char** argv)
{


	if (isJumbled(argv[1],argv[2]))
		cout<<"jumbled"<<endl;
	else
		cout<<"not jumbled"<< endl; 
	

return 0;
}
