/* speed.exe 007b7940 FUN_007b7940; analysis pseudocode, not buildable source.
 * calls 00586fa0 FUN_00586fa0
 * calls 007af4f0 FUN_007af4f0
 */

undefined4 * __thiscall
FUN_007b7940(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008833b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586fa0(param_3,param_4,0);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = param_1 + 0x16;
  *param_1 = &PTR_FUN_008b7d4c;
  param_1[0x15] = param_2;
  *puVar1 = puVar1;
  param_1[0x17] = puVar1;
  local_4 = 1;
  param_1[0x18] = 0;
  FUN_007af4f0(param_1[0x15],puVar1,0);
  ExceptionList = local_c;
  return param_1;
}

