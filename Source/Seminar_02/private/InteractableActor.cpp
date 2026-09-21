#include "../public/InteractableActor.h"

AInteractableActor::AInteractableActor() {
  
  PrimaryActorTick.bCanEverTick = false;

  InteractionName = TEXT("InteractableActor");
}

void AInteractableActor::Interact_Implementation() {
  UE_LOG(
    LogTemp,
    Warning,
    TEXT("Default Interaction %s"),
    *InteractionName);

  OnInteracted.Broadcast();
}





