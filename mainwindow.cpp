#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_slidered_valueChanged(int value)
{
    Q_UNUSED(value);
    QPalette pal = ui->editcolor->palette();
    QColor color ;
    color.setRgb(ui->slidered->value(),ui->slidergreen->value(),ui->sliderblue->value(),ui->slideralpha->value());
    pal.setColor(QPalette::Base,color);
    ui->editcolor->setPalette(pal);

}

void MainWindow::on_slidergreen_valueChanged(int value)
{
    on_slidered_valueChanged( value);
}

void MainWindow::on_sliderblue_valueChanged(int value)
{
      on_slidered_valueChanged( value);
}

void MainWindow::on_slideralpha_valueChanged(int value)
{
      on_slidered_valueChanged( value);
}

void MainWindow::on_sliderhorzi_valueChanged(int value)
{
    ui->progressbarhorzi->setValue(value);
    ui->scrollBarhorzi->setValue(value);
}

void MainWindow::on_scrollBarhorzi_valueChanged(int value)
{
    ui->progressbarhorzi->setValue(value);
    ui->sliderhorzi->setValue(value);
}



void MainWindow::on_dial_valueChanged(int value)
{
   ui->LCD->display(value);
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    ui->verticalScrollBar->setValue(value);
    ui->progressBar->setValue(value);
}

void MainWindow::on_verticalScrollBar_valueChanged(int value)
{
    ui->verticalSlider->setValue(value);
    ui->progressBar->setValue(value);
}

void MainWindow::on_btnten_clicked()
{
    ui->LCD->setDigitCount(3);
    ui->LCD->setDecMode();
}

void MainWindow::on_btntwo_clicked()
{
    ui->LCD->setDigitCount(8);
    ui->LCD->setBinMode();
}

void MainWindow::on_bensix_clicked()
{
    ui->LCD->setDigitCount(3);
    ui->LCD->setHexMode();
}
