/* speed.exe 0065c540 FUN_0065c540; analysis pseudocode, not buildable source.
 * calls 006539d0 FUN_006539d0
 */

undefined4 * __thiscall FUN_0065c540(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = 4;
  *(char *)((int)param_1 + 5) = (char)param_2;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a8aac;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_006539d0(param_2);
  ExceptionList = local_c;
  return param_1;
}

