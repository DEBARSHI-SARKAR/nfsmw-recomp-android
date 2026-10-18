/* speed.exe 007c2990 FUN_007c2990; analysis pseudocode, not buildable source.
 * calls 007bfbd0 FUN_007bfbd0
 * calls 007b5a50 FUN_007b5a50
 * calls 007bb3e0 FUN_007bb3e0
 */

undefined4 * __thiscall FUN_007c2990(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883ad8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bb3e0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b8054;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  FUN_007bfbd0();
  FUN_007b5a50();
  ExceptionList = pvStack_c;
  return param_1;
}

