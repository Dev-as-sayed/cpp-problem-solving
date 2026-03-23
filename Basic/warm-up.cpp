/**
 * ==================================================
 * 1. Even or Odd
 *  Input: integer n
 *  Output: "Even" or "Odd"
 * ==================================================
*/

/**
 * 

#include<iostream>

int main() {

    int oddIntup;

    std::cout << "give me a ODD number " << std::endl;
    std:: cin >> oddIntup ;
    std:: cout << "varifying " << oddIntup << " is odd or not....."<<std::endl;

    if (oddIntup % 2 != 0){
        std::cout << "your provided number is EVEN"<<std::endl; 
    }else{
        std::cout << "your provided number is ODD"<<std::endl; 
    }
    
    return 0;
}


 */


/**
 * ==================================================
 * 2. Positive, Negative, or Zero
 *  Classify the number
 * ==================================================
 */

 /**
 #include<iostream>

 int main (){

    int providedNumber;

    std::cout << "which number you want to varify positive of negative"<<std::endl;
    std::cin>> providedNumber;
    if (providedNumber > 0){
        std::cout << "your provided number is positive" << std::endl;
    } else if (providedNumber < 0){
        std::cout << "your provided number is negative" << std::endl;
    } else{
        std::cout << "your provided number is zro" << std::endl;
    }
    
    return 0;

 }
 */


/**
 * ==================================================
 * 3. Largest of Two Numbers
 *  Input: a, b
 * ==================================================
 */

 /**
 #include <iostream>

 int main (){
    int a;
    int b;

    std::cout<< "give me value of a \n";
    std::cin >> a;
    std::cout<< "give me value of b \n";
    std::cin >> b;

    if (a > b){
        std::cout << "a leargest from b";
    }
    std::cout << "a smaller from b";

 }

 */


/**
 * ==================================================
 * 4. Largest of Three Numbers
 *  Use nested conditions
 * ==================================================
 */

 #include<iostream>

 int main (){
    
    int numsCollection[10] = {1,34, 56, 32, 64, 96, 43,54,21,23};

    int leargestNumber=numsCollection[0];
    for (int i = 0; i < 10; i++){
        if (numsCollection[i] > leargestNumber){
            leargestNumber = numsCollection[i];
            std::cout<< "update the new leargest number \n" << numsCollection[i];
        }
        std::cout<< "current leargst number is "<< numsCollection[i] <<std::endl;
    }
    std::cout << "Final largest number is: " << leargestNumber << std::endl;
    

    return 0;
 }


