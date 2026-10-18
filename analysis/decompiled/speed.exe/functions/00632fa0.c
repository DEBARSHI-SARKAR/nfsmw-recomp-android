/* speed.exe 00632fa0 FUN_00632fa0; analysis pseudocode, not buildable source.
 * calls 0061fc10 FUN_0061fc10
 * calls 005dba70 FUN_005dba70
 * calls 005dae20 FUN_005dae20
 * calls 005daec0 FUN_005daec0
 */

void FUN_00632fa0(undefined4 param_1)

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
  puStack_8 = &LAB_008787e8;
  local_c = ExceptionList;
  puStack_48 = &LAB_00626230;
  uStack_4c = param_1;
  local_44 = auStack_50;
  ExceptionList = &local_c;
  FUN_005dba70(auStack_50);
  FUN_005dae20();
  puStack_48 = local_40;
  local_4 = 0;
  uStack_4c = 0x632ff3;
  FUN_0061fc10();
  local_4 = 0xffffffff;
  puStack_48 = (undefined1 *)0x633004;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

