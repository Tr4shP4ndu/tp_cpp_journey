#include <iostream>

using namespace std;

int main()
{
    // Correctly initializing the array with characters
    char vowels[] {'a', 'e', 'i', 'o', 'u'};

    // Printing the vowels to verify the array
    for(char vowel : vowels) {
        cout << "Vowel: " << vowel << " ";
    }
    cout << endl;

    cout << "\nThe First Vowel is: " << vowels[0] << endl;
    cout << "\nThe last Vowel is: " << vowels[4] << endl;

    double hi_temp [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe First High Temp is: " << hi_temp[0] << endl;

    hi_temp[0] = 100.7;
    cout << "\nThe Updated First High Temp is: " << hi_temp[0] << endl;

    int test_score[5];
    // Optional: Initializing the test scores for demonstration purposes
    for(int i = 0; i < 5; i++) {
        test_score[i] = i * 10; // Assigning some values
    }

    // Using a loop to print test scores with appropriate labels
    for(int i = 0; i < 5; i++) {
        cout << "\nThe " << (i+1) << ((i == 0) ? "st" : (i == 1) ? "nd" : (i == 2) ? "rd" : "th") << " score is: " << test_score[i] << endl;
    }

    return 0;
}
