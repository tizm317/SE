#include "PurchaseSatisfactionEvaluationUI.h"

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
	fprintf(out_fp, "\n%s %s, %f", ProductPointer->GetSellerID().c_str(), ProductPointer->GetProductName().c_str(), ProductPointer->GetAvgPurchaseSatisfaction());
}


