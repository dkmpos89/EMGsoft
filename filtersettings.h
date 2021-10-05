#ifndef FILTERSETTINGS_H
#define FILTERSETTINGS_H

#include <QDialog>

namespace Ui {
class filterSettings;
}

class filterSettings : public QDialog
{
    Q_OBJECT

public:
    explicit filterSettings(QWidget *parent = 0);
    QStringList getParametrosFiltros(int t);
    ~filterSettings();

private:
    Ui::filterSettings *ui;
};

#endif // FILTERSETTINGS_H
