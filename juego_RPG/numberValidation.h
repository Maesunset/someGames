#include<iostream>
#include<string>

int  checkNumberInput(){

    std::string temporalPlayerInput{};
    bool isValid = false;
   
    do{
        
       std::cin>>temporalPlayerInput;
       isValid = checkDigit(temporalPlayerInput[0]);
       if(!isValid){
        std::cout<<"Invalid input"<<std::endl;
       }

    }while(!isValid);

    return int(temporalPlayerInput[0]-48);
}


bool checkDigit(char check){
    return check == '0' ||check == '1' ||check == '2' ||check == '3' ||check == '4' ||check == '5' ||check == '6' ||check == '7' ||check == '8' ||check == '9';
}
