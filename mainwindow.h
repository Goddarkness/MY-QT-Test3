#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_slidered_valueChanged(int value);

    void on_slidergreen_valueChanged(int value);

    void on_sliderblue_valueChanged(int value);

    void on_slideralpha_valueChanged(int value);

    void on_sliderhorzi_valueChanged(int value);

    void on_scrollBarhorzi_valueChanged(int value);

    void on_progressbarhorzi_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_verticalSlider_valueChanged(int value);

    void on_verticalScrollBar_valueChanged(int value);

    void on_btnten_clicked();

    void on_btntwo_clicked();

    void on_bensix_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
