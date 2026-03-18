#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    // Int turidagi to'plam (set) yaratish
    set<int> raqamlar;

    // Element qo'shish
    raqamlar.insert(10);
    raqamlar.insert(50);
    raqamlar.insert(20);
    raqamlar.insert(10); // Bu qo'shilmaydi, chunki 10 allaqachon bor

    cout << "To'plam ichidagi raqamlar (tartiblangan holda):" << endl;
    for (int x : raqamlar) {
        cout << x << " ";
    }
    // Natija: 10 20 50 bo'ladi

    return 0;
}
