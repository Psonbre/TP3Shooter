#pragma once

#include "CoreMinimal.h"
#include "../TP3ShootCharacter.h"
#include "MyAICharacter.generated.h"

UCLASS()
class TP3SHOOT_API AMyAICharacter : public ATP3ShootCharacter
{
	GENERATED_BODY()
	
public :
	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, Category = "AI")
	class UBlackboardData* Blackboard;
};
