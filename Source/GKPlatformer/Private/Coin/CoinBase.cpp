


#include "Coin/CoinBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ACoinBase::ACoinBase()
{
	Collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	RootComponent = Collider;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);
	
}


void ACoinBase::BeginPlay()
{
	Super::BeginPlay();

	Collider->OnComponentBeginOverlap.AddDynamic(this, &ACoinBase::HandleOnCoinDestroy);
}


void ACoinBase::HandleOnCoinDestroy(UPrimitiveComponent* PrimitiveComponent, AActor* Actor,
	UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult)
{
	Destroy();
}




