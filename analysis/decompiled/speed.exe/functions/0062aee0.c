/* speed.exe 0062aee0 FUN_0062aee0; analysis pseudocode, not buildable source.
 * calls 0061fc10 FUN_0061fc10
 * calls 005dae20 FUN_005dae20
 * calls 00405b70 FUN_00405b70
 * calls 005daec0 FUN_005daec0
 */

void FUN_0062aee0(undefined4 param_1)

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
  puStack_8 = &LAB_00877898;
  local_c = ExceptionList;
  pcStack_48 = FUN_00620d30;
  uStack_4c = param_1;
  local_44 = auStack_50;
  ExceptionList = &local_c;
  FUN_00405b70(auStack_50);
  FUN_005dae20();
  pcStack_48 = (code *)local_40;
  local_4 = 0;
  uStack_4c = 0x62af33;
  FUN_0061fc10();
  local_4 = 0xffffffff;
  pcStack_48 = (code *)0x62af44;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

