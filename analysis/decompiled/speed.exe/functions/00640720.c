/* speed.exe 00640720 FUN_00640720; analysis pseudocode, not buildable source.
 * calls 00621a00 FUN_00621a00
 * calls 0061fc10 FUN_0061fc10
 * calls 005dae20 FUN_005dae20
 * calls 005daec0 FUN_005daec0
 */

void FUN_00640720(undefined4 param_1)

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
  puStack_8 = &LAB_00879738;
  local_c = ExceptionList;
  pcStack_48 = FUN_00638290;
  uStack_4c = param_1;
  local_44 = auStack_50;
  ExceptionList = &local_c;
  FUN_00621a00(auStack_50);
  FUN_005dae20();
  pcStack_48 = (code *)local_40;
  local_4 = 0;
  uStack_4c = 0x640773;
  FUN_0061fc10();
  local_4 = 0xffffffff;
  pcStack_48 = (code *)0x640784;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

