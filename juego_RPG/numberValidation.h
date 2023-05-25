#include<iostream>
#include<string>

using namespace std;

int  checkNumberInput();
bool checkDigit(char check);

int  checkNumberInput(){

    std::string temporalPlayerInput{};
    bool isValid = false;
   
    do{
        
        cin>>temporalPlayerInput;
        isValid = checkDigit(temporalPlayerInput[0]);
        if(!isValid){
            cout<<"Invalid input"<<endl;
       }

    }while(!isValid);

    return int(temporalPlayerInput[0]-48);
}


bool checkDigit(char check){
    return check == '0' ||check == '1' ||check == '2' ||check == '3' ||check == '4' ||check == '5' ||check == '6' ||check == '7' ||check == '8' ||check == '9';
}
