class Singleton {
public:
    static Singleton* getInstance();
protected:
    Singleton() {}
private:
    static Singleton* p;
};

Singleton* Singleton::p = new Singleton;
Singleton* Singleton::getInstance() {
    return p;
}
