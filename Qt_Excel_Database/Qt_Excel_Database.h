#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_Excel_Database.h"

class Qt_Excel_Database : public QMainWindow
{
    Q_OBJECT

public:
    Qt_Excel_Database(QWidget *parent = Q_NULLPTR);

private:
    Ui::Qt_Excel_DatabaseClass ui;
};
