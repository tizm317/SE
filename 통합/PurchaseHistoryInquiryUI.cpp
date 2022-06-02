#include "PurchaseHistoryInquiryUI.h"

PurchaseHistoryInquiryUI::PurchaseHistoryInquiryUI(FILE* out_fp, PurchaseHistory* purchaseHistory)
{
	//purchaseHistoryInquiry->showProductList(purchaseHistory);

	fprintf(out_fp, "4.3. Purchase History Inquiry\n");
	for (auto& itr : purchaseHistory->ListProducts())
	{
		//itr->GetProductDetails();
		fprintf(out_fp, "> %s %s %s %d %d %f\n", itr->getSellerID().c_str(), itr->getProductName().c_str(), itr->getCompanyName().c_str(), itr->getCost(), itr->getCount(), itr->getAvgPurchaseSatisfaction());
	}
}
