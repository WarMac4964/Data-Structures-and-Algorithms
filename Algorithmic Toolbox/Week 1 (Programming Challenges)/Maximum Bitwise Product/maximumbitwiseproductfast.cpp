#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

long long MaxBitwiseProduct(const vector<int>& numbers) {
    long long result = 0;
    long max_1 = 0;
    long max_2 = 0;
    int n = numbers.size();
    for(int i = 0; i < n; i++){
        if((max_1==0) || (numbers[i]>max_1)){
            max_1 = numbers[i];
        }
    }
    for(int i = 0; i < n; i++){
        if((numbers[i] != max_1) && (numbers[i]>max_2)){
            max_2=numbers[i];
        }
    }
    result = max_1 * max_2;
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin>>numbers[i];
    }
    long long result = MaxBitwiseProduct(numbers);
    cout<<result<<"\n";
    return 0;
}