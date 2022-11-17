#include <stdio.h>
#include <stdbool.h>

int runde10 (int n) {
    int letzteZahl = n % 10;
    if (letzteZahl < 5) {
        n -= letzteZahl;
        return n;
    }
    else {
        n -= letzteZahl;
        n += 10;
        return n;
    };
}

int rundeSumme (int a, int b, int c) {
    int sum = a + b + c;
    int x = runde10(sum);
    printf("%d", x);
}

bool mauern (int klein, int gross, int ziel) {
    if (ziel <= klein + 5 * gross) {
        return true;
    }
    else {
        return false;
    }
}

int sucheKleinstesGroesstes (int feld[], int lenFeld) {
    int min = feld[0];
    int max = feld[0];
    int stelleKlein, stelleGross;

    for (int i = 1; i < lenFeld; i++) {
        if (feld[i] < min) {
            min = feld[i];
            stelleKlein = i;
        }
    }
    for (int j = 1; j < lenFeld; j++) {
        if (feld[j] > max){
            max = feld[j];
            stelleGross = j;
        }
    }
    printf("An der Stelle %d steht das kleinste Element (%d) im Feld.\n", stelleKlein, min);
    printf("An der Stelle %d steht das groesste Element (%d) im Feld.", stelleGross, max);
}

bool firstLast8 (int arr[], int n) {
    if (arr[0] == 8 || arr [n-1] == 8) {
        return true;
    }
    else {
        return false;
    }
}

int countOdds (int f[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (f[i] % 2 != 0) {
            count += 1;
        }
    }
    return count;
}

bool unlucky1 ( int array[], int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] == 1 && array[i+1] == 3) {
            return true;
        }
    }
    return false;
}

int kleinstes (int feld[], int n) {
    int min = feld[0];
    int stelle;

    for (int i = 1; i < n; i++) {
        if (feld[i] < min) {
            min = feld[i];
            stelle = i;
        }
    }
    return stelle;
}

// TODO:
int zweitkleinstes (int feld[], int n) {
    int feld2[n];

    // copy of feld[] in feld2[]
    for (int i = 0; i < n; i++) {
        feld2[i] = feld[i];
    }

    // remove smallest number from feld2[]
    int pos = kleinstes(feld2, n);
    for (int i = pos - 1; i < n - 1; i++) {
        feld2[i] = feld2[i + 1];
    }
    /*
    // displaying elements of feld2[]:
    for (int i = 0; i < n; i++) {
        printf("%d\n", feld2[i]);
    }
    */
    return kleinstes(feld2, n - 1);
}

void reverse(int arr[], int n) {

    int akt_laenge = n-1;
    int arr2[n];
    printf("[");
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[akt_laenge];
        akt_laenge -= 1;
        printf("%d, ", arr2[i]);

    }
    printf("]");
}

void zeigeFeld(int arr[], int n) {
    printf("[");
    // displaying elements of feld2[]:
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}

// TODO
void swap(int arr[], int arr2[], int n) {

    int buffer;
    for (int i = 0; i < n; i++) {
        buffer = arr[i];
        arr[i] = arr2[i];
        arr2[i] = buffer;
    }
}


int main() {
    // rundeSumme(19, 39, 7);
    // printf("%d", mauern(3, 1, 8));
    // printf("%d", mauern(3, 1, 9));
    // printf("%d", mauern(3, 2, 10));
    int feld[] = {-5, 6, -7, -10, 0, 8};
    // sucheKleinstesGroesstes(feld, 6);
    int arr[] = {8, 0, 7, 4, 4, 0};
    // printf("%d", firstLast8(arr, 6));
    int f[] = {1, 3, 5, 7, 8, 6, 9};
    // printf("%d", countOdds(f, 8));
    int array[] = {1, 5, 3, 7, 0, 8};
    // printf("%d", unlucky1(array, 5));
    // printf("%d", kleinstes(feld, 6));
    // printf("%d", zweitkleinstes(feld, 6));
    // reverse(f, 7);
    /*
    swap(feld, arr, 6);
    zeigeFeld(feld, 6);
    zeigeFeld(arr, 6);
    */


}
