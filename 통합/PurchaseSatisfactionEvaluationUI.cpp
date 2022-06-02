#include "PurchaseSatisfactionEvaluationUI.h"

PurchaseSatisfactionEvaluationUI::PurchaseSatisfactionEvaluationUI(FILE *in_fp, FILE *out_fp, PurchaseHistory *purchaseHistory, PurchaseSatisfactionEvaluation *callerPtr)
{
	fscanf(in_fp, "%s", productName);

	Product *ProductPointer = nullptr;

	ProductPointer = callerPtr->selectProduct(purchaseHistory, productName);

	fscanf(in_fp, "%d", &purchaseSatisfaction);
	
	callerPtr->inputPurchaseSatisfactionScore(ProductPointer, purchaseSatisfaction);

	fprintf(out_fp, "4.4. Purchase Satisfaction Evaluation\n");
	fprintf(out_fp, "> %s %s %f\n", ProductPointer->getSellerId().c_str(), ProductPointer->getProductName().c_str(), ProductPointer->getAvgPurchaseSatisfaction());
}


