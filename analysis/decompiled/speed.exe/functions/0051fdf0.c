/* speed.exe 0051fdf0 FUN_0051fdf0; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00652ad0 _malloc
 * calls 005881c0 FUN_005881c0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00588250 FUN_00588250
 */

void __thiscall FUN_0051fdf0(int param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e5c4;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    ExceptionList = &local_c;
    if (*(char *)(param_1 + 0xe1) == -1) {
      ExceptionList = &local_c;
      *(undefined1 *)(param_1 + 0xe1) = *param_2;
    }
  }
  else {
    ExceptionList = &local_c;
    if (*(char *)(param_1 + 0xe0) == -1) {
      ExceptionList = &local_c;
      *(undefined1 *)(param_1 + 0xe0) = *param_2;
    }
  }
  puVar1 = _malloc(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar1 = &PTR_FUN_0089c40c;
    puVar1[6] = param_2;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar1);
  if ((param_2[1] & 2) != 0) {
    iVar2 = FUN_0045d3a0(0);
    iVar2 = FUN_00588250(iVar2 + -1);
    *(undefined1 *)(iVar2 + 0x17) = 1;
  }
  ExceptionList = local_c;
  return;
}

