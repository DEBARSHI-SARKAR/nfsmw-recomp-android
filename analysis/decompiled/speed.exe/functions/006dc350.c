/* speed.exe 006dc350 FUN_006dc350; analysis pseudocode, not buildable source.
 * calls 0074b8b0 FUN_0074b8b0
 * calls 00460bf0 FUN_00460bf0
 * calls 00503400 FUN_00503400
 * calls 006d4dc0 FUN_006d4dc0
 */

int __fastcall FUN_006dc350(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0074b8b0();
  local_4 = 0;
  uVar1 = FUN_00460bf0("UVESVIGNETTE",1,0);
  uVar1 = FUN_00503400(uVar1);
  *(undefined4 *)(param_1 + 0x1f0) = uVar1;
  FUN_006d4dc0();
  ExceptionList = local_c;
  return param_1;
}

