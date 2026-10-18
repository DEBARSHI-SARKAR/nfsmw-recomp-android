/* speed.exe 005e9be0 FUN_005e9be0; analysis pseudocode, not buildable source.
 * calls 005e2580 FUN_005e2580
 * calls 00454810 FUN_00454810
 * calls 005e3e60 FUN_005e3e60
 * calls 006269b0 FUN_006269b0
 */

int __thiscall FUN_005e9be0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(param_2,0,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar1 = (int *)FUN_00454810(0x93fd9fda,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_006269b0(4);
  }
  if (*piVar1 != 0) {
    iVar2 = FUN_005e3e60(*piVar1);
    *(int *)(param_1 + 0x14) = iVar2;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 2;
  }
  ExceptionList = local_c;
  return param_1;
}

