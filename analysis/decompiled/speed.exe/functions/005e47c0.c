/* speed.exe 005e47c0 FUN_005e47c0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 005e2580 FUN_005e2580
 * calls 006269b0 FUN_006269b0
 */

undefined4 __thiscall FUN_005e47c0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875148;
  local_c = ExceptionList;
  if (param_2 < *(uint *)(param_1 + 0xb4)) {
    uVar2 = *(undefined4 *)(param_1 + 0xb8 + param_2 * 4);
  }
  else {
    uVar2 = 0;
  }
  ExceptionList = &local_c;
  FUN_005e2580(uVar2,0,0);
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_00454810(0xdb89ab5c,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  uVar2 = *puVar1;
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar2;
}

