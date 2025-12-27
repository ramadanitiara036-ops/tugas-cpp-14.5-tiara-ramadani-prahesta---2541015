#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int i, sum = 0;
    float rata;
    int idxB = 0, idxC = 0;

    // Menghitung jumlah dan rata-rata
    for(i = 0; i < 12; i++) {
        sum += A[i];
    }
    rata = sum / 12.0;

    // Memindahkan ke array B dan C
    for(i = 0; i < 12; i++) {
        if(A[i] > rata) {
            B[idxB] = A[i];
            idxB++;
        } else if(A[i] < rata) {
            C[idxC] = A[i];
            idxC++;
        }
    }

    // Menampilkan hasil
    printf("Rata-rata = %.2f\n", rata);

    printf("Array A : ");
    for(i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    printf("\nArray B (di atas rata-rata): ");
    for(i = 0; i < idxB; i++) {
        printf("%d ", B[i]);
    }

    printf("\nArray C (di bawah rata-rata): ");
    for(i = 0; i < idxC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}

