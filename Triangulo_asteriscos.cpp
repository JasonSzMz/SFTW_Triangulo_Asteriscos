#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("cls");
    system("Color 02");
    int numData;
    string astv, res;

    printf("Ingresa el numero final de astersicos y columnas que tendra  tu triangulo: ");

    cin >> numData;
    printf("\n");
    for (int v = 1; v <= numData; v++)
    {
        astv = "*";

        res += astv;
        printf("%s\n", res.c_str());
    }
}
