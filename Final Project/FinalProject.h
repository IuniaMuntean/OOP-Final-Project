#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FinalProject.h"

class FinalProject : public QMainWindow
{
    Q_OBJECT

public:
    FinalProject(QWidget *parent = nullptr);
    ~FinalProject();

private:
    Ui::FinalProjectClass ui;
};
