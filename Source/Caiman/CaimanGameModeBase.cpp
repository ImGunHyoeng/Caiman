// Copyright Epic Games, Inc. All Rights Reserved.


#include "CaimanGameModeBase.h"

ACaimanGameModeBase::ACaimanGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnRef(TEXT("/Script/CoreUObject.Class'/Script/Caiman.CCharacterPlayer'"));
	if (DefaultPawnRef.Class)
	{
		DefaultPawnClass = DefaultPawnRef.Class;//GameModeBase에 이미 정의 되어있기에 정의 안해도 사용 가능함
	}
	
}
