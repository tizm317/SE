#include "PurchaseHistoryInquiry.h"

void PurchaseHistoryInquiry::startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory)
{
	PurchaseHistoryInquiryUI* purchaseHistoryInquiryUI = new PurchaseHistoryInquiryUI(out_fp, purchaseHistory);
}

//void PurchaseHistoryInquiry::showProductList(PurchaseHistory* purchaseHistory)
//{
//	for (auto& itr : purchaseHistory->ListProducts())
//	{
//		itr->GetProductDetails();
//	}
//}
