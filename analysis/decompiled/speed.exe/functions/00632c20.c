/* speed.exe 00632c20 FUN_00632c20; analysis pseudocode, not buildable source.
 * calls 0061fc10 FUN_0061fc10
 * calls 005dae20 FUN_005dae20
 * calls 006047a0 FUN_006047a0
 * calls 005daec0 FUN_005daec0
 */

void FUN_00632c20(undefined4 param_1)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  code *pcStack_48;
  undefined1 *local_44;
  undefined1 local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878708;
  local_c = ExceptionList;
  pcStack_48 = FUN_00625fc0;
  uStack_4c = param_1;
  local_44 = auStack_50;
  ExceptionList = &local_c;
  FUN_006047a0(auStack_50);
  FUN_005dae20();
  pcStack_48 = (code *)local_40;
  local_4 = 0;
  uStack_4c = 0x632c73;
  FUN_0061fc10();
  local_4 = 0xffffffff;
  pcStack_48 = (code *)0x632c84;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

