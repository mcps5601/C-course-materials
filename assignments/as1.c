#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // 讀取輸入的組數
    for (int i = 0; i < n; i++) {
        int budget, people, city;
        scanf("%d %d %d", &budget, &people, &city);  // 讀取每組輸入資料
        
        int ticket_price = 0;
        double exchange_rate = 0;
        double daily_cost = 0;
        int valid_city = 1;

        switch (city) {
            case 0:  // 東京
                ticket_price = 15000;
                exchange_rate = 4;
                daily_cost = 15000;
                break;
            case 1:  // 首爾
                ticket_price = 10000;
                exchange_rate = 40;
                daily_cost = 60000;
                break;
            case 2:  // 曼谷
                ticket_price = 12000;
                exchange_rate = 1.1;
                daily_cost = 2000;
                break;
            case 3:  // 倫敦
                ticket_price = 35000;
                exchange_rate = 0.025;
                daily_cost = 200;
                break;
            case 4:  // 巴黎
                ticket_price = 33000;
                exchange_rate = 0.03;
                daily_cost = 180;
                break;
            case 5:  // 紐約
                ticket_price = 40000;
                exchange_rate = 0.032;
                daily_cost = 220;
                break;
            case 6:  // 雪梨
                ticket_price = 32000;
                exchange_rate = 0.048;
                daily_cost = 250;
                break;
            case 7:  // 台北
                ticket_price = 0;
                exchange_rate = 1;
                daily_cost = 3000;
                break;
            default:
                valid_city = 0;
                break;
        }

        if (!valid_city) {
            printf("-2");
        } else {
            int total_ticket_cost = ticket_price * people;  // 計算機票總花費

            if (budget < total_ticket_cost) {
                printf("-1");
            } else {
                double budget_after_tickets = budget - total_ticket_cost;
                int days = (int)(budget_after_tickets / (daily_cost * people / exchange_rate));  // 計算天數
                if (days < 0) {
                    days = 0;  // 預算不足以支付每日花費時顯示0
                }
                printf("%d", days);
            }
        }

        if (i < n - 1) {
            printf(" ");  // 如果不是最後一組，輸出空格
        }
    }

    return 0;
}