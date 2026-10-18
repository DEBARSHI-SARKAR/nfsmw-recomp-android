/* speed.exe 0059dac0 FUN_0059dac0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 * calls 005672f0 FUN_005672f0
 * calls 00594310 FUN_00594310
 */

void __fastcall FUN_0059dac0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00873013;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a2040;
  local_4 = 1;
  FUN_005672f0(0,0);
  local_4 = local_4 & 0xffffff00;
  FUN_00594310();
  *param_1 = &PTR_FUN_008a1e80;
  piVar1 = (int *)param_1[2];
  local_4 = 0xffffffff;
  while (piVar1 != param_1 + 2) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)param_1[2];
  }
  ExceptionList = local_c;
  return;
}

