/* speed.exe 006b7d80 FUN_006b7d80; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 0045a430 FUN_0045a430
 * calls 006b7720 FUN_006b7720
 */

void __fastcall FUN_006b7d80(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087db8f;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  puVar1 = (undefined4 *)0x0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x130);
  }
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006b7720();
  ExceptionList = local_c;
  return;
}

