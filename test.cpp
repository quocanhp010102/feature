/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

// Hàm này tìm và trả về các chữ cái Tiếng Việt từ chuỗi đầu vào
vector<string> findVietnameseLetters(const string& input_str) {
    // Tạo một unordered_map với các cặp ký tự Tiếng Việt và Latin tương ứng
    unordered_map<string, string> vietnamese_letters = {
        {"aw", "ă"}, {"aa", "â"}, {"dd", "đ"}, {"ee", "ê"}, {"oo", "ô"}, {"ow", "ơ"}, {"w", "ư"}
    };

    // Khởi tạo một vector để lưu trữ các chữ cái Tiếng Việt đã tìm thấy
    vector<string> vietnamese_found;

    // Duyệt qua từng cặp ký tự Tiếng Việt trong unordered_map và kiểm tra xem chúng có tồn tại trong chuỗi đầu vào không
    for (const auto& pair : vietnamese_letters) {
        size_t found = input_str.find(pair.first);
        if (found != string::npos) {
            vietnamese_found.push_back(pair.second);
        }
    }

    // Trả về vector chứa các chữ cái Tiếng Việt đã tìm thấy
    return vietnamese_found;
}


int main() {
    string input_str = "";
    cout << "nhap tu khoa : ";
    cin>> input_str ;
    vector<string> vietnamese_letters = findVietnameseLetters(input_str);

    cout << "Output: " << vietnamese_letters.size() << " (";
    for (size_t i = 0; i < vietnamese_letters.size(); ++i) {
        cout << vietnamese_letters[i];
        if (i < vietnamese_letters.size() - 1) {
            cout << ", ";
        }
    }
    cout << ")" << endl;

    return 0;
}
