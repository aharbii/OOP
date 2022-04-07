#include <iostream>

using namespace std;

int main()
{
    char vowels[5]{'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    /* cin >> vowels[5]; */ // out of bounds - error

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    int test_scores[5]{};
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl;
    cout << "The address of first element is:            " << &test_scores[0] << endl;
    return 0;
}