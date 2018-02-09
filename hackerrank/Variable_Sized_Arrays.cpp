#include <iostream>
#include <vector>
using namespace std;



int main () {

    //number of variable-length arrays
    int number_of_variable_length_array, length_of_variable_length_array, array_item, number_of_query,first_d_arr_index,second_d_arr_index;

    vector< vector<int> > arr;
    vector<int> sub;



    cin >> number_of_variable_length_array;
    cin >> number_of_query;

    for(int i=0; i<number_of_variable_length_array; i++){
            cin >> length_of_variable_length_array;

        for(int j=0; j<length_of_variable_length_array; j++){
            cin >> array_item;
            sub.push_back(array_item);
        }
        arr.push_back(sub);//Adding a "row" to the vector
        sub.clear();//Making another one
    }

    //Output
    for(int i=0; i<number_of_query; i++){
        cin >> first_d_arr_index;
        cin >> second_d_arr_index;

            cout <<arr[first_d_arr_index][second_d_arr_index] << endl;
    }


   return 0;
}

/*
int main () {
    int * array[3];
//also possible: int ** array =  new int*[3]; but don't forget to delete it afterwards.
    int sub1[3] = {1,2,3};
    int sub2[2] = {1,2};
    int sub3[4] = {1,2,3,4};
    array[0] = sub1;
    array[1] = sub2;
    array[2] = sub3;

   return 0;
}*/


/*
    sub.push_back(1);
    sub.push_back(2);
    arr.push_back(sub);//Adding a "row" to the vector
    sub.clear();//Making another one
    sub.push_back(1);
    sub.push_back(12);
    sub.push_back(54);
    arr.push_back(sub);//Adding another "row" to the vector
    */
