#include <iostream>
#include "FootPrint.h"
#include "videoToImage/trimVideo.h"

using namespace std;
using namespace cv;


int main() {
    FootPrint footPrint("optitrack", "021501");
//    footPrint.loadFootImages();
    footPrint.run();
    return 0;
}