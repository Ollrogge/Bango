#ifndef _CLIGHTNINGSLASH__
#define _CLIGHTNINGSLASH_

#include "../Skill/CSkillActiveUse.h"

class CLightningSlash : public CSkillActiveUse
{
public:
	CLightningSlash(CSkillInfo* pMacro);
	~CLightningSlash();

	int GetAttack();
};

#endif