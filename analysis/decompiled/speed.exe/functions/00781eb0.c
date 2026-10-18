/* speed.exe 00781eb0 FUN_00781eb0; analysis pseudocode, not buildable source.
 * calls 006eeb60 FUN_006eeb60
 * calls 00781e10 FUN_00781e10
 */

void __fastcall FUN_00781eb0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5d84;
  local_4 = 0;
  FUN_00781e10(param_1[6]);
  piVar1 = (int *)param_1[5];
  iVar2 = param_1[4];
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = local_c;
  return;
}

