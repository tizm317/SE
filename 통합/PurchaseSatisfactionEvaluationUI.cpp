#include "PurchaseSatisfactionEvaluationUI.h"

PurchaseSatisfactionEvaluationUI::PurchaseSatisfactionEvaluationUI(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory, PurchaseSatisfactionEvaluation* callerPtr)
{
	// 상품이름 입력 받음
	int temp = fscanf(in_fp, "%s", ProductName);

	// 구매 내역 중에서 해당 상품 찾음
	Product* ProductPointer = nullptr;
	// 리턴으로 넘겨 받음
	ProductPointer = callerPtr->SelectProduct(purchaseHistory, ProductName);

	// 구매 만족도 입력 받음
	temp = fscanf(in_fp, "%d", &PurchaseSatisfaction);


	//ProductPointer = callerPtr->SelectProduct(purchaseHistory, ProductName); 
	
	// 구매 만족도를 해당 상품에 넣음
	callerPtr->InputPurchaseSatisfactionScore(ProductPointer, PurchaseSatisfaction);

	// output.txt에 출력
	fprintf(out_fp, "\n%s %s, %f", ProductPointer->GetSellerID().c_str(), ProductPointer->GetProductName().c_str(), ProductPointer->GetAvgPurchaseSatisfaction());
}


