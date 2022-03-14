#include<iostream>
using namespace std;
int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize)
{
    int p[pointsSize][2],H[2];
    int i=0,j=0;
    if(pointsSize==1 && (points[0][0] == x || points[0][1] == y))
        return 0;
    while(i<pointsSize){
        if(points[i][0]==x || points[i][1]==y){
            p[j][0] = points[i][0];
            p[j][1] = points[i][1];
            j++;
        }
        i++;
    }
    int min = 100000;
    for(i=0;i<j;i++){
       int distance = abs(p[i][0]-x) + abs(p[i][1]-y);
        if(min > distance){
            min = distance;
            H[0] = p[i][0];
            H[1] = p[i][1];
        }
        else if(min == distance)
            continue;
    }
    for(i=0;i<pointsSize;i++){
        if(points[i][0]==H[0] && points[i][1] == H[1])
            return i;
    }
    return -1;
}
int main()
{
  int  x = 3, y = 4, points = [[1,2],[3,1],[2,4],[2,3],[4,4]];
  int pointsSize=points.size();
  cout<<nearestValidPoint( x,  y,  &points,  pointsSize);
   return 0;
}
   
