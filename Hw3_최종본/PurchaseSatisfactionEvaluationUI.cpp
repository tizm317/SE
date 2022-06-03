#include "PurchaseSatisfactionEvaluationUI.h"
#include <cmath>

PurchaseSatisfactionEvaluationUI::PurchaseSatisfactionEvaluationUI(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory, PurchaseSatisfactionEvaluation* callerPtr)
{
	int temp = fscanf(in_fp, "%s", productName);

	Product *ProductPointer = nullptr;
	
	ProductPointer = callerPtr->SelectProduct(purchaseHistory, productName);

	temp = fscanf(in_fp, "%d", &purchaseSatisfaction);

	callerPtr->inputPurchaseSatisfactionScore(ProductPointer, purchaseSatisfaction);

	fprintf(out_fp, "4.4. 상품 구매만족도 평가\n");
	fprintf(out_fp, "> %s %s %d\n", ProductPointer->getSellerID().c_str(), ProductPointer->getProductName().c_str(), purchaseSatisfaction);
	fprintf(out_fp, "\n");
}