
#include <stdio.h>
void f_teste(int qt, int width,float currCost, float currDistortion,int currIntraMode, int var, 
            int maxVarQT,int diffVarQT, int diff_var_hor, int diff_var_ver, int Gx, int Gy, float ratioGxGy, 
            float norm_gradient, int ispMode,float avg_neigh_QT, int neigh_higher_QT, float avg_neigh_MTT, int neigh_higher_MTT ){
            float data[19];
            data[0] = (float)qt;                    
            data[1] = (float)width;                 
            data[2] =currCost;            
            data[3] =currDistortion;      
            data[4] =(float)currIntraMode;       
            data[5] =(float)var;                 
            data[6] =(float)maxVarQT;            
            data[7] =(float)diffVarQT;           
            data[8] =(float)diff_var_hor;        
            data[9] =(float)diff_var_ver;        
            data[10] =(float)Gx;                  
            data[11] =(float)Gy;                  
            data[12] =ratioGxGy;           
            data[13] =norm_gradient;       
            data[14] =(float)ispMode;             
            data[15] =avg_neigh_QT;        
            data[16] =(float)neigh_higher_QT;     
            data[17] =avg_neigh_MTT;       
            data[18] =(float)neigh_higher_MTT;     
               int i  =  0;
               for(i = 0; i < 19;  ++i){
                printf("%f\n", data[i]);
               } 

}        

int main(){
     float data[19];
    f_teste(22.0,   64.0,   20731000.0  ,42324.0  ,54.0    ,1733.0   ,1534.0   ,614.0   ,830.0    ,982.0      , 98857.0   ,40095.0    ,2.46557    ,33.9238,       0.0     ,2.0    ,4.0    ,0.75   ,2.0);//,0



    return 0;
}
         