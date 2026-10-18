/* speed.exe 004dc360 FUN_004dc360; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dc360(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cb9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1[4] != 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1[4] + 0x3c) = 1;
  }
  local_10 = param_1;
  FUN_004b8db0(param_1);
  piVar2 = (int *)FUN_00831667(0x6c);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1[6] + 0xd8) + 0x94);
    iVar4 = param_1[0xb];
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (99 < iVar3) {
      iVar3 = 99;
    }
    piVar1 = piVar2 + 1;
    *piVar1 = iVar3;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (2 < iVar4) {
      iVar4 = 2;
    }
    piVar2[0xd] = iVar4;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    local_10 = piVar2;
    iVar3 = FUN_00831a8a(&DAT_00914824,piVar1,piVar2);
    if (iVar3 < 0) {
      FUN_0083198b(&PTR_DAT_008f0248);
      FUN_00831a8a(&DAT_00914824,piVar1,piVar2);
    }
  }
  local_4 = 0xffffffff;
  param_1[10] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    _DAT_00914318 = (int *)0x0;
    ExceptionList = local_c;
    return;
  }
  local_10 = (int *)0x0;
  if (*piVar2 != 0) {
    FUN_008311aa(&local_10);
  }
  _DAT_00914318 = local_10;
  ExceptionList = local_c;
  return;
}

