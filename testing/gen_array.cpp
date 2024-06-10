#include <iostream>
#include <vector>
#include <cstdlib> // For rand and srand
#include <ctime> // For time

int main() {
    // Constants for array size and element range
    /*
	const int MIN_POINT_CNT = 10;
    const int MAX_POINT_CNT = 50;
    const int MIN_POS = 1000;
    const int MAX_POS = 1000000000;
    const int MIN_PRICE = 1000;
    const int MAX_PRICE = 1000000000;
	*/

	const int MIN_POINT_CNT = 4;
    const int MAX_POINT_CNT = 10;
    const int MIN_POS = 1;
    const int MAX_POS = 100;
    const int MIN_PRICE = 10;
    const int MAX_PRICE = 100;

    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(0)));

    // Generate a random size for the array within the specified range
    int N = MIN_POINT_CNT + (std::rand() % (MAX_POINT_CNT - MIN_POINT_CNT + 1));

    // Output the chosen size of the array
    std::cout << N << "\n";

    // Create and fill the array with random numbers
    std::vector<int> positions(N);
    for (int i = 0; i < N; ++i) {
        positions[i] = MIN_POS + (std::rand() % (MAX_POS - MIN_POS + 1));
    }

    std::vector<int> prices(N);
    for (int i = 0; i < N; ++i) {
        prices[i] = MIN_PRICE + (std::rand() % (MAX_PRICE - MIN_PRICE + 1));
    }
    

    // Print the array (for demonstration, may be commented out for large arrays)
    for (int i = 0; i < N; ++i) {
        std::cout << positions[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < N; ++i) {
        std::cout << prices[i] << " ";
    }

    return 0;
}
