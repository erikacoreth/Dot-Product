//Erika Coreth Mod 1 Project 1

#include <iostream> //needed to use cout
using namespace std; 

//dot product function
//vec 1- pointer for first vec, vec 2- pointer for 2nd vec
//size- # of elements in both vecs
int dotProduct(int* vec1, int* vec2, int size) {
    int result = 0;

    for (int i=0; i < size; ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}
//size tells the func how many elements to loop through (as long as i is less than size)
//vec1 and vec 2 multiplies mathcing values
//all products added to result


int main(){
    //step1- define 2 example vactors (arrays)
    int vector1[] = {8, 16, 32};
    int vector2[] = {5, 9, 13};
    int size = 3;

    //step2- call the dotproduct func
    int result = dotProduct(vector1, vector2, size);

    //step3- print the result

    cout << "Dot product result: " << result << endl;

    return 0;
}

