
//main.cpp
//created by boyzcomzretro 1.03.23
//header.h
// var 14
#include <iostream>
#include <array>
#include <time.h>

//int main()
//{
//    int y;
//    srand(time(NULL));
//    std::array <std::array <int, 7>, 7> Matrix;
//    for(int i = 0; i <= 6; i++){ 
//        for(int q = 0; q <= 6; q++){ 
//            Matrix[i][q] = rand()%70;
//            if(Matrix[i][q] < 10){ 
//                std::cout << Matrix[i][q] << " " << " ";
//            }

//            if(Matrix[i][q] > 9){
//                std::cout << Matrix[i][q] << " ";
//            }
//        }
//        std::cout << std::endl; 
//    }

//    std::cout << std::endl << std::endl;



//    for(int i = 0; i <= 6; i++){ 
//       y = Matrix[i][1];
//        for(int q = 0; q <= 6; q++){
//             Matrix[i][q] = y * Matrix[i][q];
//            }
//          }

//    for(int i = 0; i <= 6; i++){ 
//        for(int q = 0; q <= 6; q++){
//            if((Matrix[i][q] < 10000) && (Matrix[i][q] > 999)){
//                std::cout << Matrix[i][q] << " ";
//            }

//            if((Matrix[i][q] < 1000) && (Matrix[i][q] > 99)){
//                std::cout << Matrix[i][q] << " " << " ";
//            }

//            if((Matrix[i][q] < 100) && (Matrix[i][q] > 9)){
//                std::cout << Matrix[i][q] << " " << " " << " ";
//            }

//            if(Matrix[i][q] < 10){
//                std::cout << Matrix[i][q] << " " << " " << " " << " ";
//            }
//        }
//          std::cout << std::endl; // Переход на следующую строку.
//        }

//    std::cout << std::endl;
//    return 0;
//}


//{
//    int t = 7, y = 0;
//    srand(time(NULL)); // чтобы каждый раз выводились новые случайные значения.
//    std::array <std::array <int, 8>, 8> Matrix;
//    for(int i = 1; i <= 7; i++){ // цикл создания значений по вертикали матрицы.
//        for(int q = 1; q <= 7; q++){ // цикл создания значений по горизонтали матрицы.
//            Matrix[i][q] = rand()%70 - 15;

//            if( (Matrix[i][q] < 0) && (Matrix[i][q] > -10)){
//                std::cout << "  " << Matrix[i][q];
//            }

//               if( (Matrix[i][q] < -9) && (Matrix[i][q] > -100)){
//                   std::cout << " " << Matrix[i][q];
//               }
//                    if( (Matrix[i][q] > -1) && (Matrix[i][q] < 10)){
//                        std::cout << "   " << Matrix[i][q];
//                    }

//                       if( (Matrix[i][q] > 9) && (Matrix[i][q] < 100)){
//                           std::cout << "  " << Matrix[i][q];
//                       }
//       }
//        std::cout << std::endl; // Переход на другую строку.
//    }

//    std::cout << std::endl << std::endl;

//    for(int i = 1; i <= 7; i++){
//        for(int q = 1; q <= t; q++){
//            if((Matrix[i][q] > 0) && (q % 2 == 0)) {
//               y += Matrix[i][q]; // Суммирование всех элементов, удволетворяющих условию.
//            }
//          }
//         t -= 1; // срез для получения диалогнали
//        }

//    for(int i = 1; i <= 7; i++){ // цикл вывода изменённых значений по вертикали матрицы.
//        for(int q = 1; q <= 7; q++){ // цикл вывода изменённых значений по горизонтали матрицы.

//            if( (Matrix[i][q] < 0) && (Matrix[i][q] > -10)){
//                std::cout << "  " << Matrix[i][q];
//            }

//               if( (Matrix[i][q] < -9) && (Matrix[i][q] > -100)){
//                   std::cout << " " << Matrix[i][q];
//               }
//                    if( (Matrix[i][q] > -1) && (Matrix[i][q] < 10)){
//                        std::cout << "   " << Matrix[i][q];
//                    }

//                       if( (Matrix[i][q] > 9) && (Matrix[i][q] < 100)){
//                           std::cout << "  " << Matrix[i][q];
//                       }
//        }
//        std::cout << std::endl; // Переход на другую строку.
//    }

//    std::cout << std::endl << "Resultat: " << y << std::endl; // вывод результата
//    return 0;
//}


//int main()
//{
//    int max = 0;
//    srand(time(NULL)); 
//    std::array <std::array <int, 8>, 8> Matrix;
//    for(int i = 0; i <= 1; i++){ 
//        for(int q = 0; q <= 6; q++){ 
//            if( i == 0 ){
//                Matrix[i][q] = rand()%70 + 1;
//               }
//               if( i == 1 ){
//                Matrix[i][q] = rand() % 3 + 1;
//               }
//                           if(Matrix[i][q] < 10){  
//                               std::cout << Matrix[i][q] << " " << " ";
//                           }

//                           if(Matrix[i][q] > 9){
//                               std::cout << Matrix[i][q] << " ";
//                           }
//              if(( Matrix[1][q] == 3 ) && ( Matrix[0][q] > max )){
//                  max = Matrix[0][q];
//              }
//       }
//        std::cout << std::endl; 
//    }
//    if (max == 0){
//        std::cout << std::endl << "Net motora kategorii 3" << std::endl;
//    }else std::cout << std::endl << "Max: " << max << std::endl;
//    return 0;
//}

//int main(){
//    struct Characters{
//        int energy;
//        int speed;
//        int pos;
//    };
//    int N = 6 ,M = 6;
//    srand(time(NULL)); // чтобы каждый раз выводились новые случайные значения.
//    std::array <std::array <Characters, 8>, 8> Matrix;
//      for (int i=0; i < N; i++){
//         for (int j=0; j < M; j++){
//    Matrix[i][j].energy=rand()%197;
//    Matrix[i][j].speed=rand()%187;
//       }
//    }
//    for (int i=0; i<N; i++){
//      for (int j=0; j<M; j++){
//    std::cout<< "energy:" << Matrix[i][j].energy << ".speed:" << Matrix[i][j].speed << " ";
//      }
//      std::cout << std::endl;
//     }
//    return 0;
//}


//int main()
//{
//    int y, l, max;
//    srand(time(NULL)); // чтобы каждый раз выводились новые случайные значения.
//    std::array <std::array <int, 7>, 7> Matrix;
//    for(int i = 0; i <= 6; i++){ // цикл создания значений по вертикали матрицы.
//        for(int q = 0; q <= 6; q++){ // цикл создания значений по горизонтали матрицы.
//            Matrix[i][q] = rand()%70; // создание случайных значений в рационе от 0 до 70(не включительно)
//            l += Matrix[i][q];
//            if(Matrix[i][q] < 10){  // Просто украшение при выводе матрицы, чтобы всё выглядело более ровно и красиво, как и последующий if.
//                std::cout << Matrix[i][q] << " " << " ";
//            }

//            if(Matrix[i][q] > 9){
//                std::cout << Matrix[i][q] << " ";
//            }
//        }

//        std::cout << " ...Sum = " << l;
//        if(l > max){
//            max = l; // cоздание максимального значения.
//        }
//        std::cout << std::endl;
//    }

//    std::cout << std::endl << std::endl;
//    std::cout << "max = " << max << std::endl; //  Вывод максимальной суммы.
//}