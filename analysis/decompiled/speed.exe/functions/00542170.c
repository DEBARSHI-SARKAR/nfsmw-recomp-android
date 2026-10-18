/* speed.exe 00542170 FUN_00542170; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007a0f50 FUN_007a0f50
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0083ed90 FUN_0083ed90
 * calls 00586d40 FUN_00586d40
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_00542170(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086fca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e398;
  local_4 = 2;
  FUN_00586d40();
  if (param_1[0x23b] != 0) {
    FUN_0056c6e0(param_1[0x23b]);
  }
  if (param_1[0x39] != 0) {
    FUN_0083ed90(param_1[0x39]);
  }
  if (*(int *)(DAT_0091cf90 + 0x19c) == 0) {
    FUN_007a0f50();
  }
  piVar1 = (int *)param_1[0x23c];
  while (piVar1 != param_1 + 0x23c) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x23c];
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

