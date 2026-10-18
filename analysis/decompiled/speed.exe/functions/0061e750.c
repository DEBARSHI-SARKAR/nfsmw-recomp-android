/* speed.exe 0061e750 FUN_0061e750; analysis pseudocode, not buildable source.
 * calls 0061a470 FUN_0061a470
 * calls 0061adf0 FUN_0061adf0
 * calls 0061ae80 FUN_0061ae80
 * calls 0061b1a0 FUN_0061b1a0
 * calls 0061cfd0 FUN_0061cfd0
 * calls 0061a7f0 FUN_0061a7f0
 * calls 0061a8f0 FUN_0061a8f0
 * calls 0061aa70 FUN_0061aa70
 * calls 0061a270 FUN_0061a270
 * calls 0061ced0 FUN_0061ced0
 * calls 0061a870 FUN_0061a870
 * calls 0061ba60 FUN_0061ba60
 * calls 0061a670 FUN_0061a670
 * calls 0061af60 FUN_0061af60
 * calls 0061a9f0 FUN_0061a9f0
 * calls 0061ad70 FUN_0061ad70
 * calls 0061aef0 FUN_0061aef0
 * calls 0061d0d0 FUN_0061d0d0
 * calls 0061cd50 FUN_0061cd50
 * calls 0061a5f0 FUN_0061a5f0
 * calls 0061a770 FUN_0061a770
 * calls 0061b0b0 FUN_0061b0b0
 * calls 0061ce50 FUN_0061ce50
 * calls 0061a6f0 FUN_0061a6f0
 * calls 0061d050 FUN_0061d050
 * calls 0061b120 FUN_0061b120
 * calls 0061a570 FUN_0061a570
 * calls 0061a3f0 FUN_0061a3f0
 * calls 0061ac70 FUN_0061ac70
 * calls 0061b040 FUN_0061b040
 * calls 0061afd0 FUN_0061afd0
 * calls 0061acf0 FUN_0061acf0
 * calls 0061aaf0 FUN_0061aaf0
 * calls 0061cf50 FUN_0061cf50
 * calls 0061a4f0 FUN_0061a4f0
 * calls 0061a970 FUN_0061a970
 * calls 0061ab70 FUN_0061ab70
 * calls 0061bae0 FUN_0061bae0
 * calls 0061a370 FUN_0061a370
 * calls 0061d1d0 FUN_0061d1d0
 * calls 0061abf0 FUN_0061abf0
 * calls 0061cdd0 FUN_0061cdd0
 * calls 0061d150 FUN_0061d150
 * calls 0061a2f0 FUN_0061a2f0
 */

void FUN_0061e750(void)

{
  FUN_0061ba60("Randomize",FUN_00618ac0);
  FUN_0061a270(&DAT_008a5368,&LAB_006048a0);
  FUN_0061a270("Suspend",&LAB_006048d0);
  FUN_0061cd50("SetFlag",FUN_006048e0);
  FUN_0061a2f0("IsCopSpeechPlaying",&LAB_00604a00);
  FUN_0061a270("AddEngagedRace",&LAB_00604b50);
  FUN_0061a370("GetNumChallengesPassed",&LAB_00604a10);
  FUN_0061a370("GetNumRacesWon",&LAB_00604a30);
  FUN_0061a370("RandomInt",&LAB_00604cb0);
  FUN_0061cdd0("SetGenericCamera",FUN_00604a50);
  FUN_0061ce50(&DAT_008a52b4,&LAB_00604b80);
  FUN_0061bae0("PlayHackE3FMV",&DAT_00604c60);
  FUN_0061ced0("Print",&LAB_00604c70);
  FUN_0061a270("PrintInstance",&LAB_00604c80);
  FUN_0061cf50("ShowScreenMessage",&LAB_006121c0);
  FUN_0061a270("SetRaceCompleteForFE",&DAT_00604c90);
  FUN_0061a270("StorePursuitRepForFE",&DAT_00604ca0);
  FUN_0061ced0("ShowMessage",FUN_00611320);
  FUN_0061a3f0("ShowTimeExtension",FUN_006113e0);
  FUN_0061a470("SabotageEngine",&LAB_0060ab60);
  FUN_0061a4f0("BlowEngine",&LAB_0060ab30);
  FUN_0061a4f0("DetachCameraFromRacer",&LAB_00611540);
  FUN_0061a4f0("ChallengeComplete",&LAB_0060e200);
  FUN_0061a570("ClearAIControl",&LAB_00612420);
  FUN_0061a570("ForceAIControl",&LAB_006123b0);
  FUN_0061a270("InitRacers",&LAB_0061dbe0);
  FUN_0061a270("WarpPlayerToTrigger",&LAB_00611570);
  FUN_0061a270("ResetTrigger",&LAB_00604d10);
  FUN_0061a270("SetPlayerStartPosition",FUN_00611670);
  FUN_0061a5f0("SetRacerGoal",FUN_00611700);
  FUN_0061a670("SetRacerLapsLeft",&LAB_00604db0);
  FUN_0061a4f0("KnockoutRacer",FUN_00611440);
  FUN_0061a4f0("TotalRacer",FUN_00611440);
  FUN_0061a6f0("NotifyRacePlacement",FUN_0060aa00);
  FUN_0061a770("NotifySpeedTrapTriggered",FUN_0060a7b0);
  FUN_0061a7f0("NotifyCheckpointReached",FUN_006117f0);
  FUN_0061a7f0("NotifyLapFinished",FUN_00611850);
  FUN_0061a4f0("NotifyRaceFinished",&LAB_006119f0);
  FUN_0061a270("SetRaceActivity",&LAB_00604ed0);
  FUN_0061a270("StartRace",FUN_0060dbd0);
  FUN_0061bae0("StartRaceTimers",&LAB_00604ef0);
  FUN_0061bae0("SaveStartPositions",&LAB_00604e90);
  FUN_0061bae0("RestoreStartPositions",&LAB_0060aa50);
  FUN_0061bae0("EnterPostRaceFlow",&LAB_00611f20);
  FUN_0061a2f0("ShowOnlinePostRaceScreen",FUN_00605690);
  FUN_0061a870("SetCopsEnabled",FUN_00604f40);
  FUN_0061bae0("NoNewPursuitsOrCops",&LAB_0060aab0);
  FUN_0061a570("ForcePursuitStart",&LAB_0060aac0);
  FUN_0061a270("EnterEngagableTrigger",FUN_00604f80);
  FUN_0061a270("ExitEngagableTrigger",FUN_00604fd0);
  FUN_0061cfd0("EnterGateZone",&LAB_00611fb0);
  FUN_0061cfd0("ExitGateZone",&LAB_00611ff0);
  FUN_0061bae0("ShowRaceOverSummary",FUN_006120c0);
  FUN_0061bae0("HideRaceOverSummary",&DAT_00605020);
  FUN_0061a8f0("SetTrafficSpeed",&LAB_00605090);
  FUN_0061d050("SpawnCop",FUN_0060a670);
  FUN_0061a970("SpawnCharacter",FUN_00604d40);
  FUN_0061a270("UnspawnCharacter",&LAB_00604da0);
  FUN_0061cfd0("SendCharacterStimulus",&LAB_0060a6e0);
  FUN_0061a270("JackKnife",&LAB_00605030);
  FUN_0061a870("SetAllStaging",&LAB_0060df70);
  FUN_0061bae0("ShowPauseMenu",FUN_006050f0);
  FUN_0061a470("AwardCash",&DAT_00612130);
  FUN_0061a470("AwardPoints",FUN_0060e030);
  FUN_0061bae0("ChallengeCompleted",FUN_00605140);
  FUN_0061a270("UnlockRace",&LAB_00612140);
  FUN_0061bae0("NotifyCountdownDone",&LAB_0060e160);
  FUN_0061bae0("ResetCopsForRestart",&LAB_0060ab10);
  FUN_0061a270("ShowTriggerIcon",&LAB_00604d20);
  FUN_0061a270("HideTriggerIcon",&LAB_00604d30);
  FUN_0061a270("WarpToMarkerWhenRoaming",&LAB_00605930);
  FUN_0061a270("DoSpecialFinalization",&LAB_00605890);
  FUN_0061a9f0("IsActiveSpeedTrap",&LAB_00611e80);
  FUN_0061a9f0("IsActiveMenuGate",&LAB_00604e40);
  FUN_0061aa70("GetSimTime",&LAB_00604cd0);
  FUN_0061aaf0("GetRacerIndex",FUN_0060dae0);
  FUN_0061d0d0("GetRacerElement",&LAB_0060db60);
  FUN_0061d0d0("GetPlayerElement",&LAB_00612370);
  FUN_0061d150("GetRacerCharacter",&LAB_00604de0);
  FUN_0061ab70("GetNumRacers",&LAB_00604e00);
  FUN_0061abf0("GetSimableSpeedKmh",&LAB_00604e10);
  FUN_0061ac70("RacerIsHuman",&LAB_00611e20);
  FUN_0061acf0("PlayerIsLocal",&LAB_0060a760);
  FUN_0061a9f0("IsRaceCompleted",&LAB_006051b0);
  FUN_0061a9f0("IsRaceUnlocked",&LAB_00605170);
  FUN_0061a2f0("IsOnlineGame",&LAB_00605460);
  FUN_0061a2f0("IsLANGame",&LAB_00605480);
  FUN_0061a2f0("AllRacersDone",&LAB_006051f0);
  FUN_0061a2f0("AllHumanPlayersDone",&LAB_0060e0a0);
  FUN_0061ad70("SimableDistance",&LAB_0060ab90);
  FUN_0061ad70("SimableAngle",&LAB_006053b0);
  FUN_0061a2f0("AllowEngageEvents",&LAB_00605640);
  FUN_0061a2f0("AllowMenuGates",&LAB_00605650);
  FUN_0061a2f0("AllowEngageSafehouse",&LAB_00605660);
  FUN_0061a9f0("DoSpecialSetup",&LAB_00605830);
  FUN_0061a2f0("IsNextGen",&LAB_00604cc0);
  FUN_0061adf0(DAT_0091e000,"GRaceStatus");
  FUN_0061ae80("ClearRacers",FUN_005e30a0,0);
  FUN_0061aef0("AddRacer",FUN_00601f90,0);
  FUN_0061af60("AddAvailableEventToMap",&DAT_005dbf20,0);
  FUN_0061aef0("AddSpeedTrapToMap",&DAT_005dbf30,0);
  FUN_0061ae80("ClearCheckpoints",FUN_005eeb40,0);
  FUN_0061aef0("AddCheckpoint",&LAB_005f5c20,0);
  FUN_0061aef0("SetNextCheckpointPos",FUN_005fe660,0);
  FUN_0061ae80("SetRoaming",FUN_005fe3e0,0);
  FUN_0061afd0("SetIsLoading",&LAB_005db3e0,0);
  FUN_0061ae80("EnterSuddenDeath",&LAB_00604030,0);
  FUN_0061b040("AwardBonusTime",FUN_005fe600,0);
  FUN_0061afd0("SetActivelyRacing",&LAB_00604050,0);
  FUN_0061b040("SetTaskTime",&LAB_00604040,0);
  FUN_0061ae80("DisableBarriers",&LAB_005dbf00,0);
  FUN_0061ae80("EnableBinBarriers",&LAB_005e3020,0);
  FUN_0061ae80("NotifyScriptWhenLoaded",&LAB_005eea60,0);
  FUN_0061afd0("SetHasBeenWon",&LAB_00604080,0);
  FUN_0061ab70("GetPlayerBounty",&LAB_00612300);
  FUN_0061a570("AwardPlayerBounty",FUN_00612220);
  FUN_0061bae0("JumpToCarLot",FUN_00605250);
  FUN_0061bae0("AbandonRace",FUN_0060deb0);
  FUN_0061bae0("JumpToSafeHouse",FUN_006052b0);
  FUN_0061b0b0("IsPlayer",&LAB_00609f10,0);
  FUN_0061cf50("SetTimer",&LAB_00605300);
  FUN_0061ced0("KillTimer",&LAB_00605320);
  FUN_0061a870("ShowGPS",&LAB_00605340);
  FUN_0061b120("NavigatePlayerTo",&LAB_00605360);
  FUN_0061d1d0("Assert",&DAT_00605410);
  FUN_0061a270("NotifyActivityFinsihed",FUN_00605420);
  FUN_0061a2f0("SkipCareerIntro",&LAB_00612490);
  FUN_0061a3f0("SetChanceOfRain",&LAB_006054a0);
  FUN_0061bae0(&DAT_008a4a90,FUN_00605500);
  FUN_0061bae0("IntroduceRival",&DAT_00605550);
  FUN_0061bae0("PlayTutorial",&LAB_006124e0);
  FUN_0061a270("DoSafeHouseIntro",&LAB_00605560);
  FUN_0061a270("DoZoneMenuAction",&LAB_00612030);
  FUN_0061a9f0("SetCurrentTimeOfDay",&LAB_00605780);
  FUN_0061a270("ReloadWorld",FUN_006057e0);
  FUN_0061a2f0("IsCareerMode",&LAB_00605610);
  FUN_0061a2f0("IsSplitScreen",&LAB_00605630);
  FUN_0061bae0("SetHasRapSheet",&LAB_00605670);
  FUN_0061a3f0("SetWorldHeat",&LAB_00612660);
  FUN_0061bae0("ShowWinningPostRaceScreen",&LAB_0060e240);
  FUN_0061bae0("ShowLosingPostRaceScreen",&LAB_0060e230);
  FUN_0061bae0("PreventPlayerBeingBusted",&LAB_0060ae00);
  FUN_0061b1a0("CalculateRanking",&LAB_006058b0);
  return;
}

