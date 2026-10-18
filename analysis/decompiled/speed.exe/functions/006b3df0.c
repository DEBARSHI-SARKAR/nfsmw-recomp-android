/* speed.exe 006b3df0 FUN_006b3df0; analysis pseudocode, not buildable source.
 * calls 006a0180 FUN_006a0180
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_006b3df0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087d431;
  local_c = ExceptionList;
  local_4 = 1;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x1b4);
  }
  ExceptionList = &local_c;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = local_4 & 0xffffff00;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x1ac);
  }
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006a0180();
  ExceptionList = local_c;
  return;
}

