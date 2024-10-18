#include <iostream>
using namespace std;
class Message {
public:
    void sendMessage(string msg) {
        cout << "Message: " << msg << endl;
    }
};
class User {
public:
    void communicate(Message& message, string msg) {
        message.sendMessage(msg);
    }
};
int main() {
    Message message;
    User user;
    user.communicate(message, "Hello, World!");
    return 0;
}
