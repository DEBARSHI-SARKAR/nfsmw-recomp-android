/* speed.exe 005302c0 FUN_005302c0; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 007a2940 FUN_007a2940
 * calls 00517250 FUN_00517250
 * calls 0056c5b0 FUN_0056c5b0
 * calls 005302c0 FUN_005302c0
 * calls 00627400 FUN_00627400
 * calls 00654af0 FUN_00654af0
 * calls 00517230 FUN_00517230
 * calls 00624360 FUN_00624360
 * calls 005117c0 FUN_005117c0
 * calls 00460ca0 FUN_00460ca0
 * calls 005184d0 FUN_005184d0
 * calls 004fb000 FUN_004fb000
 * calls 005258b0 FUN_005258b0
 * calls 00527940 FUN_00527940
 * calls 00525940 FUN_00525940
 * calls 004647e0 FUN_004647e0
 */

void __fastcall FUN_005302c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f57f;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 4) + 1;
  ExceptionList = &local_c;
  *(int *)(param_1 + 4) = iVar3;
  if (iVar3 == 5) {
    FUN_004647e0(local_4c,0x40,"blacklist_%02d");
    FUN_00460ca0(s_unknown_008f3750,local_4c,0x40);
    cVar1 = FUN_004fb000();
    pcVar4 = "WS_FEAnyMovie.fng";
    if (cVar1 == '\0') {
      pcVar4 = "FEAnyMovie.fng";
    }
  }
  else {
    if (iVar3 == 6) {
      cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
      if (cVar1 == '\x0f') {
        *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xfffdffff;
        *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 1;
        FUN_007a2940();
        *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) =
             *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) | 0x20;
        FUN_005258b0();
        FUN_005257f0("SafeHouseReputationOverview.fng",0,0);
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        ExceptionList = local_c;
        return;
      }
      if (((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 4 & 1) == 0) && (cVar1 == '\r')) {
        *(undefined4 *)(param_1 + 4) = 5;
        *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) =
             *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) | 0x10;
        FUN_00517230();
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = FUN_00517250(0,0);
        FUN_00525940(uVar2,uVar5,uVar6);
        ExceptionList = local_c;
        return;
      }
      FUN_0056c5b0();
      ExceptionList = local_c;
      return;
    }
    if (iVar3 == 7) {
      FUN_005117c0();
      FUN_00654af0();
      iVar3 = FUN_00627400();
      local_4 = 0;
      if (iVar3 != 0) {
        FUN_00624360();
      }
      *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xfffdffff;
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      ExceptionList = local_c;
      return;
    }
    if (iVar3 == 2) {
      cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
      pcVar4 = PTR_s_SafeHouseRegionUnlock_fng_008f3234;
      if ((cVar1 != '\b') && (cVar1 != '\f')) {
LAB_005304d1:
        FUN_005302c0();
        ExceptionList = local_c;
        return;
      }
    }
    else {
      if (iVar3 == 3) {
        cVar1 = FUN_005184d0();
        if (cVar1 != '\0') {
          FUN_00527940(0,(&PTR_s_SafeHouseMarkers_fng_008f3230)[*(int *)(param_1 + 4)],0x4000b2,0,0,
                       0);
          ExceptionList = local_c;
          return;
        }
        goto LAB_005304d1;
      }
      pcVar4 = (&PTR_s_SafeHouseRivalChallenge_fng_008f322c)[iVar3];
    }
  }
  FUN_00525940(pcVar4,0,0);
  ExceptionList = local_c;
  return;
}

