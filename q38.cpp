#include <iostream>
#include <fstream>
#include <stdexcept>

double calculateAverage(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("Error opening file!");
    }

    double sum = 0.0;
    double num;
    int count = 0;
    while (file >> num) {
        sum += num;
        ++count;
    }

    if (count == 0) {
        throw std::runtime_error("No data found in the file!");
    }

    return sum / count;
}

int main() {
    try {
        double average = calculateAverage("data.txt");
        std::cout << "Average: " << average << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

