#include "matplotlibcpp.h" // Include the matplotlib-cpp header
#include <vector>
#include <Eigen/Dense> 

namespace plt = matplotlibcpp; // Define a namespace alias for convenience

int main() {
    // Create some data to plot
    std::vector<double> y = {1, 3, 2, 4};

    // Plot the data
    plt::plot(y);

    // Save the plot to a PDF file
    plt::save("minimal.pdf");

    Eigen::MatrixXd A(2, 2); 

    // Initialize the matrix A
    A << 1, 2, 
         3, 4;

    // Declare a dynamic-sized vector of doubles
    Eigen::VectorXd v(2);

    // Initialize the vector v
    v << 5, 
         6;

    // Perform matrix-vector multiplication
    Eigen::VectorXd result = A * v;

    // Print the original matrix A
    std::cout << "Matrix A:\n" << A << std::endl;

    // Print the original vector v
    std::cout << "\nVector v:\n" << v << std::endl;

    // Print the result of the multiplication
    std::cout << "\nResult of A * v:\n" << result << std::endl;

    return 0;
}