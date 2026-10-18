/* speed.exe 00759080 FUN_00759080; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 007831e0 FUN_007831e0
 * calls 00753650 FUN_00753650
 * calls 006eeb60 FUN_006eeb60
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_00759080(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008810d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b4b7c;
  iVar1 = param_1[4];
  piVar2 = (int *)param_1[5];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  iVar1 = param_1[0xc];
  local_4 = 1;
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    param_1[0xc] = 0;
  }
  FUN_007869c0(0);
  local_4 = local_4 & 0xffffff00;
  FUN_007831e0();
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = local_c;
  return;
}

