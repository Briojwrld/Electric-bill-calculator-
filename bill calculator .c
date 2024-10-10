#include <stdio.h>

int main() {
  int CustomerID, UnitConsumed;
  float ChargesPerUnit, TotalBill, TotalAmountToPay;
  char CustomerName[50];

  printf("Enter Customer ID: ");
  scanf("%d", &CustomerID);

  printf("Enter Customer Name: ");
  scanf("%s", CustomerName);

  printf("Enter Units Consumed: ");
  scanf("%d", &UnitConsumed);

  if (UnitConsumed <= 199) {
    ChargesPerUnit = 1.20;
  } else if (UnitConsumed >= 200 && UnitConsumed < 400) {
    ChargesPerUnit = 1.50;
  } else if (UnitConsumed >= 400 && UnitConsumed < 600) {
    ChargesPerUnit = 1.80;
  } else {
    ChargesPerUnit = 2.00;
  }

  TotalBill = UnitConsumed * ChargesPerUnit;

  if (TotalBill > 400) {
    TotalBill += TotalBill * 0.15;
  }

  if (TotalBill < 100) {
    TotalBill = 100;
  }

  TotalAmountToPay = TotalBill;

  printf("\nCustomer ID: %d", CustomerID);
  printf("\nCustomer Name: %s", CustomerName);
  printf("\nUnits Consumed: %d", UnitConsumed);
  printf("\nCharges per Unit: %.2f", ChargesPerUnit);
  printf("\nTotal Amount to Pay: %.2f\n", TotalAmountToPay);

  return 0;
}