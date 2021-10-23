/*************************************************************************
** Author : Isaiah Ebert
** Program : hw2, q2
** Date Created : October 22, 2021
** Date Last Modified : October 22, 2021
** Usage : No command line arguments
**
** Problem:
Create a struct called 'Check' and a class called 'CheckBook'.
CheckBook contains an array of 'Checks' write checks until their
value doesn't allow for anymore through 'balance'. Display all 
the 'Checks'.
*************************************************************************/

#include <iostream>
#include <string>

using namespace std;


struct Check{
    int CheckNum;
    float CheckAmount;
    string CheckMemo;

    bool operator<(float amount2) const{
        if (CheckAmount < amount2)
            return false;
        else
        return true;
    }
    void operator<<(Check values) const{
        cout << values.CheckNum;
        cout << values.CheckAmount;
        cout << values.CheckMemo;
    }
    
};

class CheckBook : Check
{
    public:
    CheckBook(){balance=0,numOfChecks=0,checkBookSize=0;}
    CheckBook(float bal){balance=bal,numOfChecks=0,checkBookSize=2;}
    ~CheckBook();
    CheckBook(const CheckBook &book);
    
    void setBalance(float num){balance = num;}
    void setlastDeposit(int num){lastDeposit = num;}
    void setnumOfChecks(int num){numOfChecks = num;}
    void setcheckBookSize(int num){checkBookSize = num;}
    const float getBalance(){return balance;}
    const int getlastDeposit(){return lastDeposit;}
    const int getnumOfChecks(){return numOfChecks;}
    const int getcheckBookSize(){return checkBookSize;}

    void deposit(int numb){balance += numb, lastDeposit = numb;}

    const void displayChecks();
    bool writeCheck(Check c_amount);
    void operator=(const CheckBook book2);



    private:
    float balance;
    int lastDeposit;
    int numOfChecks;
    int checkBookSize;
    Check *chkPtr = new Check[checkBookSize];
    
    
    
};


CheckBook::~CheckBook(){
    delete chkPtr;
    delete[] chkPtr;
}
const void CheckBook::displayChecks(){
    
}
bool CheckBook::writeCheck(Check c_amount){
    
}
void CheckBook::operator=(const CheckBook book2){

}


CheckBook checkTest(){

}
void main(){

}