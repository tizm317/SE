#include "PurchaseHistoryInquiry.h"

void PurchaseHistoryInquiry::startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory)
{
	PurchaseHistoryInquiryUI* purchaseHistoryInquiryUI = new PurchaseHistoryInquiryUI(out_fp, purchaseHistory);
}