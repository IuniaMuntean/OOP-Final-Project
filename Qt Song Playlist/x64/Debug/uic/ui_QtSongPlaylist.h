/********************************************************************************
** Form generated from reading UI file 'QtSongPlaylist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSONGPLAYLIST_H
#define UI_QTSONGPLAYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSongPlaylistClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QListWidget *listWidget;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QLabel *artistLabel;
    QLineEdit *artistLineEdit;
    QLabel *yearLabel;
    QLineEdit *yearLineEdit;
    QLabel *linkLabel;
    QLineEdit *linkLineEdit;
    QLabel *lirycsLabel;
    QTextEdit *LyricsEdit;
    QGridLayout *gridLayout_2;
    QPushButton *LyricsButton;
    QPushButton *addButton;
    QPushButton *sortByArtistsButton;
    QPushButton *SortbyTitleButton;
    QPushButton *deleteButton;
    QPushButton *Button_Next_in_Playlist;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QListWidget *playlist;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *RandomiseButton;
    QPushButton *PlaylistDeleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *playButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtSongPlaylistClass)
    {
        if (QtSongPlaylistClass->objectName().isEmpty())
            QtSongPlaylistClass->setObjectName(QString::fromUtf8("QtSongPlaylistClass"));
        QtSongPlaylistClass->resize(960, 897);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtSongPlaylistClass->sizePolicy().hasHeightForWidth());
        QtSongPlaylistClass->setSizePolicy(sizePolicy);
        QtSongPlaylistClass->setMinimumSize(QSize(19, 0));
        centralWidget = new QWidget(QtSongPlaylistClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 40, 931, 791));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(16, 0));

        verticalLayout_4->addWidget(listWidget);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        titleLabel = new QLabel(verticalLayoutWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        titleLineEdit = new QLineEdit(verticalLayoutWidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, titleLineEdit);

        artistLabel = new QLabel(verticalLayoutWidget);
        artistLabel->setObjectName(QString::fromUtf8("artistLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, artistLabel);

        artistLineEdit = new QLineEdit(verticalLayoutWidget);
        artistLineEdit->setObjectName(QString::fromUtf8("artistLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, artistLineEdit);

        yearLabel = new QLabel(verticalLayoutWidget);
        yearLabel->setObjectName(QString::fromUtf8("yearLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, yearLabel);

        yearLineEdit = new QLineEdit(verticalLayoutWidget);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, yearLineEdit);

        linkLabel = new QLabel(verticalLayoutWidget);
        linkLabel->setObjectName(QString::fromUtf8("linkLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, linkLabel);

        linkLineEdit = new QLineEdit(verticalLayoutWidget);
        linkLineEdit->setObjectName(QString::fromUtf8("linkLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, linkLineEdit);

        lirycsLabel = new QLabel(verticalLayoutWidget);
        lirycsLabel->setObjectName(QString::fromUtf8("lirycsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lirycsLabel);

        LyricsEdit = new QTextEdit(verticalLayoutWidget);
        LyricsEdit->setObjectName(QString::fromUtf8("LyricsEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, LyricsEdit);


        verticalLayout_4->addLayout(formLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        LyricsButton = new QPushButton(verticalLayoutWidget);
        LyricsButton->setObjectName(QString::fromUtf8("LyricsButton"));

        gridLayout_2->addWidget(LyricsButton, 0, 2, 1, 1);

        addButton = new QPushButton(verticalLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_2->addWidget(addButton, 0, 0, 1, 1);

        sortByArtistsButton = new QPushButton(verticalLayoutWidget);
        sortByArtistsButton->setObjectName(QString::fromUtf8("sortByArtistsButton"));

        gridLayout_2->addWidget(sortByArtistsButton, 1, 2, 1, 1);

        SortbyTitleButton = new QPushButton(verticalLayoutWidget);
        SortbyTitleButton->setObjectName(QString::fromUtf8("SortbyTitleButton"));

        gridLayout_2->addWidget(SortbyTitleButton, 1, 0, 1, 2);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_2->addWidget(deleteButton, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        Button_Next_in_Playlist = new QPushButton(verticalLayoutWidget);
        Button_Next_in_Playlist->setObjectName(QString::fromUtf8("Button_Next_in_Playlist"));

        horizontalLayout_5->addWidget(Button_Next_in_Playlist);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_6->addWidget(label_2);

        playlist = new QListWidget(verticalLayoutWidget);
        playlist->setObjectName(QString::fromUtf8("playlist"));

        verticalLayout_6->addWidget(playlist);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        RandomiseButton = new QPushButton(verticalLayoutWidget);
        RandomiseButton->setObjectName(QString::fromUtf8("RandomiseButton"));

        horizontalLayout_4->addWidget(RandomiseButton);

        PlaylistDeleteButton = new QPushButton(verticalLayoutWidget);
        PlaylistDeleteButton->setObjectName(QString::fromUtf8("PlaylistDeleteButton"));

        horizontalLayout_4->addWidget(PlaylistDeleteButton);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        playButton = new QPushButton(verticalLayoutWidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        verticalLayout->addWidget(playButton);

        QtSongPlaylistClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtSongPlaylistClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 26));
        QtSongPlaylistClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtSongPlaylistClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtSongPlaylistClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtSongPlaylistClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtSongPlaylistClass->setStatusBar(statusBar);

        retranslateUi(QtSongPlaylistClass);

        QMetaObject::connectSlotsByName(QtSongPlaylistClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtSongPlaylistClass)
    {
        QtSongPlaylistClass->setWindowTitle(QCoreApplication::translate("QtSongPlaylistClass", "QtSongPlaylist", nullptr));
        label->setText(QCoreApplication::translate("QtSongPlaylistClass", "All Songs", nullptr));
        titleLabel->setText(QCoreApplication::translate("QtSongPlaylistClass", "Title:", nullptr));
        artistLabel->setText(QCoreApplication::translate("QtSongPlaylistClass", "Artist: ", nullptr));
        yearLabel->setText(QCoreApplication::translate("QtSongPlaylistClass", "Year", nullptr));
        linkLabel->setText(QCoreApplication::translate("QtSongPlaylistClass", "Link:", nullptr));
        lirycsLabel->setText(QCoreApplication::translate("QtSongPlaylistClass", "Lyrics:", nullptr));
        LyricsButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "View Lyrics", nullptr));
        addButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Add", nullptr));
        sortByArtistsButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Sort Songs by Artists", nullptr));
        SortbyTitleButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Sort Songs by Title", nullptr));
        deleteButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Delete", nullptr));
        Button_Next_in_Playlist->setText(QCoreApplication::translate("QtSongPlaylistClass", ">", nullptr));
        label_2->setText(QCoreApplication::translate("QtSongPlaylistClass", "Playlist", nullptr));
        RandomiseButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Randomise", nullptr));
        PlaylistDeleteButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Delete", nullptr));
        playButton->setText(QCoreApplication::translate("QtSongPlaylistClass", "Start Playlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtSongPlaylistClass: public Ui_QtSongPlaylistClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSONGPLAYLIST_H
