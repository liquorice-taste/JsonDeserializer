#ifndef HTTP_H
#define HTTP_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

#include <qjson/parser.h>
#include <QtTest/QtTest>

#include <qjson/serializer.h>
class http : public QObject
{
    Q_OBJECT
private:
    QNetworkAccessManager * manager;
public:
    explicit http(QObject *parent = nullptr);

signals:
    void onReady();
public slots:
    void onResult(QNetworkReply *reply);
    void getData();
};

#endif // HTTP_H
