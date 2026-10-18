/* speed.exe 00633620 FUN_00633620; analysis pseudocode, not buildable source.
 * calls 0061fc10 FUN_0061fc10
 * calls 005dae20 FUN_005dae20
 * calls 005db6f0 FUN_005db6f0
 * calls 005daec0 FUN_005daec0
 */

void FUN_00633620(undefined4 param_1)

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
  puStack_8 = &LAB_00878988;
  local_c = ExceptionList;
  puStack_48 = &LAB_00626940;
  uStack_4c = param_1;
  local_44 = auStack_50;
  ExceptionList = &local_c;
  FUN_005db6f0(auStack_50);
  FUN_005dae20();
  puStack_48 = local_40;
  local_4 = 0;
  uStack_4c = 0x633673;
  FUN_0061fc10();
  local_4 = 0xffffffff;
  puStack_48 = (undefined1 *)0x633684;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

