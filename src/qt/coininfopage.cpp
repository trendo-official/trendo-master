// Copyright (c) 2018 The GALI developers
// Copyright (c) 2019 The Developer blockchain - @devblockcoin
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
//developer, telegram @devblockcoin

#include "coininfopage.h"
#include "ui_coininfopage.h"

#include "clientmodel.h"
#include "utilmoneystr.h"
#include "walletmodel.h"
#include "askpassphrasedialog.h"

#include <QMessageBox>
#include <QString>
#include <QTimer>
#include <QToolButton>

CoininfoPage::CoininfoPage(QWidget* parent) : QWidget(parent),
                                                  ui(new Ui::CoininfoPage),
                                                  clientModel(0),
                                                  walletModel(0)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    timer->start(100000);
    fLockUpdating = false;
}


CoininfoPage::~CoininfoPage()
{
    delete ui;
}

void CoininfoPage::setClientModel(ClientModel* model)
{
    this->clientModel = model;
}

void CoininfoPage::setWalletModel(WalletModel* model)
{
    this->walletModel = model;
}



