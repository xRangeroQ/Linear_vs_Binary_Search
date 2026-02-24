// Include Libraries
#include <chrono>
#include <vector>
#include <string>
#include <iostream>
#include <windows.h>

// Main Function
int main()
{
    // Set Console Output UTF-8
    SetConsoleOutputCP(65001);

    // Linear Search
    auto Linear_Start_Time = std::chrono::high_resolution_clock::now();
    const int Linear_Aim = 935971927;
    int Linear_Process_Count = 0;
    int Linear_Position = 0;
    
    // Linear Loop
    while (Linear_Position != Linear_Aim)
    {
        Linear_Position++;
        Linear_Process_Count++;
    }
    
    auto Linear_End_Time = std::chrono::high_resolution_clock::now();
    std::cout << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "\033[94mLinear Search Process Count: \033[0m" << Linear_Process_Count << std::endl;
    std::cout << "\033[94mLinear Search Duration: \033[0m" << std::chrono::duration_cast<std::chrono::milliseconds>(Linear_End_Time - Linear_Start_Time).count() << "ms" << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;

    // Binary Search
    auto Binary_Start_Time = std::chrono::high_resolution_clock::now();
    const int Binary_Minimum = 0;
    const int Binary_Aim = 935971927;
    const int Binary_Maximum = 1000000000;
    int Binary_Process_Count = 0;
    int Binary_Position = 0;
    int Binary_Left_Position = Binary_Minimum;
    int Binary_Right_Position = Binary_Maximum;

    // Binary Loop
    while (Binary_Position != Binary_Aim)
    {
        Binary_Position = Binary_Left_Position + (Binary_Right_Position - Binary_Left_Position) / 2;

        if (Binary_Position > Binary_Aim)
            Binary_Right_Position = Binary_Position - 1;

        else if (Binary_Position < Binary_Aim)
            Binary_Left_Position = Binary_Position + 1;

        else
            Binary_Position = Binary_Aim;

        Binary_Process_Count++;
    }

    auto Binary_End_Time = std::chrono::high_resolution_clock::now();
    std::cout << "\033[94mBinary Search Process Count: \033[0m" << Binary_Process_Count << std::endl;
    std::cout << "\033[94mBinary Search Duration: \033[0m" << std::chrono::duration_cast<std::chrono::nanoseconds>(Binary_End_Time - Binary_Start_Time).count() << "ns" << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;

    // Return Function
    return 0;
}
