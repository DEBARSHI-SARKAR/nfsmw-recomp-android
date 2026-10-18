/* speed.exe 00632ea0 FUN_00632ea0; analysis pseudocode, not buildable source.
 * calls 005107c0 FUN_005107c0
 * calls 0061fc10 FUN_0061fc10
 * calls 005dae20 FUN_005dae20
 * calls 005daec0 FUN_005daec0
 */

void FUN_00632ea0(undefined4 param_1)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *local_44;
  undefined1 local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008787a8;
  local_c = ExceptionList;
  puStack_48 = &LAB_006261a0;
  uStack_4c = param_1;
  local_44 = auStack_50;
  ExceptionList = &local_c;
  FUN_005107c0(auStack_50);
  FUN_005dae20();
  puStack_48 = local_40;
  local_4 = 0;
  uStack_4c = 0x632ef3;
  FUN_0061fc10();
  local_4 = 0xffffffff;
  puStack_48 = (undefined1 *)0x632f04;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

