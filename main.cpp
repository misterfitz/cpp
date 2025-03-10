#include <iostream>
#include "chapters.h"

int main() {
    char selection;
    std::cout << "Please Input a number: ";
    std::cin >> selection;

    // technically this part is skipping ahead to chapter 3
    while (selection) {
        switch (selection) {
            case '1':
                chapter_01();
                break;
            case '2':
                chapter_02();
                break;
            case '3':
                chapter_03();
            break;
            case 'x':
                return 0;
            default:
                break;

        }

        std::cout << "Please Input a number: ";
        std::cin >> selection;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.