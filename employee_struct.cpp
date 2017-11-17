#include <iostream>
using namespace std;

struct Address{

    char house_num[5];
    char street_name[30];
    char city[30];
    char state[3];
    int zipcode;

};

struct Date_of_birth{

    int month;
    int day;
    int year;

};

struct Employee{

    char first_name[30];
    char last_name[30];
    int ee_number;
    double hourly_wage;
    Address home_address;
    Date_of_birth dob;

};

void show_employees_data(Employee[], int);

int main(){

    int number_of_employees;
    cout<<"How many employees do you have? \n";
    cin>>number_of_employees;

    //create an array of type Employee
    Employee employees[number_of_employees];

    for(int i=0; i<number_of_employees; i++){
        cout<<"Please enter first name: \n";
        cin>>employees[i].first_name;

        cout<<"Enter last name: \n";
        cin>>employees[i].last_name;

        cout<<"Enter employee id: \n";
        cin>>employees[i].ee_number;

        cout<<"Enter hourly wage: \n";
        cin>>employees[i].hourly_wage;

        cout<<"Enter house number: \n";
        cin>>employees[i].home_address.house_num;
        cin.ignore();

        cout<<"Enter street name: \n";
        cin.getline(employees[i].home_address.street_name, 30);

        cout<<"Enter city: \n";
        cin>>employees[i].home_address.city;

        cout<<"Enter state: \n";
        cin>>employees[i].home_address.state;

        cout<<"Enter zipcode: \n";
        cin>>employees[i].home_address.zipcode;

        cout<<"Enter birth month, day and year:  \n";
        cin>>employees[i].dob.month;
        cin>>employees[i].dob.day;
        cin>>employees[i].dob.year;
    }

    show_employees_data(employees, number_of_employees);

}

void show_employees_data(Employee employees[], int size){

    for(int i = 0; i < size; i++){
        cout<<employees[i].first_name<<" "
            <<employees[i].last_name<<endl;

        cout<<employees[i].home_address.house_num<<" "
            <<employees[i].home_address.street_name<<endl;

        cout<<employees[i].home_address.city<<", "
            <<employees[i].home_address.state<<" "
            <<employees[i].home_address.zipcode<<endl;

        cout<<"Hourly wage: "<<employees[i].hourly_wage<<endl;

        cout<<"Date of birth: ";
        switch(employees[i].dob.month){
        case 1:
            cout<<"January ";
            break;
        case 2:
            cout<<"February ";
            break;
        case 3:
            cout<<"March ";
            break;
        case 4:
            cout<<"April ";
            break;
        case 5:
            cout<<"May ";
            break;
        case 6:
            cout<<"June ";
            break;
        case 7:
            cout<<"July ";
            break;
        case 8:
            cout<<"August ";
            break;
        case 9:
            cout<<"September ";
            break;
        case 10:
            cout<<"October ";
            break;
        case 11:
            cout<<"November ";
            break;
        case 12:
            cout<<"December ";
            break;

        default:
            cout<<"Invalid month";
            break;
        };

        cout<<employees[i].dob.day<<", ";
		cout<<employees[i].dob.year<<endl;

    }

}
