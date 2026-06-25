#include <iostream>
using namespace std;

int main() {
    int sales[4][12];

    // Input sales data
    cout << "Enter sales for 4 products and 12 months:\n";

    for (int i = 0; i < 4; i++) {
        cout << "\nProduct " << i + 1 << ":\n";
        for (int j = 0; j < 12; j++) {
            cin >> sales[i][j];
        }
    }

    int yearlyTotal = 0;
    int maxProductSales = 0;
    int bestProduct = 0;

    cout << "\nTotal sales of each product:\n";

    for (int i = 0; i < 4; i++) {
        int productTotal = 0;

        for (int j = 0; j < 12; j++) {
            productTotal += sales[i][j];
        }

        cout << "Product " << i + 1
             << " = " << productTotal << endl;

        yearlyTotal += productTotal;

        if (productTotal > maxProductSales) {
            maxProductSales = productTotal;
            bestProduct = i + 1;
        }
    }

    cout << "\nTotal Yearly Sales = "
         << yearlyTotal << endl;

    cout << "Best Selling Product = Product "
         << bestProduct
         << " (Sales = "
         << maxProductSales << ")" << endl;

    return 0;
}