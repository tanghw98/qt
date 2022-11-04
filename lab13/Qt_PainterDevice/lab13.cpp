#include "lab13.h"
#include "ui_lab13.h"
#include<QPixmap>
#include<QPainter>
#include<QImage>
#include<QPicture>

lab13::lab13(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab13)
{
    ui->setupUi(this);
    //    //Pixmap绘图设备 专门为平台做了优化
    //    QPixmap pix(300,300);
    //    //填充颜色
    //    pix.fill(Qt::white);
    //    //声明画家
    //    QPainter painter(&pix);
    //    painter.setPen(QPen(Qt::green));
    //    painter.drawEllipse(QPoint(150,150),100,100);
    //    //保存路径
    //    pix.save("C:\\Users\\tanghw\\Documents\\qt\\lab13\\Qt_PainterDevice\\pix.jpg");
    //}
    //Image绘图设备 可以对像素进行访问
//    QImage img(300,300,QImage::Format_RGB32);
//    img.fill(Qt::white);
//    QPainter painter(&img);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),100,100);
//    img.save("C:\\Users\\tanghw\\Documents\\qt\\lab13\\Qt_PainterDevice\\img.jpg");

    //QPicture绘图事件 可以记录和重现绘图指令
    QPicture pic;
    QPainter painter;
    painter.begin(&pic);
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150),100,100);
    painter.end();
    pic.save("C:\\Users\\tanghw\\Documents\\qt\\lab13\\Qt_PainterDevice\\pic.zt");
}

////绘图事件
void lab13::paintEvent(QPaintEvent *){

//    QPainter painter(this);
//    //利用QImage对像素进行修改
//    QImage img;
//    img.load(":/new/prefix1/Image/3.png");
//    //修改像素点
//    for(int i=0;i<50;i++){
//        for(int j=0;j<100;j++){
//            QRgb value=qRgb(255,0,0);
//            img.setPixel(i,j,value);
//        }
//    }
//    painter.drawImage(0,0,img);
    QPainter painter(this);
    QPicture pic;
    pic.load("C:\\Users\\tanghw\\Documents\\qt\\lab13\\Qt_PainterDevice\\pic.zt");
    painter.drawPicture(0,0,pic);

}

lab13::~lab13()
{
    delete ui;
}

