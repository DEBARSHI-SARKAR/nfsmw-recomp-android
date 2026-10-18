/* speed.exe 0051dcf0 FUN_0051dcf0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00515e20 FUN_00515e20
 */

void __thiscall FUN_0051dcf0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e444;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x90);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_0089c2a4;
    FUN_00515e20(puVar1 + 3,0x80,param_2);
    puVar1[0x23] = 0;
    piVar2 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0x10) = piVar2;
  *piVar2 = param_1 + 0xc;
  piVar2[1] = (int)puVar1;
  ExceptionList = local_c;
  return;
}

