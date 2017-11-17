#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){

    //(note: carVins starts as an empty vector)
    vector<int> car_vins;

    //num contains 10 integer values
    vector<int> num(10);

    //prices contains 5 prices that are initially zero
    vector<double> prices(5, 0.0);

    int num_cars;
    int vin;

    cout<<"How many cars are in the showroom?\n";
    cin>>num_cars;

    for(int i=0; i<num_cars; i++){
        cout<<"Enter the vin for car"<<i + 1<<" :\n";
        cin>>vin;

        car_vins.push_back(vin);
    }

    cout<<"\nVin number of cars in showroom:\n";
    for(int i=0; i<car_vins.size(); i++){
        cout<<car_vins[i]<<endl;
    }

    //add 10 random integers to the num vector
    int random_num;
    for(int i =0; i <num.size(); i++){
        num[i] = rand();
    }

    //print the random numbers
    cout<<"\n10 random integers: \n";
    for(int i=0; i<num.size(); i++){
        cout<<num[i]<<endl;
    }

    //Other vector functions include:
	//.at returns the value located at element 1/or any index you specify
	//int value = num.at(1);
	//cout <<endl<<value;

	//.capacity() returns the max number of elements
	//that may be stored
	//without adding additional memory
    //int value2 = num.capacity();
    //cout<<endl<<value2;

    //.pop_back removes the last element from a vector
    //num.pop_back();

    //.clear() is used to clear a vector of all elements
	//num.clear();

	//.empty() returns true if vector is empty
	//if(num.empty()==true)
		//cout<<"vector num is empty\n";

	//.swap(vector2) swaps the contents


	return 0;



}
