#include <iostream>
#include <algorithm>
#include <vector>
#include <opencv2/opencv.hpp>

// Function to sort a vector of integers
void sortPop(std::vector<int>& population) {
    std::sort(population.begin(), population.end());
}

int main() {
    // Example usage of sortPop function
    std::vector<int> population = {5, 2, 7, 1, 9, 3};
    
    std::cout << "Original Population: ";
    for (int val : population) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    sortPop(population);
    
    std::cout << "Sorted Population: ";
    for (int val : population) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Manipulate raster-p image
    // Assuming you have an image named "image.jpg" in the current directory
    cv::Mat image = cv::imread("image.jpg", cv::IMREAD_COLOR);
    
    if (image.empty()) {
        std::cerr << "Error: Could not read the image file." << std::endl;
        return 1;
    }
    
    // Convert the image to grayscale
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    // Display the original and grayscale images
    cv::imshow("Original Image", image);
    cv::imshow("Grayscale Image", grayImage);
    cv::waitKey(0);

    // Release resources and close windows
    cv::destroyAllWindows();

    return 0;
}
