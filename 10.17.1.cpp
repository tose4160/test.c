//1.配置包含目录
//2.配置库目录
//3.配置连接器
//4.配置环境变量并重启vs2022
//#include "stdafx.h" 
//#include<opencv2/opencv.hpp> 
//#include<iostream>
//using namespace std;
//using namespace cv;
//int main(int argc, char** argv[])
//{
//	const char* imagename = "lena.jpg";
//	Mat img = imread(imagename);
//	//从文件中读入图像
//	//Mat src = imread("D:/图片/lena.jpg");//文件路径，写清楚。
//	if (img.empty())
//	{
//		fprintf(stderr, "Can not load image %s\n", imagename);
//		return -1;
//	}
//	//如果读入图像失败
//	/*if (src.empty())
//	{
//		fprintf(stderr, "Can not load image %s\n", imagename);
//		return -1;
//	}*/
////	//显示图像
//	imshow("image", img);
//	//此函数等待按键，按键盘任意键就返回
//	waitKey(0);//0是永久，1是1毫秒
//	return 0;
//}
//int main(int argc, char** argv)
//{
//	Mat src = imread("D:/图片/lena.jpg");
//	imshow("输入窗口",src);
//	waitKey(0);
//	destroyAllWindows();
//	return 0;
//}

//#include <opencv2/core/core_c.h>
//
//extern "C" __declspec(dllexport) int CropImage(int h, int w) {
//	cv::Mat mat = cv::imread("D:/图片/lena.jpg");
//	return 1;
//}
//#include "stdafx.h"
//#include<opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//int main(int argc, char* argv[])
//{
//    if (argc != 2)
//    {
//        fprintf(stderr, "Usage: %s <image_path>\n", argv[0]);
//        return -1;
//    }
//
//    const char* imagename = argv[1];
//    // 从文件中读入图像
//    Mat img = imread(imagename);
//    // 如果读入图像失败
//    if (img.empty())
//    {
//        fprintf(stderr, "Can not load image %s\n", imagename);
//        return -1;
//    }
//    // 显示图像
//    imshow("image", img);
//    // 此函数等待按键，按键盘任意键就返回
//    waitKey();
//    return 0;
//}
#include<tchar.h>
#include<opencv2/opencv.hpp> 
using namespace std;
using namespace cv;
int _tmain(int argc, _TCHAR* argv[])
{
	const char* imagename = "lena.jpg";
	//从文件中读入图像
	Mat img = imread(imagename);
	//如果读入图像失败
	if (img.empty())
	{
		fprintf(stderr, "Can not load image %s\n", imagename);
		return -1;
	}
	//显示图像
	imshow("image", img);
	//此函数等待按键，按键盘任意键就返回
	waitKey();
	return 0;
}