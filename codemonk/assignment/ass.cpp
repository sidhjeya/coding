#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
  // Read the image
  Mat image = imread("input.jpg");

  // Check if image loaded successfully
  if (image.empty()) {
    std::cout << "Error loading image!" << std::endl;
    return -1;
  }

  // Convert image to grayscale
  Mat gray_image;
  cvtColor(image, gray_image, COLOR_BGR2GRAY);

  // Apply blurring (optional)
  blur(gray_image, gray_image, Size(3, 3));

  // Thresholding (adjust thresholds as needed)
  Mat binary_image;
  threshold(gray_image, binary_image, 127, 255, THRESH_BINARY);

  // Find contours
  std::vector<std::vector<Point>> contours;
  std::vector<Vec4i> hierarchy;
  findContours(binary_image, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

  // Draw contours on original image (optional)
  Mat drawing = image.clone();
  for (int i = 0; i < contours.size(); i++) {
    drawContours(drawing, contours, i, Scalar(0, 255, 0), 2);  // Green color, thickness 2
  }

  // Display images
  imshow("Original Image", image);
  imshow("Binary Image", binary_image);
  imshow("Contours", drawing);

  waitKey(0); // Wait for a key press

  return 0;
}
