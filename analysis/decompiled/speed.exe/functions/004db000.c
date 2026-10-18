/* speed.exe 004db000 FUN_004db000; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 004cfd10 FUN_004cfd10
 * calls 004b0e30 FUN_004b0e30
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831782 FUN_00831782
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00831682 FUN_00831682
 * calls 00652ad0 _malloc
 * calls 00831a8a FUN_00831a8a
 */

void __thiscall FUN_004db000(int param_1,int param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ca5f;
  local_c = ExceptionList;
  piVar4 = *(int **)(param_1 + 0x40 + param_3 * 4);
  ExceptionList = &local_c;
  if (piVar4 != (int *)0x0) {
    ExceptionList = &local_c;
    if (*piVar4 != 0) {
      ExceptionList = &local_c;
      FUN_00831782();
    }
    FUN_00831682(piVar4);
  }
  iVar5 = *(int *)(param_1 + 0x48 + iVar5 * 4);
  if (iVar5 != 0) {
    FUN_004b0e30();
    thunk_FUN_007c7250(iVar5);
  }
  if (7 < param_2) {
    pvVar2 = _malloc(0x14);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_004cfd10(0x4b41dec8);
      *(undefined4 *)(param_1 + 0x48 + param_3 * 4) = uVar3;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x48 + param_3 * 4) = 0;
    ExceptionList = local_c;
    return;
  }
  FUN_004b8db0(param_1);
  piVar4 = (int *)FUN_00831667(0x30);
  local_4 = 1;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0xf < param_2) {
      param_2 = 0xf;
    }
    piVar1 = piVar4 + 1;
    *piVar1 = param_2;
    piVar4[2] = 0;
    piVar4[3] = 0x1000;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 25000;
    piVar4[9] = 0;
    piVar4[10] = 0x7fff;
    piVar4[0xb] = 0;
    iVar5 = FUN_00831a8a(&DAT_00914a4c,piVar1,piVar4);
    if (iVar5 < 0) {
      FUN_0083198b(&PTR_s_FX_ROADNOISE_008f0278);
      FUN_00831a8a(&DAT_00914a4c,piVar1,piVar4);
    }
  }
  *(int **)(param_1 + 0x40 + param_3 * 4) = piVar4;
  local_4 = 0xffffffff;
  param_3 = 0;
  if (*piVar4 != 0) {
    FUN_008311aa(&param_3);
  }
  ExceptionList = local_c;
  return;
}

