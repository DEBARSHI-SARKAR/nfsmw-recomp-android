/* speed.exe 006233d0 FUN_006233d0; analysis pseudocode, not buildable source.
 * calls 0073c970 FUN_0073c970
 */

undefined4 * __thiscall FUN_006233d0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  param_1[2] = param_2;
  *param_1 = &PTR_LAB_008a7028;
  DAT_008f86e4 = 1;
  local_4 = 0;
  FUN_0073c970(param_1[2]);
  ExceptionList = local_c;
  return param_1;
}

