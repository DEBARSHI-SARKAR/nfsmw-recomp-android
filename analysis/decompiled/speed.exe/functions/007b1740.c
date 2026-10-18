/* speed.exe 007b1740 FUN_007b1740; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 */

void FUN_007b1740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008830f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x54);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(param_2,param_3,param_4);
    *puVar1 = &PTR_FUN_008b7570;
    puVar1[0x13] = param_1;
    puVar1[0x14] = param_5;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar1);
  *(undefined1 *)((int)puVar1 + 0x22) = param_6;
  ExceptionList = local_c;
  return;
}

