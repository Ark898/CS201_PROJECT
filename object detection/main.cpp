#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <fstream>

using namespace cv;
using namespace std;

Mat image;

void onMouse(int event, int x, int y, int flags, void *userdata);

int main()
{
	image = imread("C:/Users/Prakhar/Downloads/jennai.jpg"); // Load your image

	if (image.empty())
	{
		cout << "Could not open or find the image." << endl;
		return -1;
	}

	vector<Point> points; // Store the coordinates of marked points

	namedWindow("Mark Points on Image");
	setMouseCallback("Mark Points on Image", onMouse, &points);

	while (true)
	{
		imshow("Mark Points on Image", image);

		int key = waitKey(10);

		if (key == 27) // 27 is the ASCII code for the 'Esc' key
			break;
	}
	std::string filename = "C:/Users/Prakhar/Downloads/src/points.txt"; // Replace with the name of your text file
	std::ofstream outputFile(filename);

	if (!outputFile)
	{
		std::cerr << "Failed to open the file: " << filename << std::endl;
	}

	for (const Point &point : points)
	{
		cout << "Point: (" << point.x << ", " << point.y << ")" << endl;
		outputFile << point.x << " " << point.y << endl;
	}

	destroyWindow("Mark Points on Image");
	outputFile.close();

	std ::cout << "Press any number key to continue" << endl;

	int g;
	std::cin >> g;

	std::string filename1 = "C:/Users/Prakhar/Downloads/src/result.txt"; // Replace with the name of your text file
	std::ifstream inputFile(filename1);

	if (!inputFile)
	{
		std::cerr << "Failed to open the file: " << filename << std::endl;
		return 1;
	}

	vector<int> prakhar;
	int value;
	while (inputFile >> value)
	{
		prakhar.push_back(value);
	}

	std::cout << prakhar.size() << "size" << endl;
	inputFile.close();

	image = imread("C:/Users/Prakhar/Downloads/jennai.jpg"); // Load your image
	for (size_t i = 0; i < prakhar.size() - 1; ++i)
	{
		const Point &point = points[prakhar[i]];
		const Point &point2 = points[prakhar[i + 1]];
		cv ::Point start(point.x, point.y);
		cv ::Point end(point2.x, point2.y);
		// cout << "Point: (" << point.x << ", " << point.y << ")" << endl;
		// outputFile << point.x << " " << point.y << endl;
		arrowedLine(image, start, end, Scalar(255, 0, 0), 1);
	}

	if (image.empty())
	{
		cout << "Could not open or find the image." << endl;
		return -1;
	}
	namedWindow("OPTIMAL PATH");
	while (true)
	{
		imshow("OPTIMAL PATH", image);

		int key = waitKey(10);

		if (key == 27) // 27 is the ASCII code for the 'Esc' key
			break;
	}
	destroyWindow("OPTIMAL PATH");
	return 0;
}

void onMouse(int event, int x, int y, int flags, void *userdata)
{
	vector<Point> *points = static_cast<vector<Point> *>(userdata);

	if (event == EVENT_LBUTTONDOWN)
	{
		points->push_back(Point(x, y));
		circle(image, Point(x, y), 6, Scalar(0, 0, 255), -1); // Mark the point on the image
		imshow("Mark Points on Image", image);				  // Update the displayed image
	}
}
