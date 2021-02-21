#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int, char**)
{
    VideoCapture cap;
    cap.open(1200);

    if(!cap.isOpened())     
    {
        cout<<"Can't open the camera"<<endl;
        return -1;
    }

    Mat f;
    namedWindow("w",1);

    while(true)
    {
        cap>>f;

        imshow("w",1);

        if(waitKey(100) > 0)
            break;
    }

    return 0;
}