#include "lab4.h"
#include "ui_lab4.h"
#include<QDialog>
#include<QDebug>
#include<QMessageBox>
#include<QColorDialog>
#include<QFileDialog>
#include<QFontDialog>

lab4::lab4(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::lab4)
{
    ui->setupUi(this);
    //点击新建按钮 弹出一个对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        //模态对话框（不可以对其他窗口进行操作）非模态对话框（可以）
        //        QDialog dlg(this);
        //        dlg.resize(200,100);
        //        dlg.exec();
        //        qDebug()<<"模态对话框弹出了";
        //非模态对话框
        //        QDialog *dlg2=new QDialog(this);
        //        dlg2->show();
        //        dlg2->setAttribute(Qt::WA_DeleteOnClose);
        //        qDebug()<<"非模态对话框弹出了";
        //消息对话框
        //        QMessageBox::critical(this,"critical","错误");
        //        QMessageBox::information(this,"info","信息");
        //父类 标题 提示内容 按键类型 默认
        //        if(QMessageBox::Save== QMessageBox::question(this,"ques","提问",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel))
        //        {
        //            qDebug()<<"选择的是保存";
        //        }
        //        else{qDebug()<<"选择的是取消";}
        //        QMessageBox::warning(this,"warning","警告");
        //其他标准对话框
        //颜色对话框
        //       QColor color= QColorDialog::getColor(QColor(255,0,0));
        //       qDebug()<<"r="<<color.red()<<"g="<<color.green()<<"b="<<color.blue();
        //文件对话框
        //父类 标题 默认打开路径 过滤文件格式
        //返回值是路径
        //       QString str= QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\tanghw\\Desktop","(*.png)");
        //       qDebug()<<str;
        //字体对话框
        bool flag;
        QFont font=QFontDialog::getFont(&flag,QFont("华文彩云",36));
        qDebug()<<"字体："<<font.family().toUtf8().data()<<"字号"<<font.pointSize()<<"是否加粗："<<font.bold()<<"是否倾斜"<<font.italic();

    });
}

lab4::~lab4()
{
    delete ui;
}

