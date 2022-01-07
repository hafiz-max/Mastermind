#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <random>
#include <array>
#include <string>
#include "mastermind.h"

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void easy()
{
    std::system("clear");

    int arr[4];
    int arr_user[4];
    std::vector<std::string> flag;

    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {

        arr[i] = rand() % 5;
    }
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;
    std::cout << arr[3] << std::endl;

    int state = 3;
    while (state != 5)
    {
        if (state == 0)
        {
            kalah();
        }
        for (int i = 0; i < 4; i++)
        {
            std::cout << "enter number" << std::endl;
            std::cin >> arr_user[i];
        }

        for (int i = 0; i < 4; i++)
        {
            if ((arr[i] == arr_user[i]))
            {
                flag.insert(flag.begin() + i, "true");
            }
            else
            {
                flag.insert(flag.begin() + i, "false");

                for (int x = 0; x < 4; x++)
                    if (arr[x] == arr_user[i])
                    {
                        flag.insert(flag.begin() + i, "pos");
                    }
            }
            std::cout << flag[i] << std::endl;
        }

        //end_result();
        if (flag[0] == "true" && flag[1] == "true" && flag[2] == "true" && flag[3] == "true")
        {
            success();
        }
        else
        {
            state--;

            std::cout << "=============================================" << std::endl;
            std::cout << "wrong---you have " << state << " more attempts" << std::endl;
            std::cout << "=============================================" << std::endl;
        }
    }
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void medium()
{
    std::system("clear");
    int arr[5];
    int arr_user[5];
    int p = 5;
    std::vector<std::string> flag;

    srand(time(NULL));

    for (int i = 0; i < p; i++)
    {

        arr[i] = rand() % 6;
    }
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;
    std::cout << arr[3] << std::endl;
    std::cout << arr[4] << std::endl;

    int state = 3;
    while (state != 5)
    {
        if (state == 0)
        {
            kalah();
        }
        for (int i = 0; i < p; i++)
        {
            std::cout << "enter number" << std::endl;
            std::cin >> arr_user[i];
        }

        for (int i = 0; i < p; i++)
        {
            if ((arr[i] == arr_user[i]))
            {
                flag.insert(flag.begin() + i, "true");
            }
            else
            {
                flag.insert(flag.begin() + i, "false");

                for (int x = 0; x < p; x++)
                    if (arr[x] == arr_user[i])
                    {
                        flag.insert(flag.begin() + i, "pos");
                    }
            }
            std::cout << flag[i] << std::endl;
        }

        //end_result();
        if (flag[0] == "true" && flag[1] == "true" && flag[2] == "true" && flag[3] == "true" && flag[4] == "true")
        {
            success();
        }
        else
        {
            state--;
            std::cout << "=============================================" << std::endl;
            std::cout << "wrong---you have " << state << " more attempts" << std::endl;
            std::cout << "=============================================" << std::endl;
        }
    }
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
void hard()
{
    std::system("clear");
    int arr[6];
    int arr_user[6];
    int p = 6;
    std::vector<std::string> flag;

    srand(time(NULL));

    for (int i = 0; i < p; i++)
    {

        arr[i] = rand() % 7;
    }
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;
    std::cout << arr[3] << std::endl;
    std::cout << arr[4] << std::endl;
    std::cout << arr[5] << std::endl;

    int state = 3;
    while (state != 5)
    {
        if (state == 0)
        {
            kalah();
        }
        for (int i = 0; i < p; i++)
        {
            std::cout << "enter number" << std::endl;
            std::cin >> arr_user[i];
        }

        for (int i = 0; i < p; i++)
        {
            if ((arr[i] == arr_user[i]))
            {
                flag.insert(flag.begin() + i, "true");
            }
            else
            {
                flag.insert(flag.begin() + i, "false");

                for (int x = 0; x < p; x++)
                    if (arr[x] == arr_user[i])
                    {
                        flag.insert(flag.begin() + i, "pos");
                    }
            }
            std::cout << flag[i] << std::endl;
        }

        //end_result();
        if (flag[0] == "true" && flag[1] == "true" && flag[2] == "true" && flag[3] == "true" && flag[4] == "true" && flag[5] == "true")
        {
            success();
        }
        else
        {
        state--;
        std::cout << "=============================================" << std::endl;
        std::cout << "wrong---you have " << state << " more attempts" << std::endl;
        std::cout << "=============================================" << std::endl;
        }
        
    }
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void interface()
{
    std::system("clear");
    std::cout << R"(

███╗   ███╗ █████╗ ███████╗████████╗███████╗██████╗ ███╗   ███╗██╗███╗   ██╗██████╗ 
████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗████╗ ████║██║████╗  ██║██╔══██╗
██╔████╔██║███████║███████╗   ██║   █████╗  ██████╔╝██╔████╔██║██║██╔██╗ ██║██║  ██║
██║╚██╔╝██║██╔══██║╚════██║   ██║   ██╔══╝  ██╔══██╗██║╚██╔╝██║██║██║╚██╗██║██║  ██║
██║ ╚═╝ ██║██║  ██║███████║   ██║   ███████╗██║  ██║██║ ╚═╝ ██║██║██║ ╚████║██████╔╝
╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═════╝ 
                                                                                    
                                                                                                                                                                                                          
)";
}

void success()
{
    char i;
    std::system("clear");
    std ::cout << R"(
███████╗██╗   ██╗ ██████╗ ██████╗███████╗███████╗███████╗██╗██╗██╗
██╔════╝██║   ██║██╔════╝██╔════╝██╔════╝██╔════╝██╔════╝██║██║██║
███████╗██║   ██║██║     ██║     █████╗  ███████╗███████╗██║██║██║
╚════██║██║   ██║██║     ██║     ██╔══╝  ╚════██║╚════██║╚═╝╚═╝╚═╝
███████║╚██████╔╝╚██████╗╚██████╗███████╗███████║███████║██╗██╗██╗
╚══════╝ ╚═════╝  ╚═════╝ ╚═════╝╚══════╝╚══════╝╚══════╝╚═╝╚═╝╚═╝
                                                                  
)" << std::endl;
    std::cout << "keep playing??--y/n" << std::endl;
    std::cin >> i;
    if (i == 'y')
    {
        start();
    }
    else
        exit(EXIT_FAILURE);
}

void kalah()
{
    char i;
    std::system("clear");
    std ::cout << R"(

██    ██  ██████  ██    ██      ██████  ██    ██ ████████ ██ ██ 
 ██  ██  ██    ██ ██    ██     ██    ██ ██    ██    ██    ██ ██ 
  ████   ██    ██ ██    ██     ██    ██ ██    ██    ██    ██ ██ 
   ██    ██    ██ ██    ██     ██    ██ ██    ██    ██          
   ██     ██████   ██████       ██████   ██████     ██    ██ ██ 
                                                                
                                                                

                                                                  
)" << std::endl;
    std::cout << "keep playing??--y/n" << std::endl;
    std::cin >> i;
    if (i == 'y')
    {
        start();
    }
    else
        exit(EXIT_FAILURE);
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void start()
{
    int x;
    int y;
    while (1)
    {

        if (x == 3)
        {
            break;
        }

        interface();

        std::cout << "###################################" << std::endl;
        std::cout << "press 1 to start" << std::endl;
        std::cout << "press 2 to select Difficulties" << std::endl;
        std::cout << "press 3 to quit" << std::endl;
        std::cout << "###################################" << std::endl;
        std ::cin >> x;

        if (x == 1)
        {
            easy();
        }

        else if (x == 2)
        {
            std::cout << "###################################" << std::endl;
            std::cout << "medium--press 2" << std::endl;
            std::cout << "hard--press 3" << std::endl;
            std::cout << "###################################" << std::endl;
            std::cin >> y;

            if (y == 2)
            {
                medium();
            }
            else
                hard();
        }
    }
}