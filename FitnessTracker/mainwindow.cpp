#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Addworkaut->hide();
    ui->AddNote->setVisible(0);
    ui->LineWorkout->setVisible(0);
    ui->dateTimeEdit->setVisible(0);
    ui->label->setVisible(0);
    ui->label_2->setVisible(0);
    ui->label_3->setVisible(0);
    ui->label_4->setVisible(0);
    ui->linWeight->setVisible(0);
    ui->lineApproach->setVisible(0);
    ui->pushButton->setVisible(0);
    ui->textEdit->setVisible(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddNote_clicked()
{
    ui->LineWorkout->setVisible(1);
    ui->dateTimeEdit->setVisible(1);
    ui->label->setVisible(1);
    ui->label_2->setVisible(1);
    ui->label_3->setVisible(1);
    ui->label_4->setVisible(1);
    ui->linWeight->setVisible(1);
    ui->lineApproach->setVisible(1);
    ui->pushButton->setVisible(1);
    ui->textEdit->setVisible(1);
}


void MainWindow::on_pushButton_clicked()
{
    ui->AddNote->setVisible(1);
    ui->LineWorkout->setVisible(0);
    ui->dateTimeEdit->setVisible(0);
    ui->label->setVisible(0);
    ui->label_2->setVisible(0);
    ui->label_3->setVisible(0);
    ui->label_4->setVisible(0);
    ui->linWeight->setVisible(0);
    ui->lineApproach->setVisible(0);
    ui->pushButton->setVisible(0);
    ui->textEdit->setVisible(0);
}


void MainWindow::on_journal_clicked()
{
    ui->Addworkaut->show();
    ui->AddNote->setVisible(1);
    ui->LineWorkout->setVisible(0);
    ui->dateTimeEdit->setVisible(0);
    ui->label->setVisible(0);
    ui->label_2->setVisible(0);
    ui->label_3->setVisible(0);
    ui->label_4->setVisible(0);
    ui->linWeight->setVisible(0);
    ui->lineApproach->setVisible(0);
    ui->pushButton->setVisible(0);
    ui->textEdit->setVisible(0);
}

