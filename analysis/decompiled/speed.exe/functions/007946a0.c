/* speed.exe 007946a0 FUN_007946a0; analysis pseudocode, not buildable source.
 * calls 0078e7d0 FUN_0078e7d0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00793b50 FUN_00793b50
 * calls 00527f80 FUN_00527f80
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_007946a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008826b3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00793b50();
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x8a] = 0;
  FUN_0078e7d0();
  FUN_0078e7d0();
  *(undefined1 *)(param_1 + 0x8b) = 0;
  FUN_004655f0(param_1[0x8c]);
  param_1[0x8c] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00527f80();
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    piVar1 = (int *)*param_1;
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*param_1;
  }
  ExceptionList = local_c;
  return;
}

