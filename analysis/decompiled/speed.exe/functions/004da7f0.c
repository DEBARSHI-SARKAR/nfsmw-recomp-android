/* speed.exe 004da7f0 FUN_004da7f0; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004da7f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ca09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1[4] != 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1[4] + 0x3c) = 1;
  }
  local_10 = param_1;
  FUN_004b8db0(param_1);
  piVar3 = (int *)FUN_00831667(0x30);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1[6] + 0xd8) + 0x94);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (100 < iVar4) {
      iVar4 = 100;
    }
    piVar1 = piVar3 + 1;
    *piVar1 = iVar4;
    piVar3[2] = (int)param_1;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;
    local_10 = piVar3;
    iVar4 = FUN_00831a8a(&DAT_0091485c,piVar1,piVar3);
    if (iVar4 < 0) {
      FUN_0083198b(&PTR_s_CAR_Sputter_008f0268);
      FUN_00831a8a(&DAT_0091485c,piVar1,piVar3);
    }
  }
  uVar2 = DAT_00914ab8 & 1;
  param_1[0xb] = (int)piVar3;
  if (uVar2 == 0) {
    DAT_00914ab8 = DAT_00914ab8 | 1;
    local_4 = 1;
    local_10 = (int *)0x0;
    if (*piVar3 != 0) {
      FUN_008311aa(&local_10);
    }
    _DAT_00914ab4 = local_10;
  }
  ExceptionList = local_c;
  return;
}

