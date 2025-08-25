#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Magic Monnyz");

    QVBoxLayout *layout = new QVBoxLayout(&window);

    QLabel *balanceLabel = new QLabel("Saldo: 1000 MZ");
    QPushButton *tradeButton = new QPushButton("Köp/Sälj");

    layout->addWidget(balanceLabel);
    layout->addWidget(tradeButton);

    QObject::connect(tradeButton, &QPushButton::clicked, [&](){
        balanceLabel->setText("Saldo: 900 MZ"); // Simulerad transaktion
    });

    window.show();
    return app.exec();
}