/* speed.exe 00756740 FUN_00756740; analysis pseudocode, not buildable source.
 * calls 007831e0 FUN_007831e0
 * calls 00753650 FUN_00753650
 * calls 006eeb60 FUN_006eeb60
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_00756740(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00880fb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b4be0;
  iVar1 = param_1[4];
  piVar2 = (int *)param_1[5];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  local_4 = 1;
  if (param_1[0xb] != -1) {
    param_1[0xb] = 0xffffffff;
  }
  if (param_1[0x30] != 0) {
    thunk_FUN_007c7250(param_1[0x30]);
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    param_1[0xe] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_007831e0();
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = local_c;
  return;
}

