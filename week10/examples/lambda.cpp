// lambda.cpp  
// Demonstrates the use of a lambda function that 
// filters out the even numbers in a vector....

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5 };

    // Use a lambda to filter out even numbers
    auto is_even = [](int num) {
        return num % 2 != 0;
    };

    // Use std::remove_if and the lambda to remove even numbers from the vector
    nums.erase(std::remove_if(nums.begin(), nums.end(), is_even), nums.end());

    // Print the remaining numbers in the vector using a range-for statement
    
    for (int num : nums)                    // number of elements is unknown.
        {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
