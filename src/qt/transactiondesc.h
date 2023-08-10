// Copyright (c) 2011-2022 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINPURPLE_QT_TRANSACTIONDESC_H
#define BITCOINPURPLE_QT_TRANSACTIONDESC_H

#include <qt/bitcoinpurpleunits.h>

#include <QObject>
#include <QString>

class TransactionRecord;

namespace interfaces {
class Node;
class Wallet;
struct WalletTx;
struct WalletTxStatus;
}

/** Provide a human-readable extended HTML description of a transaction.
 */
class TransactionDesc: public QObject
{
    Q_OBJECT

public:
    static QString toHTML(interfaces::Node& node, interfaces::Wallet& wallet, TransactionRecord* rec, BitcoinPurpleUnit unit);

private:
    TransactionDesc() {}

    static QString FormatTxStatus(const interfaces::WalletTxStatus& status, bool inMempool);
};

#endif // BITCOINPURPLE_QT_TRANSACTIONDESC_H
