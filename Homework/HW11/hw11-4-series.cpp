/*
    จงสร้างฟังก์ชันเพื่อหาผลรวมของอนุกรม 1! + (1+2!) + (2+3!) + (3+4!) + (4+5!) + ... โดยโปรแกรมจะทำการรับค่าจำนวนพจน์ของอนุกรมมา และให้คุณสร้างฟังก์ชันในการหาผลรวม เช่น ผู้ใช้กรอกเลข 3 ก็ต้องแสดงผลรวมของอนุกรม 1! + (1+2!) + (2+3!)

    Test case:
        3
    Output:
        Sum = 12

    Test case:
        6
    Output:
        Sum = 888

*/
#include <stdio.h>

// ฟังก์ชันเพื่อหาค่าของ n!
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("กรุณาป้อนจำนวนพจน์ของอนุกรม: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i + factorial(i);
    }

    printf("ผลรวม = %d\n", sum);

    return 0;
}


