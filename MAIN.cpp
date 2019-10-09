#include "core/utility.hpp"
#include "imgproc.hpp"
#include "imgcodecs.hpp"
#include "highgui.hpp"

using namespace std;
using namespace cv;

int main(int argc, const char** argv)
{
	Mat image;
	string filename = "E:\\Image\\20181221153933.bmp";

	image = imread(filename, 1);
	if (image.empty())
	{
		printf("Cannot read image file: %s\n", filename.c_str());
		return -1;
	}

	// Create a window
	namedWindow("Edge map", 1);
	imshow("Edge map", image);

	waitKey(0);
	system("pause");

	return 0;
}
