#include <stdio.h>

int main() {
    //1
    float kurs = 15230.20; // krus per kamis, 31 agustus 2023
    float uang_dolar, uang_rupiah;

    printf("Masukkan jumlah uang dalam dolar AS: ");
    scanf("%f", &uang_dolar);
    uang_rupiah = uang_dolar * kurs;
    printf("Nilai uang dalam rupiah: %.2f\n", uang_rupiah);

    //2
    int jml_uang, sisa;
    int ratusanribu, limaplhribu, duaplhribu, seribuan, limaribu;

    printf("Masukkan jumlah uang dalam rupiah: ");
    scanf("%d", &jml_uang);

    ratusanribu = jml_uang / 100000;
    sisa = jml_uang % 100000;

    limaplhribu = sisa / 50000;
    sisa = sisa % 50000;

    duaplhribu = sisa / 20000;
    sisa = sisa % 20000;

    seribuan = sisa / 10000;
    sisa = sisa % 10000;

    limaribu = sisa / 5000;
    sisa = sisa % 5000;

    printf("%d Lembar 100000\n", ratusanribu);
    printf("%d Lembar 50000\n", limaplhribu);
    printf("%d Lembar 20000\n", duaplhribu);
    printf("%d Lembar 10000\n", seribuan);
    printf("%d Lembar 5000\n", limaribu);

    //3
//    int a = 12, b = 2, c = 3, d = 4;
//
//    printf("a %% b = %d\n", a % b);
//    printf("a - c = %d\n", a - c);
//    printf("a + b = %d\n", a + b);
//    printf("a / d = %d\n", a / d);
//    printf("a / d * d + a %% d = %d\n", a / d * d + a % d);
//    printf("a %% d / d * a - c = %d\n", a % d / d * a - c);

    //4
//    int a, b, c;
//    int diskriminan;
//
//    printf("Masukkan nilai a: ");
//    scanf("%d", &a);
//
//    printf("Masukkan nilai b: ");
//    scanf("%d", &b);
//
//    printf("Masukkan nilai c: ");
//    scanf("%d", &c);
//
//    diskriminan = b * b - 4 * a * c;
//
//    printf("Diskriminan dari persamaan kuadrat adalah: %d\n", diskriminan);

    //5
//    float a, b, c;
//    float diskriminan;
//
//    printf("Masukkan nilai a: ");
//    scanf("%f", &a);
//
//    printf("Masukkan nilai b: ");
//    scanf("%f", &b);
//
//    printf("Masukkan nilai c: ");
//    scanf("%f", &c);
//
//    diskriminan = b * b - 4 * a * c;
//
//    printf("Diskriminan dari persamaan kuadrat adalah: %.2f\n", diskriminan);


    //4
    //a
//    int a = 22;
//
//    a = a + 5;
//    a = a-2;
//    printf("a = %d\n", a);


    //b
    //1
//        int x;
//        x = (2 + 3) - 10 * 2;
//        printf("Nilai x: %d\n", x);
    //2
//        int x1;
//        x1 = (2 + 3) - (10 * 2);
//        printf("Nilai x: %d\n", x1);
//          //3
//        int x2;
//        x2 = 10 % 3 * 2 + 1;
//        printf("Nilai x2: %d\n", x2);

    //c
    //1
//    float b, x, c, y;
//
//    printf("Masukkan nilai b: ");
//    scanf("%f", &b);
//
//    printf("Masukkan nilai x: ");
//    scanf("%f", &x);
//
//    printf("Masukkan nilai c: ");
//    scanf("%f", &c);
//
//    y = b * x * x + 0.5 * x - c;
//
//    printf("Nilai y: %.2f\n", y);

    //2
    float x, z, a, y;
    printf("Masukkan nilai x: ");
    scanf("%f", &x);

    printf("Masukkan nilai z: ");
    scanf("%f", &z);

    printf("Masukkan nilai a: ");
    scanf("%f", &a);

    y = (0.3 * x * z ) / (2 * a);

    printf("Nilai y: %.2f\n", y);

    //d
    char kar = 'A';

    kar = kar + 32;
    printf("%c\n",kar);

    return 0;
}
