// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAICharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIController.h"

void AMyAICharacter::BeginPlay()
{
    Super::BeginPlay();

    AAIController* AIController = Cast<AAIController>(GetController());

    if (AIController && BehaviorTree && Blackboard)
    {
        AIController->RunBehaviorTree(BehaviorTree);
        AIController->GetBlackboardComponent()->InitializeBlackboard(*Blackboard);
    }
}
