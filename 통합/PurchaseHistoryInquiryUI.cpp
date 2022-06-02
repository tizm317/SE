#include "PurchaseHistoryInquiryUI.h"

PurchaseHistoryInquiryUI::PurchaseHistoryInquiryUI(FILE* out_fp, PurchaseHistory* purchaseHistory)
{
	//purchaseHistoryInquiry->showProductList(purchaseHistory);

	for (auto& itr : purchaseHistory->ListProducts())
	{
		//itr->GetProductDetails();
		fprintf(out_fp, "\n%s %s %s %d %d %f", itr->GetSellerID().c_str(), itr->GetProductName().c_str(), itr->GetCompanyName().c_str(), itr->GetCost(), itr->GetCount(), itr->GetAvgPurchaseSatisfaction());
	}
}
