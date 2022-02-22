#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void SaveFile(string Nombre, char GameMap[10][10], int HeroPosX, int HeroPosY)
{
    ofstream FileMap("Mapa.txt");
    if(FileMap.is_open())
    {
        FileMap << Nombre << endl;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
               FileMap << GameMap[i][j];
            }
            FileMap << endl;
        }
    }

    FileMap.close();
}
void drawMap(int HeroPosX,int HeroPosY,char GameMap[10][10]){
 GameMap[HeroPosX][HeroPosY] = ' ';
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(HeroPosX==i && HeroPosY==j)
        {
            cout<<"R";
        }
      else
      {
            cout<<GameMap[i][j];
      }
    }
    cout<<endl;
  }
}
int PosicionRobot(char eje, char GameMap[10][10])
{
    int posicion=1;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(GameMap[i][j] == 'R' && eje == 'x')
            {
                posicion = i;
            }
            else
            if(GameMap[i][j] == 'R' && eje == 'y')
            {
                posicion = j;
            }
        }
    }
    return posicion;
}

string OpenFile(char GameMap[10][10])
{
    ifstream FileMap("Mapa.txt");
    string line;
    string name="No encontre nombre";
    int renglon = 0;
    int row = 0;

    if(FileMap.is_open())
    {
        while(getline(FileMap, line))
        {
            if(renglon == 0)
                name = line;
            else
            {
                for(int i = 0; i < 10; i++)
                {
                        GameMap[row][i] = line[i];
                }
                row++;
            }
            renglon++;
        }

        FileMap.close();
    }
    else
    {
        cout << "Error. No se pudo abrir el archivo." << endl;
    }
    return name;
}

int main()
{

    bool isGameOver = false;
    char Input = ' ';
    char GameMap[10][10];
    int HeroPosX=PosicionRobot('x', GameMap);
    int HeroPosY=PosicionRobot('y', GameMap);
    string NamePlayer = "";
    NamePlayer = OpenFile(GameMap);
    cout << "Bienvenido/a " << NamePlayer << endl;
    drawMap(HeroPosX, HeroPosY, GameMap);

    while(isGameOver == false)
    {
        cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
        cout << "Controles Teclas --> p(Salida)" << endl;
        cin >> Input;

        switch (Input)
        {
            case 'd':
                if(HeroPosY < 8)
                    HeroPosY++;
                break;
            case 'a':
                if(HeroPosY > 1)
                    HeroPosY--;
                break;
            case 'w':
                if(HeroPosX > 1)
                    HeroPosX--;
                break;
            case 's':
                if(HeroPosX < 8)
                    HeroPosX++;
                break;
            case 'p':
                isGameOver = true;
                break;
            default:
                cout << "Tecla Invalida" << endl;
                break;
        }
        drawMap(HeroPosX, HeroPosY, GameMap);
    }
    SaveFile(NamePlayer, GameMap, HeroPosX, HeroPosY);

    return 0;
}
