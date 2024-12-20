#include <stdio.h>
#include <string.h>
 struct Menu{
    	int stt;
        char tenmon[100];
        int gia;
    };
struct Menu menu[5]={
		{1,"ga",100,},
		{2,"vit",80,},
		{3,"cha",15,},
		{4,"nem",50,},
		{5,"ruou",35,},
	};
int main() {
    int  n = 0, chon;
	int kichThuoc = 5;
	getchar();
    do {
        printf("\n---MENU---\n");
        printf("1. In ra giá tri cac phan tu có trong menu mon an\n ");
        printf("2. Thêm mot phqn tu vào vi tri chi cuoi \n");
        printf("3. Sua mot phan tu o vi tri chi dinh \n");
        printf("4. Xoa mot phan tu o vi tri chi cuoi\n");
        printf("5. Sap xep cac phan tu tang dan  \n");
        printf("6. Tìm kiem phan tu theo name nhap vao \n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                 	int i;
					for (i= 0; i < sizeof(menu)/sizeof(menu[0]); i++){
				        printf("In thong tin mon an thu %d\n",i+1);
				        printf ("stt : ");
					    printf("%d\n",menu[i].stt);
					    printf ("ten mon : ");
					    printf("%s\n",menu[i].tenmon);
					    printf ("gia : ");
					    printf("%d K\n",menu[i].gia);
						}
                 break;

            case 2:
            printf("Nhap ten mon muon them: ");
            fgets(menu[kichThuoc].tenmon,sizeof(menu[kichThuoc].tenmon),stdin);
            menu[kichThuoc].tenmon[strlen(menu[kichThuoc].tenmon)-1] = '\0';
            printf("Nhap gia tien: ");
            scanf("%lf",&menu[kichThuoc].tenmon);
            kichThuoc++;
            for (int i = 0; i < kichThuoc; i++){ 
				printf("In thong tin mon an thu %d\n",i+1);
				printf ("stt : ");
				printf("%d\n",menu[i].stt);
				printf ("ten mon : ");
				printf("%s\n",menu[i].tenmon);
				printf ("gia : ");
				printf("%d K\n",menu[i].gia);
					}
            break;
            	 
            case 3: 
              int vitri;
                printf("Nhap vi tri muon sua: ");
                scanf("%d", &vitri);
                getchar();
                if (vitri >= 1 && vitri <= kichThuoc) {
                    printf("Nhap ten mon moi: ");
                    fgets(menu[vitri - 1].tenmon, sizeof(menu[vitri - 1].tenmon), stdin);
                    menu[vitri - 1].tenmon[strcspn(menu[vitri - 1].tenmon, "\n")] = '\0';

                    printf("Nhap gia tien moi: ");
                    scanf("%d", &menu[vitri - 1].gia);

					int i;
					for (i= 0; i < sizeof(menu)/sizeof(menu[0]); i++){
				        printf("In thong tin mon an thu %d\n",i+1);
				        printf ("stt : ");
					    printf("%d\n",menu[i].stt);
					    printf ("ten mon : ");
					    printf("%s\n",menu[i].tenmon);
					    printf ("gia : ");
					    printf("%d K\n",menu[i].gia);
						}
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            

            case 4:
          	kichThuoc--;
            for (int i = 0; i < kichThuoc; i++){ 
                if(menu[i].stt==0){
                    break;
                }
              printf("In thong tin mon an thu %d\n",i+1);
				        printf ("stt : ");
					    printf("%d\n",menu[i].stt);
					    printf ("ten mon : ");
					    printf("%s\n",menu[i].tenmon);
					    printf ("gia : ");
					    printf("%d K\n",menu[i].gia);
            }
            break;
            case 5: 
    for(int i=0;i<kichThuoc-1;i++){
                for(int j=0; j<kichThuoc-i-1;j++){
                        if (menu[j].gia > menu[j + 1].gia) {
                                struct Dish temp = menu[j];
                                menu[j] = menu[j + 1];
                                menu[j + 1] = temp;
                            }
                        }
                }
            printf("Menu sau khi sap xep theo giá tang d?n:\n");
            for (int i = 0; i < kichThuoc; i++){ 
                if(menu[i].stt==0){
                    break;
                }
             printf("In thong tin mon an thu %d\n",i+1);
				        printf ("stt : ");
					    printf("%d\n",menu[i].stt);
					    printf ("ten mon : ");
					    printf("%s\n",menu[i].tenmon);
					    printf ("gia : ");
					    printf("%d K\n",menu[i].gia);
            }
            break;
                 break;

            case 6: 
            char timKiem[100];
            
            printf("nhap mon an can tim: ");
            fgets(menu[kichThuoc-1].tenmon,sizeof(menu[kichThuoc-1].tenmon),stdin);
            menu[kichThuoc-1].tenmon[strlen(menu[kichThuoc-1]tenmon)-1] = '\0';
            for (int i = 0; i < kichThuoc; i++){
                if(menu[i].temon==timKiem){
                    kiemtra=i;
                    break;
                }
            }
            if(kiemtra!=-1){
                printf("mon an o vi tri: %d",kiemtra);
            }
            break;

            case 7:
                printf("Thoat chuong trinh.\n");
                 break;

            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (chon != 7);

    return 0;
}
             
