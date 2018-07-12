#ifndef FUNCTION_DECLARE_H
#define FUNCTION_DECLARE_H


#include "include_all.h"

#define pi (double)3.1415926

#define MIN_SIZE 20

#define R_D (double)(1)

#define maxB   (uchar)100
#define minB   (uchar)0
#define maxG   (uchar)255
#define minG   (uchar)80
#define maxR   (uchar)255
#define minR   (uchar)50

#define maxG_B   (uchar)255
#define minG_B   (uchar)0
#define maxR_B   (uchar)255
#define minR_B   (uchar)0

#define THRESHOLD 150

#define uchar unsigned char

/*��ȡ��Ե��srcΪ��ͨ����dstΪ��ֵͼ��*/
void edge(Mat &src, Mat &dst);
/*����Ե��Ϣ��������*/
void edge2list(vector<vector<Point>> & contours_des, Mat & img, vector<Vec4i> &hierarchy);
/*����������ȡ��Ϣ��������Ե��ͼ��ķ�ʽ���ֳ���*/
void drawContour(Mat& img, vector<vector<Point>> &contours, int type = 1, Scalar color = Scalar(255));
/*���һ���뾶��Բ�εķ�Χ����ɫ��Ϣ�Ƿ����Ҫ��*/
bool checkColor(Mat * img, Point2i &center, double r_d, double proportion = 0.5);

bool calcCenter(vector<Point> &contour, Point &center);

vector<Point> checkCircle(vector<vector<Point>> &contours);

const int NUMBER = 3;//�������
const int radius = 7; //����뾶3.5cm
const int bigball_ball = 2;  //�����������ϵ��, big_ball:ball=bigball_ball
const int car_ball = 3;  //���򳵵ı����� ��������=car_ball
const int window_width = 1000;//ͼ��X
const int window_height = 1000;//ͼ��Y
#define MIN_SIZE 20

/// Function headers 

#define Pi 3.1415926

/// Function headers 

//#define Method1
#ifdef Method1
vector<Point> Method_of_exhaustion(vector<Point>&center_points);
#endif

#define Method2
#ifdef Method2
vector<Point> Greedy_Algorithm(vector<Point>&center_points);
#endif

/* ��ȡ�µļ������� */
Mat get_centroid(vector<Point> & Points, vector<Point> & Points_checked);
/* ת��Ϊ�����˼����궯���� */
void movement(vector<cv::Point>& path, vector<double> & rho, vector<double> & theta, vector<double> & angle);

/*  */
Point each_getCentroid(vector<Point> list);
#endif // !FUNCTION_DECLARE_H

