#include <iostream>

bool checking_input(int ch, int size) {
    if (ch < 0 || ch > size) {
        return false;
    }
    return true;
}

int main() {
    float frequency_set[10] = {107.5, 100.1, 95.8, 77.5, 88.2, 101.1, 103.2, 102.2, 105.5, 98.1};
    size_t size = sizeof(frequency_set) / sizeof(float);
    int channel = 0;
    std::cout << "Input the radio channel: ";
    std::cin >> channel;
    while (!checking_input(channel, size)) {
        std::cout << "Wrong input. Try again in range [0 - " << size << "], 0 - switch off: ";
        std::cin >> channel;
    }

    while (channel != 0) {
        std::cout << "You chose channel " << channel << ". Frequency: " << frequency_set[channel - 1] << std::endl;
        std::cout << "Input the radio channel: ";
        std::cin >> channel;
        while (!checking_input(channel, size)) {
            std::cout << "Wrong input. Try again in range [0 - " << size << "], 0 - switch off: ";
            std::cin >> channel;
        }
    }

    std::cout << "The radio was off.";
    return 0;
}
