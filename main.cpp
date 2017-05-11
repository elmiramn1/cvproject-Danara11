#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char*argv[]) {
    Mat img = imread(argv[1],IMREAD_COLOR);
    namedWindow("image",WINDOW_AUTOSIZE);
    imshow("image",img);
    waitKey(0);
    destroyWindow("image");
    return 0;
}
