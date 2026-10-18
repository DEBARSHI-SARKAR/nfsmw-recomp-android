/* speed.exe 005b0fc0 FUN_005b0fc0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_005b0fc0(undefined4 *param_1,ushort param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  *(ushort *)(param_1 + 3) = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a2ca4;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[5] = 0;
  pvVar1 = _malloc((uint)param_2 << 5);
  param_1[5] = pvVar1;
  param_1[4] = 0;
  ExceptionList = local_c;
  return param_1;
}

