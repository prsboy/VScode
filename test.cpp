#include <iostream>
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, const char* argv[])
{
    cout<<"OpenCV Hello the world..."<<endl;
    
    Mat image;
    image = imread("dog.jpg",1);
    imshow("START PROJECT WITH OPENCV", image);
    waitKey(0);
    return 0;
}