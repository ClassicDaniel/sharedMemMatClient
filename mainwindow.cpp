#include "mainwindow.h"
#include "ui_mainwindow.h"

cv::Mat sharedPic;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int shmid;
    key_t key;
    void *pointer;

    key = 445;

    shmid = shmget(key, 8294400, 0666);
    pointer = shmat(shmid, NULL, 0);

    IplImage* iplImage = NULL;
    iplImage = cvCreateImage( cvSize(1280, 720), IPL_DEPTH_8U, 3);

//    std::cout << sizeof(iplImage) << std::endl;
//    image1 = (IplImage*) pointer;
//    image1->height = 720;
//    image1->width = 1280;


//    cv::imshow("ipl", cv::Mat(image1));

//    std::cout << IplImage::height << std::endl;

    sharedPic = cv::Mat(720, 1280, CV_8UC3, (uchar*) pointer);
//    IplImage* src = (IplImage*) pointer;

//    cv::imshow("IplImage", src);
    cv::imshow("Behold", sharedPic);

    iplImage->imageData = (char*) pointer;
    std::cout << sizeof(iplImage) << std::endl;

    cvShowImage("IPL", iplImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    cv::imshow("Behold", sharedPic);
}
