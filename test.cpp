#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Mat img1;       // Empty matrix
    
    Mat img2(480, 640, CV_8UC1);
    Mat img3(480, 640, CV_8UC3);
    Mat img4(Size(640, 480), CV_8UC3);

    Mat img5(480, 640, CV_8UC1, Scalar(128));       // (128, 128, 128)
    Mat img6(480, 640, CV_8UC3, Scalar(0,0,255));   // Red Color

    Mat mat1 = Mat::zeros(3,3, CV_32SC1);   // 0's Matrix
    Mat mat2 = Mat::ones(3, 3, CV_32FC1);   // 1's Matrix
    Mat mat3 = Mat::eye(3, 3, CV_32FC1);     // dentity matirx

    float data[] = {1,2,3,4,5,6};
    Mat mat4(2,3, CV_32FC1, data);

    Mat mat5 = (Mat_<float>(2,3) << 1,2,3,4,5,6);
    Mat mat6 = Mat_<uchar>({2,3}, {1,2,3,4,5,6});

    mat4.create(256, 256, CV_8UC3);     // uchar, 3-channels
    mat5.create(4,4,CV_32FC1);          // float, 1-channel

    mat4 = Scalar(255,0,0);
    mat5.setTo(1.0f);

    imshow("mat4", mat4);
    imshow("mat5", mat5);

    waitKey();
}