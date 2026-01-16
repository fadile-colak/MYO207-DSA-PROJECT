#include <stdio.h>

// İsim Soyisim: Fadile Çolak
// Öğrenci Numarası: 2420171040
// BTK Akademi Sertifika Linki: NowfnBYIAK

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62, 32, 2, 15, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, aranan;

    printf("Siralama oncesi dizi:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    bubbleSort(arr, n);

    printf("\n\nSiralama sonrasi dizi:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    int sonuc = binarySearch(arr, n, aranan);

    if (sonuc != -1)
        printf("Sayi dizide bulundu. Indeks: %d\n", sonuc);
    else
        printf("Sayi dizide bulunamadi.\n");

    return 0;
}



