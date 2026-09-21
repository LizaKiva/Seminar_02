#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "InteractableActor.generated.h"

//DECLARE_DELEGATE(FOnInteracted);
//DECLARE_MULTICAST_DELEGATE(FOnInteracted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteracted);


UCLASS()
class SEMINAR_02_API AInteractableActor : public AActor {
  GENERATED_BODY()

public:
  AInteractableActor();

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void Interact();

  UPROPERTY(BlueprintAssignable, Category = "Interaction")
  FOnInteracted OnInteracted;

protected:

  virtual void Interact_Implementation();

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
  FString InteractionName;
  
};
