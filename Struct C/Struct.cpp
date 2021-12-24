#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien
{
    char ten[50], ngaysinh[15];
    float GPA;
    char MSV[15];
};
void swap(SinhVien &a, SinhVien &b)
{
    SinhVien temp = a;
    a = b;
    b = temp;
}
int main()
{
    FILE *filein, *fileout;
    fileout = fopen("Output.txt", "w");
    filein = fopen("Data.txt", "r");
    int so_sinh_vien;
    fscanf(filein, "%d", &so_sinh_vien);
    SinhVien arr[so_sinh_vien + 5];
    for (int i = 0; i < so_sinh_vien; i++)
    {
        if(i+1 < 10){
            char s[10] = "D20DCCN00";
            strcpy(arr[i].MSV, s);
            char a[5];
            itoa(i+1, a, 10);
            strcat(arr[i].MSV, a);
        }
        fscanf(filein, "\n");
        fgets(arr[i].ten, sizeof(arr[i].ten), filein);
        fscanf(filein, "%s", &arr[i].ngaysinh);
        fscanf(filein, "%f", &arr[i].GPA);
        arr[i].ten[strlen(arr[i].ten) - 1] = '\0';
    }
    for(int i = 0; i < so_sinh_vien-1; i++){
        for(int j = i + 1; j < so_sinh_vien; j++){
            if(arr[i].GPA < arr[j].GPA){
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < so_sinh_vien; i++)
    {
        fprintf(fileout, "%s %s %s %.2f\n",arr[i].MSV, arr[i].ten, arr[i].ngaysinh, arr[i].GPA);
    }
    return 0;
}