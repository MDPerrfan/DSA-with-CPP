#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& vec, int target){//The & symbol indicates that the function is receiving the vector by reference. 

    for(int i;i<vec.size();i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
std::vector<int>reverse(std::vector<int>& vec){
    int start = 0;                 // Start index
    int end = vec.size() - 1;
    for(int i=0;i<vec.size()/2;i++){
        std::swap(vec[start], vec[end]); // Swap elements at start and end
        start++;
        end--;
    }
    return vec;
}
int main(){
 std::vector<int> numbers = {10, 23, 45, 70, 50, 80};
    int target = 70;

    // Perform linear search
    int result = linearSearch(numbers, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the vector." << std::endl;
    }

    //print the reversed vector
    std::cout << "Reversed vector: " <<std::endl;
    std::vector<int> reversedNumbers = reverse(numbers);
    for(int n: reversedNumbers){
        std::cout<<n<<" ";
    }
    return 0;

}