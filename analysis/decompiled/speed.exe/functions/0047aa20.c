/* speed.exe 0047aa20 FUN_0047aa20; analysis pseudocode, not buildable source.
 * calls 00470890 FUN_00470890
 * calls 004745e0 FUN_004745e0
 */

undefined4 * __thiscall
FUN_0047aa20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470890(param_2,6);
  param_1[0x28] = param_3;
  *param_1 = &PTR_LAB_00894d10;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined2 *)((int)param_1 + 0xce) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x34) = param_4;
  param_1[0x35] = 0;
  FUN_004745e0();
  ExceptionList = local_c;
  return param_1;
}

