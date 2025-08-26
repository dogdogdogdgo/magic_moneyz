#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTableWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Magic Monnyz");

    QVBoxLayout *layout = new QVBoxLayout(&window);

    QLabel *balanceLabel = new QLabel("Saldo: 2000 MZ");
    QPushButton *tradeButton = new QPushButton("Köp/Sälj");

    QTableWidget *tableWidget = new QTableWidget(12, 3, &window);
    
    tableWidget->setHorizontalHeaderLabels({"Asset", "Price", "Amount"});
    tableWidget->setItem(0, 0, new QTableWidgetItem("Gold"));
    tableWidget->setItem(0, 1, new QTableWidgetItem("1000"));
    tableWidget->setItem(0, 2, new QTableWidgetItem("1"));

    tableWidget->setItem(1, 0, new QTableWidgetItem("Silver"));
    tableWidget->setItem(1, 1, new QTableWidgetItem("25"));
    tableWidget->setItem(1, 2, new QTableWidgetItem("10"));



    layout->addWidget(balanceLabel);
    layout->addWidget(tradeButton);

    QObject::connect(tradeButton, &QPushButton::clicked, [&](){
        balanceLabel->setText("Saldo: 900 MZ"); // Simulerad transaktion
    });

    window.show();
    return app.exec();
}