// ShootThemUp Game All Rights Reserved

#include "STUGameModeBase.h"
#include "Player/STUPlayerController.h"
#include "Player/STUBaseCharacter.h"
#include "UI/STUGameHUD.h"

ASTUGameModeBase::ASTUGameModeBase() 
{
    DefaultPawnClass = ASTUBaseCharacter::StaticClass();
    PlayerControllerClass = ASTUPlayerController::StaticClass();
    HUDClass = ASTUGameHUD::StaticClass();
}