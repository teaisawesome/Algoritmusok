#include <iostream>
#include <vector>

void Search(const std::vector<int>& A, int value)
{
    int i = 0;
    
    while(i <= A.size() && A[i] != value)
    {
        i = i + 1;
    }
    if(i > A.size())
    {
        std::cout << "Nincs ilyen elem!";    
    }
    else
    {
        std::cout << "A keresett elem a " << i << ". indexen van.";
    }
}

char* SearchWithIterator(const std::vector<int>& A, int value)
{
    for(auto i = A.begin(); i != A.end(); ++i)
    {
        if(*i == value)
        {
            return "Got it!";
        }
    }
    return "Doesn't contain the value!";
}

int main()
{
    std::vector<int> vector = {1,3,5,2,6,9};
    
    Search(vector, 9);
    
    std::cout << SearchWithIterator(vector, 10);
    
}
