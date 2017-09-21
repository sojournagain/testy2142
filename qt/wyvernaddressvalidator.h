#ifndef testcoin2142ADDRESSVALIDATOR_H
#define testcoin2142ADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class testcoin2142AddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit testcoin2142AddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // testcoin2142ADDRESSVALIDATOR_H
