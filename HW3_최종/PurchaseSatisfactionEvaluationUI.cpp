#include "PurchaseSatisfactionEvaluationUI.h"
#include <cmath>

PurchaseSatisfactionEvaluationUI::PurchaseSatisfactionEvaluationUI(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory, PurchaseSatisfactionEvaluation* callerPtr)
{
	// ��ǰ�̸� �Է� ����
	int temp = fscanf(in_fp, "%s", ProductName);

	// ���� ���� �߿��� �ش� ��ǰ ã��
	Product* ProductPointer = nullptr;
	// �������� �Ѱ� ����
	ProductPointer = callerPtr->SelectProduct(purchaseHistory, ProductName);

	// ���� ������ �Է� ����
	temp = fscanf(in_fp, "%d", &PurchaseSatisfaction);


	//ProductPointer = callerPtr->SelectProduct(purchaseHistory, ProductName); 
	
	// ���� �������� �ش� ��ǰ�� ����
	callerPtr->InputPurchaseSatisfactionScore(ProductPointer, PurchaseSatisfaction);

	// output.txt�� ���
	fprintf(out_fp, "4.4. Purchase Satisfaction Evaluation\n");
	fprintf(out_fp, "> %s %s %d\n", ProductPointer->getSellerID().c_str(), ProductPointer->getProductName().c_str(), std::round(ProductPointer->getAvgPurchaseSatisfaction()));
	fprintf(out_fp, "\n");
}


