#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int windSpeeds[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &windSpeeds[i]);
    }

    int maxWindSpeed = windSpeeds[0];
    for (int i = 1; i < N; i++) {
        if (windSpeeds[i] > maxWindSpeed) {
            maxWindSpeed = windSpeeds[i];
        }
    }
    int stormLevel;
    if (maxWindSpeed >= 250) {
        stormLevel = 5;
    } else if (maxWindSpeed >= 210) {
        stormLevel = 4;
    } else if (maxWindSpeed >= 178) {
        stormLevel = 3;
    } else if (maxWindSpeed >= 154) {
        stormLevel = 2;
    } else if (maxWindSpeed >= 119) {
        stormLevel = 1;
    } else {
        stormLevel = 0; 
    }
    printf("%d\n", stormLevel);
    return 0;
}
