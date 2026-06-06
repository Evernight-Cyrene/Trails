#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton button("点击我");
    button.resize(200, 100);
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QMessageBox::information(nullptr, "提示", "按钮被点击了！");
    });
    button.show();
    return app.exec();
}