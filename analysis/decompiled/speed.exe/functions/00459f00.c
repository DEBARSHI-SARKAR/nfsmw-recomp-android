/* speed.exe 00459f00 FUN_00459f00; analysis pseudocode, not buildable source.
 * calls 00626c90 thunk_FUN_00454640
 * calls 00626c50 FUN_00626c50
 * calls 00459dc0 FUN_00459dc0
 * calls 00456f40 FUN_00456f40
 */

undefined4 __thiscall FUN_00459f00(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1c [8];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  uVar2 = thunk_FUN_00454640(param_2);
  local_10 = iVar1;
  local_c = param_3;
  local_8 = 0;
  local_14 = uVar2;
  local_4 = FUN_00626c50(uVar2);
  iVar1 = *(int *)(param_1 + 4);
  FUN_00456f40(&param_2,&local_14);
  if (param_2 == *(int *)(iVar1 + 0x30)) {
    FUN_00459dc0(local_1c,&local_14);
  }
  return uVar2;
}

