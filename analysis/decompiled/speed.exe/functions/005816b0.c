/* speed.exe 005816b0 FUN_005816b0; analysis pseudocode, not buildable source.
 * calls 007398d0 FUN_007398d0
 * calls 0045a430 FUN_0045a430
 * calls 00460bf0 FUN_00460bf0
 * calls 004e4ea0 FUN_004e4ea0
 */

undefined4 __fastcall FUN_005816b0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e4ea0(*(undefined4 *)(param_1 + 8),0,0);
  puVar1 = *(undefined1 **)(local_18 + 0x1c);
  local_4 = 0;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00890978;
  }
  uVar2 = FUN_00460bf0(puVar1);
  uVar2 = FUN_007398d0(uVar2);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar2;
}

