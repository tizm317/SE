#include "PurchaseHistoryInquiryUI.h"

PurchaseHistoryInquiryUI::PurchaseHistoryInquiryUI(FILE* out_fp, PurchaseHistory* purchaseHistory)
{
	//purchaseHistoryInquiry->showProductList(purchaseHistory);

	for (auto& itr : purchaseHistory->ListProducts())
	{
		//itr->GetProductDetails();
		fprintf(out_fp, "\n%s %s %s %d %d %f", itr->getSellerID().c_str(), itr->getProductName().c_str(), itr->getCompanyName().c_str(), itr->getCost(), itr->getCount(), itr->getAvgPurchaseSatisfaction());
	}
}
