#ifndef SEARCHOBJECT_H
#define SEARCHOBJECT_H

#include <QObject>

class Searchobject : public QObject
{
    Q_OBJECT
public:
    explicit Searchobject(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SEARCHOBJECT_H