#include </home/ljy/kubig2025/opencv/part2/color.hpp>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

String folderPath = "/home/ljy/kubig2025/opencv/data/";

int main()
{
    Mat img = imread(folderPath + "lenna.bmp");
    namedWindow("img");
    auto i = getTickCount();
    int keycode;
    while (true)
    {
        keycode = waitKey(0);
        cout << "keycode: " << keycode << endl;
        cout << "i: " << i << endl;
        cout << "fps: " << getTickFrequency() / (getTickCount() - i) << endl;

        if (keycode == 'v' || keycode == 'V')
        {
            img = ~img;
        }
        if (keycode == 'a' || keycode == 'A')
        {
            img = img + 1;
        }
        if (keycode == 'd' || keycode == 'D')
        {
            img = img - 1;
        }
        if (keycode == 65364)
        {
            cout << "key up arrow!" << endl;
        }
        if (keycode == 65362)
        {
            cout << "key down arrow!" << endl;
        }
        if (keycode == 27)
            break;
        i = getTickCount();
        imshow("img", img);
    }
    destroyAllWindows();
    return 0;
}