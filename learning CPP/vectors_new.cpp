#include <iostream>
#include <vector>

using namespace std;
void printVector(vector<float> vIn);

int main()
{
    //creating a vectoor of integers
    vector<int> vectorInts;
    cout << "VectorInts has a size of: " << vectorInts.size() << endl;

    //changing the size of vectorInts
    vectorInts.resize(8);
    cout << "VectorInts now has a size of: " << vectorInts.size() << endl;
    
    //Iterating through a vector
    std::vector<int>::iterator it;
    for (it = vectorInts.begin(); it != vectorInts.end(); it++)
        std::cout << *it<< " ";

    //erase the 5th element in the vector
    vectorInts.erase(vectorInts.begin()+4);

    //erase a range of elements in the vector i.e from the second to the fourth
    vectorInts.erase(vectorInts.begin()+1, vectorInts.begin()+3);

    //clear the vector
    vectorInts.clear();
    std::cout<<"\nAfter clear, the vector has zero elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
      std::cout<<*it<<" ";

    cout << "New size o vector after clearing is: "<<vectorInts.size()<< endl;


    vector<float> vFloat;
    
    std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
    
    std::cout<<"\nAdding 10 elements to the vector\n";
    
    vFloat.assign(10, 8.8);
    vFloat.push_back(24.6);
    vFloat.push_back(60.78);

    vector<float>::iterator nit;
    for (nit = vFloat.begin(); nit != vFloat.end(); nit++)
        cout << *nit << " ";

    //To remove the last element of the vector
    vFloat.pop_back();
    
    std::cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 

    //The function is supressing the size of the vector since we resize to 5
    printVector(vFloat);
    return 0;
}
//We can add elements to the end (or back) of a vector using ::push_back.
//iterators are used to keep track of where we are in a vector
//Since we can add elements anywhere in the vector, 
//we do not refer to the first element of a vector as the zero element,
// we call it the beginning. The last element is called end

//We can remove specific elements from a vector using ::erase.


 void printVector(vector<float> vIn)
 {//printing the contents of vIns
    //TODO: Complete the function 
    vIn.resize(5);
    std::vector<float>::iterator it;
    
    for (it = vIn.begin(); it != vIn.end(); it++)
        std::cout << *it<< " ";

 }