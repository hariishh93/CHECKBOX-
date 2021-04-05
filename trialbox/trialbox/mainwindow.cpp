#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(oncheckBox1_clicked()));
    connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(oncheckBox2_clicked()));
    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(onradioButton1_clicked()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(onradioButton2_clicked()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(onradioButton3_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
       if(ui->checkBox->isChecked())
       {
           stream<<"Bold Is Checked"<<endl;
           ui->label->setStyleSheet("color: red; font: bold 15pt");
       }
       else
       {
           stream<<"Bold Is Unchecked"<<endl;
           ui->label->setStyleSheet("QLabel");
       }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
      if(ui->checkBox_2->isChecked())
      {
          stream<<"Italics Is Checked"<<endl;
          ui->label->setStyleSheet("color: green; font: italic 15pt");
      }
      else
      {
          stream<<"Italics Is Unchecked"<<endl;
           ui->label->setStyleSheet("QLabel");
      }
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream stream(stdout);
       if(ui->radioButton->isChecked())
       {
           stream<<"Left Is Checked"<<endl;
            ui->label->setStyleSheet("color: orange;font: 15pt");
       }
}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton_2->isChecked())
        {
            stream<<"Right Is Checked"<<endl;
             ui->label->setStyleSheet("color: pink;font: 15pt");
        }
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton_3->isChecked())
        {
            stream<<"Center Is Checked"<<endl;
             ui->label->setStyleSheet(" color: maroon;font: 15pt");
        }
}
