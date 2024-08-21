#include <stdio.h>
#include <stdlib.h>

void floodFillHelper(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int originalColor) {
    if (sr < 0 || sr >= imageSize || sc < 0 || sc >= imageColSize[sr] || image[sr][sc] != originalColor) {
        return;
    }
    image[sr][sc] = newColor;
    floodFillHelper(image, imageSize, imageColSize, sr + 1, sc, newColor, originalColor);
    floodFillHelper(image, imageSize, imageColSize, sr - 1, sc, newColor, originalColor);
    floodFillHelper(image, imageSize, imageColSize, sr, sc + 1, newColor, originalColor);
    floodFillHelper(image, imageSize, imageColSize, sr, sc - 1, newColor, originalColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int* returnSize, int** returnColumnSizes) {
    int originalColor = image[sr][sc];
    if (originalColor != newColor) {
        floodFillHelper(image, imageSize, imageColSize, sr, sc, newColor, originalColor);
    }
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    return image;
}

int main() {
    int image[3][3] = {{1, 1, 1},
                       {0, 0, 1},
                       {1, 0, 1}};
    int imageSize = 3;
    int imageColSize[] = {3, 3, 3};
    int sr = 1, sc = 1, newColor = 2;
    
    // Convert the 2D array into a dynamically allocated 2D array
    int** imagePtr = (int**)malloc(imageSize * sizeof(int*));
    for (int i = 0; i < imageSize; i++) {
        imagePtr[i] = (int*)malloc(imageColSize[i] * sizeof(int));
        for (int j = 0; j < imageColSize[i]; j++) {
            imagePtr[i][j] = image[i][j];
        }
    }
    
    int returnSize;
    int* returnColumnSizes;

    int** result = floodFill(imagePtr, imageSize, imageColSize, sr, sc, newColor, &returnSize, &returnColumnSizes);

    // Print the result
    printf("Resultant Image:\n");
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < imageSize; i++) {
        free(imagePtr[i]);
    }
    free(imagePtr);

    return 0;
}