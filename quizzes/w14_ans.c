// 定義 Date 結構體
typedef struct {
    int year;
    int month;
    int day;
} Date;
// 定義 Concert 結構體
typedef struct {
    char location[50];
    Date date;
    float ticket_price;
    int tickets_sold;
    int max_capacity;
} Concert;

void highest_ticket_price(Concert concerts[], int n) {
    float max_price = concerts[0].ticket_price;
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (concerts[i].ticket_price > max_price) {
            max_price = concerts[i].ticket_price;
            max_index = i;
        }
    }
    printf("The concert with the highest ticket price is %s\n", concerts[max_index].location);
}

int main() {
    // 小題 1: 初始化演唱會資料
    Concert concerts[3] = {
        {"Taipei", {2024, 12, 8}, 2500.0, 8000, 10000},
        {"Shanghai", {2023, 10, 15}, 2200.0, 6000, 8000},
        {"Singapore", {2024, 10, 13}, 3000.0, 9000, 12000}
    };
    // 小題 2: 計算售票百分比
    for (int i = 0; i < 3; i++) {
        float percentage = (float)concerts[i].tickets_sold / concerts[i].max_capacity * 100;
        printf("%s: %.2f%%\n", concerts[i].location, percentage);
    }
    // 小題 3: 印出各場次的日期
    for (int i = 0; i < 3; i++) {
        printf("%s: %d/%d/%d\n", concerts[i].location, concerts[i].date.year, concerts[i].date.month, concerts[i].date.day);
    }
    // 小題 4: 找出最高票價的場次
    highest_ticket_price(concerts, 3);

    // 小題 4: 更新售票資訊 (with a pointer)
    // Taipei to Taipei Arena
    // Tickets Sold to 9000
    Concert *concert = &concerts[0];
    strcpy(concert->location, "Taipei Arena");
    concert->tickets_sold = 9000;
    printf("Updated Taipei concert: %s, %d\n", concert->location, concert->tickets_sold);
}