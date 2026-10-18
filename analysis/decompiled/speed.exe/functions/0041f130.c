/* speed.exe 0041f130 FUN_0041f130; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 00405b20 FUN_00405b20
 * calls 005cc240 FUN_005cc240
 * calls 0041ecd0 FUN_0041ecd0
 * calls 005d59f0 FUN_005d59f0
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 * calls 0041ae90 FUN_0041ae90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0041f130(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined **local_24;
  
  iVar5 = 0;
  switch(*(undefined4 *)*param_2) {
  case 1:
    local_24 = &PTR_s_AIGoalPursuit_008eb1b0;
    iVar5 = 1;
    break;
  case 2:
    local_24 = &PTR_s_AIGoalPursuit_008eb1b4;
    iVar5 = 2;
    break;
  case 3:
    local_24 = &PTR_s_AIGoalHeadOnRam_008eb1bc;
    iVar5 = 2;
    break;
  case 4:
    local_24 = &PTR_s_AIGoalStaticRoadBlock_008eb1c4;
    iVar5 = 4;
  }
  for (iVar4 = param_2[5]; iVar4 < iVar5; iVar4 = iVar4 + 1) {
    FUN_006ed200();
    FUN_00627320();
    iVar1 = FUN_0041ecd0();
    if (iVar1 == 0) break;
    if ((uint)param_2[4] <= (uint)param_2[5]) {
      (**(code **)(param_2[2] + 0xc))();
      FUN_0041ae90();
    }
    piVar2 = (int *)(param_2[3] + param_2[5] * 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
    }
    param_2[5] = param_2[5] + 1;
    piVar2 = (int *)FUN_005d59f0();
    if (piVar2 != (int *)0x0) {
      FUN_005cc240(local_24[iVar4]);
      (**(code **)(*piVar2 + 0x84))();
    }
    if ((*(int *)*param_2 == 3) &&
       (*(undefined4 *)(param_1 + 0xb0) = 0x40400000, iVar4 == iVar5 + -1)) {
      uVar3 = FUN_005cc240();
      iVar1 = FUN_00405b20();
      *(undefined4 *)(iVar1 + 4) = uVar3;
      FUN_0065faf0();
    }
  }
  if ((*(float *)(param_1 + 0xb0) < _DAT_00890968) && (iVar4 == iVar5)) {
    return 1;
  }
  return 0;
}

