#ifndef PERSONALDATA_H
#define PERSONALDATA_H

#include <QObject>
#include <QCoreApplication>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QTextStream>

class PersonalData
{
    Q_GADGET
    QString _name;
    QString _local_url;
    int _missed_r_ctr;
    int _missed_l_ctr;
    int _good_r_ctr;
    int _good_l_ctr;
    int _exercise_ctr;
    int _prev_font_size_R;
    int _prev_font_size_L;
    int _prev_peripheral_font_size_R;
    int _prev_peripheral_font_size_L;

public:
    PersonalData();

public slots:
    void readData();
    void writeData();
    void setValuesR(int, int);
    void setValuesL(int, int);
    void setFontValuesR(int, int);
    void setFontValuesL(int, int);
    void setName(QString);
    void setExerciseCtr();
    int getFontSizeR();
    int getFontSizeL();
    int getPerFontSizeR();
    int getPerFontSizeL();
    int getMissedR();
    int getMissedL();
    int getGoodR();
    int getGoodL();
    int getExCtr();
};

#endif // PERSONALDATA_H
