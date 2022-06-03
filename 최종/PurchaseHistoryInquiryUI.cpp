#include "PurchaseHistoryInquiryUI.h"
#include <cmath>

PurchaseHistoryInquiryUI::PurchaseHistoryInquiryUI(FILE *out_fp, PurchaseHistory* purchaseHistory)
{
	fprintf(out_fp, "4.3. 상품 구매 내역 조회\n");

	for (auto& itr : purchaseHistory->listProducts())
	{
		fprintf(out_fp, "> %s %s %s %d %d %.1f\n", itr->getSellerID().c_str(), itr->getProductName().c_str(), itr->getCompanyName().c_str(), itr->getCost(), itr->getCount(), std::roundf(itr->getAvgPurchaseSatisfaction()));
	}
	fprintf(out_fp, "\n");
}