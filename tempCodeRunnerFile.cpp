#include<stdio.h>

void Thong_tin_ca_nhan(){
    char ten[10];
    float tuoi, cannang;
    printf("Nhap ten cua ban:");
    getchar();
    gets(ten);
    printf("Nhap tuoi cua ban:");
    scanf("%f", &tuoi);
    printf("Nhap can nang cua ban:");
    scanf("%f", &cannang);
}
void thuongtet(){
    int nam;
    printf("Nhap nam:");
    scanf("%d", &nam);
    if (nam < 5){
        printf("Thuong 5 trieu ");
    }else if(nam <= 10){
        printf("Thuong 10 trieu ");
    }else if(nam > 10){
        printf("Thuong 20 trieu ");
    }
}
void thong_tin_K16(){
    printf("+----Thong tin K16----+\n");
    int so_lop;
    printf("Nhap so luong lop:");
    scanf("%d", &so_lop);
    int ds_lop[so_lop];
    int min = 100;
    int sy_so_lon_hon_40 = 0;
    for (int i = 0; i < so_lop; i++) {
        printf("Sy so lop thu %d: ", i+1);
        scanf("%d", &ds_lop[i]);
         if(ds_lop[i] >= 40){
            sy_so_lon_hon_40++;
        }
        if(ds_lop[i] < min){
            min = ds_lop[i];
        }    
    }
    
    printf("+----Xuat thong tin lop----+\n");
    printf("So luong lop: %d\n", so_lop);
    printf("So lop co sy so >= 40: %d\n", sy_so_lon_hon_40);
    printf("Vi tri cac lop co si so nho nhat la: " );
    for(int i = 0; i < so_lop; i++){
        if(ds_lop[i] == min){
            printf(" %d", i+1);
        }
    }
    printf("\n");
}
int main(){
    int luachon;
    do
    {
        printf("+------------Menu------------+\n");
        printf("1. Thong tin ca nhan\n");
        printf("2. Thuong tet\n");
        printf("3. Thong tin lop K16\n");
        printf("0. Thoat\n");
        printf("+---------------------------+\n");
        printf("Lua chon cua ban:"); scanf("%d", &luachon);
        switch (luachon)
        {
            case 1:
                Thong_tin_ca_nhan();
                break;
            case 2:
                thuongtet();
                break;
            case 3:
                thong_tin_K16();
                break;
        }
    }while(luachon >= 1 && luachon <= 3);
    return 0;
}
