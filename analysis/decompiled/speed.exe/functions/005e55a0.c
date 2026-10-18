/* speed.exe 005e55a0 FUN_005e55a0; analysis pseudocode, not buildable source.
 * calls 005e2650 FUN_005e2650
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 */

undefined4 __fastcall FUN_005e55a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2650(*param_1,0,0);
  local_4 = 0;
  if (local_1c != 0) {
    puVar2 = (undefined4 *)FUN_00454810(0xdb89ab5c,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_006269b0(4);
    }
    uVar1 = *puVar2;
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return uVar1;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

