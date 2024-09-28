#include <stdio.h>

int main() {
    int month, weather, temperature;

    // 讀取輸入
    printf("請輸入月份 (1-12)：");
    scanf("%d", &month);
    printf("請輸入天氣 (1: 晴天, 2: 下雨, 3: 下雪)：");
    scanf("%d", &weather);
    printf("請輸入今日溫度：");
    scanf("%d", &temperature);

    // 使用 switch 判斷季節
    switch(month) {
        case 3: case 4: case 5:
            printf("春季\n");
            break;
        case 6: case 7: case 8:
            printf("夏季\n");
            break;
        case 9: case 10: case 11:
            printf("秋季\n");
            break;
        case 12: case 1: case 2:
            printf("冬季\n");
            break;
        default:
            printf("未知季節\n");
            break;
    }

    // 使用 if-else 判斷天氣
    if (weather == 1) {
        printf("建議穿輕便服裝\n");
    } else if (weather == 2) {
        printf("建議攜帶雨具\n");
    } else if (weather == 3) {
        printf("天氣很冷\n");
    } else {
        printf("未知天氣\n");
    }

    // 使用條件運算子判斷是否額外加上保暖建議
    (temperature <= 15) ? printf("注意保暖") : printf("溫度適中");
}