/* speed.exe 006656a0 FUN_006656a0; analysis pseudocode, not buildable source.
 * calls 0065cfa0 FUN_0065cfa0
 * calls 0065cab0 FUN_0065cab0
 */

undefined4 * __fastcall FUN_006656a0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a3b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0065cab0(0x180);
  local_4 = 0;
  iVar1 = FUN_0065cfa0();
  param_1[5] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  *(undefined4 *)param_1[5] = param_1[5];
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  param_1[6] = 0;
  ExceptionList = local_c;
  return param_1;
}

