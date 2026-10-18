/* speed.exe 005864b0 FUN_005864b0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 */

bool __fastcall FUN_005864b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
  iVar2 = FUN_00573140("EA_TRAX_JUKEBOX.FNG");
  iVar3 = FUN_00573140("MC_MAIN.FNG");
  iVar4 = FUN_00573140("FEANYMOVIE.FNG");
  iVar5 = FUN_00573140("LS_PSA.FNG");
  iVar6 = FUN_00573140("LS_EALOGO.FNG");
  iVar7 = FUN_00573140("MW_LS_ATTRACTFMV.FNG");
  iVar8 = FUN_00573140("MW_LS_SPLASH.FNG");
  iVar9 = FUN_00573140("LOADING.FNG");
  return iVar1 != iVar9 &&
         ((((((iVar1 != iVar2 && iVar1 != iVar3) && iVar1 != iVar4) && iVar1 != iVar5) &&
           iVar1 != iVar6) && iVar1 != iVar7) && iVar1 != iVar8);
}

