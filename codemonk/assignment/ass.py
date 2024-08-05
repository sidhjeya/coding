import cv2
import numpy as np

# Load the image (replace with your image path)
image = cv2.imread("/home/light/Assignment_Data/SIG537_1/2.jpg")
image_size = image.shape
print("size of the image is ",image_size)
# Invert the image using element-wise subtraction (works for all color spaces)
inverted_image = 255 - image

# Convert to grayscale (optional, but often helpful for contour detection)
gray = cv2.cvtColor(inverted_image, cv2.COLOR_BGR2GRAY)

# Apply thresholding (adjust thresholds as needed)
thresh = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)[1]  # Grayscale thresholding

# Find contours
contours, hierarchy = cv2.findContours(thresh, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

# Count contours within specified area range (adjust min_area and max_area if needed)
filtered_contours = []
bounding_rects = []
num_contours = 0
min_area = 1000  # Adjust minimum area threshold
max_area = 2000  # Adjust maximum area threshold (optional, set to None for no upper limit)
for cnt in contours:
    area = cv2.contourArea(cnt)
    if (min_area is None or area >= min_area) and (max_area is None or area <= max_area):
        x, y, w, h = cv2.boundingRect(cnt)  # Get bounding rectangle coordinates
        bounding_rects.append((x, y, w, h))
        filtered_contours.append(cnt)

        # Calculate center coordinates of the bounding box
        center_x = int(x + w / 2)
        center_y = int(y + h / 2)

        # Count only if center y is greater than 100
        if center_y > 1:
            num_contours += 1
            print(center_x, " and ", center_y)

            # Draw a circle at the center with a chosen radius and color (adjust as needed)
            cv2.circle(inverted_image, (center_x, center_y), 5, (0, 255, 0), -1)  # Green circle, radius 5

# Draw filtered contours and bounding rectangles on the inverted image (optional)
cv2.drawContours(inverted_image, filtered_contours, -1, (0, 0, 255), 2)  # Red contours

# Draw a red line from (0, 100) to (700, 100)
cv2.line(inverted_image, (0, 1), (1000, 1), (0, 0, 255), 2)  # Red line

# Print the number of contours with center y > 100
print(f"Number of contours with center y > 100: {num_contours}")

# Display the inverted image with filtered contours, bounding rectangles, circles, and line
cv2.imshow("Inverted Image with Contours, Rectangles, Circles, and Line", inverted_image)
cv2.waitKey(0)
cv2.destroyAllWindows()
