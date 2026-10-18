/* speed.exe 006f7950 FUN_006f7950; analysis pseudocode, not buildable source.
 * calls 006efa70 FUN_006efa70
 */

undefined4 * __fastcall FUN_006f7950(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ed36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b0718;
  param_1[0x11f5] = 0;
  param_1[0x11f6] = 0;
  param_1[0x11f7] = 0;
  param_1[0x11f4] = &PTR_FUN_008b0718;
  local_4 = 1;
  FUN_006efa70(0x8f8);
  FUN_006efa70(0x8f8);
  ExceptionList = local_c;
  return param_1;
}

