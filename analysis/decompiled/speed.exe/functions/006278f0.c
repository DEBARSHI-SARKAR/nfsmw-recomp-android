/* speed.exe 006278f0 FUN_006278f0; analysis pseudocode, not buildable source.
 * calls 005d8660 FUN_005d8660
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006278f0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008777bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(0);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2);
  FUN_005d7930(&LAB_00627880,param_1);
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_008a7a30;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  ExceptionList = local_c;
  return param_1;
}

