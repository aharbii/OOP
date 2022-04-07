#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<char> vowels  --> Empty
    // vector<char> vowels(5) --> 5 initialized to zero
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    // vector<int> test_scores(3); --> 3 elements all intialized to zero
    // vector<int> test_scores(3, 100); --> 3 elements all intialized to 100
    vector<int> test_scores{100, 98, 89};

    cout << "\nTest scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    cout << "Enter 3 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];

    cout << "\nUpdated Test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    cout << "Enter a test score to add to the vector: ";
    int score_to_add{0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    cout << "Enter one more test score: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are now " << test_scores.size() << " scores in the vector" << endl;

    vector<vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "Here are the movie rating for reviewer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "Here are the movie rating for reviewer #2 using vector syntax: " << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;


    return 0;
}