#include<stdio.h>
int main()
{
  int arr[]={10,20,30,40,50,60,70,80,90,100};
  int no_ele=10;
  int ind;
  int safe;
  int rot_ctr,tot_rot=3;
  for(rot_ctr=1;rot_ctr<=tot_rot;rot_ctr++)
  {
      safe=arr[no_ele-1];
      int shift_ind;
      for(shift_ind= no_ele-1; shift_ind>0;shift_ind--)
            arr[shift_ind]=arr[shift_ind-1];
      arr[0]=safe;
 }
for(ind=0;ind<no_ele; printf("%d ",arr[ind++]));




  return 0;
}