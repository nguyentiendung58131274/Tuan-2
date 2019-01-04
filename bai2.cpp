#include <iostream>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>

using namespace std;

typedef struct NhanVien{
	char ID[4]; 
	char hoTen[20]; 
	int tuoi; 
	int luong;
}NV;

bool ThemNV(NhanVien NV);
void xoaNV(char* NVID);
void capnhatNV(NhanVien nvMoi);
NhanVien nhapnvIDtuBP();
void TimTTNV();
void docDSNV();
void ghiDSNV();
void InDSNV();

typedef NhanVien NV;

vector<NhanVien> dsNV;

bool ThemNV(NhanVien NV){
	int n=dsNV.size();
	for(int i=0;i<n;i++){
		if(strcmp(dsNV[i].ID,NV.ID)==0)	
			return false;
	}
	dsNV.push_back(NV);
	return true;
}

void xoaNV(char* NVID){
	char IDdele[4];
	int n=dsNV.size();
	int vt=-1;
	cout << "Nhap ID nhan vien can xoa: " << endl;
	gets(IDdele);
	for(int i=0;i<n;i++){
		if(strcmp(dsNV[i].ID,IDdele)==0){
			vt=i;
			break;
		}
	}
	if(vt!=-1){
		dsNV.erase(dsNV.begin()+vt);
	}
}

void capnhatNV(NhanVien nvMoi){
		int size=dsNV.size();
		int vtCapNhat=-1;
		for(int i=0;i<size;i++)
		if(strcmp(nvMoi.ID,dsNV[i].ID)==0){
			vtCapNhat=i;
			break;
		}
	if(vtCapNhat!=-1){	
		strcpy(dsNV[vtCapNhat].ID,nvMoi.ID);
			strcpy(dsNV[vtCapNhat].hoTen,nvMoi.hoTen);
			dsNV[vtCapNhat].tuoi=nvMoi.tuoi;
			dsNV[vtCapNhat].luong=nvMoi.luong;
	}
}

NhanVien nhapnvIDtuBP(){
	NhanVien NV;
	cout<<"Nhap ten nv:";fflush(stdin);
	gets(NV.hoTen);
	cout<<"Nhap ma nv:";fflush(stdin);
	gets(NV.ID);
	cout<<"Nhap tuoi nv:";
	cin>>NV.tuoi;
	cout<<"Nhap luong nv:";
	cin>>NV.luong;
	return NV;
}

void TimTTNV(){
	char IDtemp[4];
	int n=dsNV.size();
	cout << "Nhap IDtemp: " << endl;
	gets(IDtemp);
	for(int i=0;i<n;i++){
		if(strcmp(dsNV[i].ID,IDtemp)==0)
		InDSNV();
	}
}

void docDSNV(){
	int n=dsNV.size();
	ifstream file;
	file.open("input2.dat",ios::in);
	
}

void ghiDSNV(){
	ifstream file;
	file.open("input2.dat",ios::out);
	
}

void InDSNV(){
	int n=dsNV.size();
	for(int i=0;i<n;i++){
		cout << dsNV[i].ID << endl;
		cout << dsNV[i].hoTen << endl;
		cout << dsNV[i].tuoi << endl;
		cout << dsNV[i].luong << endl;
	}
}

int main(){
	char file[]=("input2.dat");
	char of[]=("output2.dat");
	int chon;
	while(true){
        system("cls");
        printf("******************************************\n");
        printf("**                  Menu                **\n");
        printf("**      1. Them nhan vien               **\n");
        printf("**      2. Ghi nhan vien vao file       **\n");
        printf("**      3. Hien thi thong tin nhan vien **\n");
        printf("**      4. Tim TT nhan vien bang maNV   **\n");
        printf("**      5. Luong nhan vien cao nhat     **\n");
        printf("**      6. Luong nhan vien thap nhat    **\n");
        printf("**      7. Sap xep nhan vien            **\n");
        printf("**      8. Xuat ket qua ra file output  **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&chon);
        switch(chon){
            case 1:
                printf("\nBan da chon nhap DS nhan vien!");
                
                printf("\nBan da nhap thanh cong!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                    printf("\nBan da chon ghi nhan vien vao file!");
                    
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                    printf("\nBan da chon hien thi thong tin nhan vien!");
                    
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                    printf("\nBan da chon tim thong tin nhan vien qua maNV!");
                    
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 5:
                    printf("\nBan da chon luong nhan vien cao nhat!");
                    
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 6:
                    printf("\nBan da chon luong nhan vien thap nhat!");
                    
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 7:
            		printf("\nBan da chon sap xep nhan vien!");
            		
				getch();
				break;
            case 8:
                    printf("\nBan da chon xuat ket qua ra file!");
                    
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
    	    }
    	}
}
