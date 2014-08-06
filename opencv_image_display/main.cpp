// http://gihyo.jp/dev/feature/01/opencv/0002?page=2
#include <opencv\cv.h>
#include <opencv\highgui.h>

int main(int argc, char* argv[]){
	IplImage* img;
	char imgFile[] = "lena.jpg";

	// �摜�ǂݍ���
	img = cvLoadImage(imgFile, CV_LOAD_IMAGE_COLOR);

	// �摜�\��
	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena", img);
	cvWaitKey(0);
	cvDestroyWindow("lena");

	// �摜�̉��
	cvReleaseImage(&img);
}
