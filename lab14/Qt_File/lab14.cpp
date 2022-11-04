#include "lab14.h"
#include "ui_lab14.h"
#include<QFileDialog>
#include<QFileInfo>
#include<QDebug>
#include<QDateTime>

lab14::lab14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab14)
{
    ui->setupUi(this);
    //点击选取按钮，弹出文件对话框
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString path= QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\tanghw\\Documents\\qt\\lab14\\Qt_File");
        //将路径放在lineedit中
        ui->lineEdit->setText(path);
        //读取内容到textedit 中
        QFile file(path);
        //设置打开方式
        file.open(QIODevice::ReadOnly);
        //      QByteArray array=file.readAll();
        //逐行读取
        QByteArray array;
        while(!file.atEnd()){
            array+=file.readLine();
        }
        ui->textEdit_2->setText(array);

        //对文件对象进行关闭
        file.close();

        //进行写文件操作
        //        file.open(QIODevice::Append);//追加方式写入
        //        file.write("2022.10.31");
        //        file.close();

        //QFileinfo 读取文件信息
        QFileInfo info(path);
        qDebug()<<"大小："<<info.size()<<"后缀名："<<info.suffix()<<"文件名称："<<info.fileName()<<"文件路径"<<info.filePath();
        qDebug()<<"创建日期："<<info.created().toString("yyyy/MM/dd hh:mm:ss");
        //可指定格式
         qDebug()<<"修改日期："<<info.lastModified().toString("yyyy/MM/dd hh:mm:ss");
    });

}

lab14::~lab14()
{
    delete ui;
}

