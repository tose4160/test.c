//1.���ð���Ŀ¼
//2.���ÿ�Ŀ¼
//3.����������
//4.���û�������������vs2022
//#include "stdafx.h" 
//#include<opencv2/opencv.hpp> 
//#include<iostream>
//using namespace std;
//using namespace cv;
//int main(int argc, char** argv[])
//{
//	const char* imagename = "lena.jpg";
//	Mat img = imread(imagename);
//	//���ļ��ж���ͼ��
//	//Mat src = imread("D:/ͼƬ/lena.jpg");//�ļ�·����д�����
//	if (img.empty())
//	{
//		fprintf(stderr, "Can not load image %s\n", imagename);
//		return -1;
//	}
//	//�������ͼ��ʧ��
//	/*if (src.empty())
//	{
//		fprintf(stderr, "Can not load image %s\n", imagename);
//		return -1;
//	}*/
////	//��ʾͼ��
//	imshow("image", img);
//	//�˺����ȴ�������������������ͷ���
//	waitKey(0);//0�����ã�1��1����
//	return 0;
//}
//int main(int argc, char** argv)
//{
//	Mat src = imread("D:/ͼƬ/lena.jpg");
//	imshow("���봰��",src);
//	waitKey(0);
//	destroyAllWindows();
//	return 0;
//}

//#include <opencv2/core/core_c.h>
//
//extern "C" __declspec(dllexport) int CropImage(int h, int w) {
//	cv::Mat mat = cv::imread("D:/ͼƬ/lena.jpg");
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
//    // ���ļ��ж���ͼ��
//    Mat img = imread(imagename);
//    // �������ͼ��ʧ��
//    if (img.empty())
//    {
//        fprintf(stderr, "Can not load image %s\n", imagename);
//        return -1;
//    }
//    // ��ʾͼ��
//    imshow("image", img);
//    // �˺����ȴ�������������������ͷ���
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
	//���ļ��ж���ͼ��
	Mat img = imread(imagename);
	//�������ͼ��ʧ��
	if (img.empty())
	{
		fprintf(stderr, "Can not load image %s\n", imagename);
		return -1;
	}
	//��ʾͼ��
	imshow("image", img);
	//�˺����ȴ�������������������ͷ���
	waitKey();
	return 0;
}