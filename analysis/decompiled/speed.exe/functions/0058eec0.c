/* speed.exe 0058eec0 FUN_0058eec0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_0058eec0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008726eb;
  local_c = ExceptionList;
  puVar1 = param_1 + 3;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d348;
  *puVar1 = puVar1;
  param_1[4] = puVar1;
  local_4 = 0;
  puVar2 = _malloc(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_0089c2bc;
    puVar2[3] = param_2;
    piVar3 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)param_1[4];
  *puVar2 = piVar3;
  param_1[4] = piVar3;
  *piVar3 = (int)puVar1;
  piVar3[1] = (int)puVar2;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  ExceptionList = local_c;
  return param_1;
}

