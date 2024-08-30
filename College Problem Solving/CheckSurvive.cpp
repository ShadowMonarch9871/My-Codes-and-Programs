#include <cmath>

int minimumDays(int S, int N, int M)
{
    // If the food required per day is more than the maximum food Geekina can buy in a day
    if (M > N)
        return -1;

    // Total food required for the survival days
    int totalFoodRequired = S * M;

    // Total days Geekina can shop (considering the shop is closed on Sundays)
    int shoppingDays = S / 7 * 6 + std::min(S % 7, 6);

    // If the total food required is more than the total food Geekina can buy in the shopping days
    if (totalFoodRequired > shoppingDays * N)
        return -1;

    // Calculate the minimum number of days Geekina needs to buy food
    return (totalFoodRequired + N - 1) / N;
}