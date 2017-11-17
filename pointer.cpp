#include <iostream>

using namespace std;

int main(){

    int rahat_account = 12345;
    int *account_pointer = &rahat_account;

    cout<<"Rahat account number: "<<rahat_account<<" is at: "<<account_pointer<<endl;
    cout<<"account_pointer point to this value: *account_pointer: "<<*account_pointer<<endl;

    //another example
    cout<<"Next example, declare num=95:"<<endl;
    int num = 95;

    cout<<"Address to find num value: "<<&num<<endl;
    cout<<"Size of num value based on datatype: "<<sizeof(num)<<endl;
    cout<<"Value at this location: "<<num<<endl;

    cout<<endl<<"Next example, add num_pointer"<<endl;
    //lets add a pointer to hold the address of num
    int* num_pointer = &num;

    //lets change the value of num using the pointer
    cout<<"Add 5 to num using pointer and not the variable"<<endl;
    *num_pointer += 5;

    cout<<"Num is now: "<<num<<endl;
    cout<<"Num location is still the same: "<<&num<<endl;
    cout<<"Value of num_pointer is: "<<num_pointer<<endl;

    cout<<endl<<"Next example, using characters"<<endl;
    char letter = 'A';
    cout<<"size of letter value based on datatype: "<<
			sizeof(letter)<<endl;

    cout<<"Value at this location: "<<letter<<endl;

    //lets add a pointer to hold the address of letter
    char* letter_pointer = &letter;

    //lets change the value of letter using the pointer
    cout<<"\nadd 25 to letter:"<<endl;
    *letter_pointer += 25; //letter value is now Z

    cout<<"Letter is now: "<<letter<<endl;

	return 0;



}
