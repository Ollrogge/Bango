#ifndef _CITEMTRANSFORM_
#define _CITEMTRANSFORM_

#include "CItem.h"

class CItemTransform: public CItem
{
public:
	CItemTransform(ITEMINFO_DESC& desc, CItemInfo* pMacro);

	void PutOn(CPlayer *pPlayer);
	void PutOff(CPlayer *pPlayer);
};

#endif
