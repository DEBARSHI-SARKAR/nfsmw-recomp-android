/* speed.exe 00549af0 FUN_00549af0; analysis pseudocode, not buildable source.
 * calls 00534260 FUN_00534260
 * calls 00593920 FUN_00593920
 * calls 0078b3f0 FUN_0078b3f0
 * calls 00794790 FUN_00794790
 * calls 0078b3e0 FUN_0078b3e0
 */

undefined4 * __thiscall FUN_00549af0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089dba0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x129) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  FUN_00794790();
  iVar1 = FUN_0078b3e0();
  if (*(int *)(iVar1 + 0x80) == 0) {
    FUN_00794790();
    FUN_0078b3f0();
  }
  FUN_00534260();
  ExceptionList = local_c;
  return param_1;
}

