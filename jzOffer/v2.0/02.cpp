//
// Created by Bourne on 2018/3/13.
//

// c++11下的单例模式

class Singleton {
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
public:
    static Singleton& instance() {
        static Singleton s;
        return s;
    }
};