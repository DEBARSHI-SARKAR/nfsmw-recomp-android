/* speed.exe 006fc560 FUN_006fc560; analysis pseudocode, not buildable source.
 * calls 00478fc0 FUN_00478fc0
 * calls 005d0370 FUN_005d0370
 * calls 006fc060 FUN_006fc060
 */

void __fastcall FUN_006fc560(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_0087f5fb;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008952f0;
  iVar1 = param_1[3];
  local_4 = 0;
  while (iVar1 != 0) {
    FUN_006fc060(*(undefined4 *)(*(int *)param_1[2] + 8));
    iVar1 = param_1[3];
  }
  local_4 = 0xffffffff;
  FUN_00478fc0();
  if (param_1[2] != 0) {
    FUN_005d0370(param_1[2],0xc,0);
  }
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}

