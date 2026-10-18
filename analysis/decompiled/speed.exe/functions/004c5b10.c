/* speed.exe 004c5b10 FUN_004c5b10; analysis pseudocode, not buildable source.
 * calls 004b1110 FUN_004b1110
 * calls 004c59d0 FUN_004c59d0
 */

undefined4 * __fastcall FUN_004c5b10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086bd08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c59d0();
  local_4 = 0;
  *param_1 = &PTR_FUN_00896d2c;
  FUN_004b1110();
  param_1[0x23] = 2;
  param_1[0x24] = 2;
  param_1[0x34] = 0;
  param_1[0x9e] = 0;
  *(undefined2 *)(param_1 + 0x9d) = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x269) = 0;
  ExceptionList = local_c;
  return param_1;
}

