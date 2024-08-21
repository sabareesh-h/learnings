void fun(int a[][3],int row,int col,int sr,int sc,int start_color,int newColor){
//     if(sr+1<row && a[sr+1][sc] ==start_color){
//         a[sr+1][sc]=newColor;
//         fun(a,row,col,sr+1,sc,start_color,newColor);
//     }
//     if(sc+1<col && a[sr][sc+1] ==start_color){
//         a[sr][sc+1]=newColor;
//         fun(a,row,col,sr,sc+1,start_color,newColor);
//     }
//     if(sc-1>=0 && a[sr][sc-1] ==start_color){
//         a[sr][sc-1]=newColor;
//         fun(a,row,col,sr,sc-1,start_color,newColor);
//     }
//     if(sr-1>=0 && a[sr-1][sc] ==start_color){
//         a[sr-1][sc]=newColor;
//         fun(a,row,col,sr-1,sc,start_color,newColor);
//     }
// }
// void floodfill(int a[][3],int row,int col,int sc,int sr,int color){
//     int start_color=a[sr][sc];
//     a[sr][sc]=color;
//     if(start_color!=color){
//         fun(a,row,col,sr,sc,start_color,color);
//     }
// }
// int main(){
//     int a[3][3]={{1,1,1},
//                  {0,0,1},
//                  {1,0,1}};
//     int sc=1, sr=1,color=2;
//     floodfill(a,3,3,sc,sr,color);
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }