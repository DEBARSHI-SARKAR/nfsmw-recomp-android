/* speed.exe 0046f360 FUN_0046f360; analysis pseudocode, not buildable source.
 * calls 00653960 FUN_00653960
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_0046f360(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a1a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00653960(0x10,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_00894ba4;
  puVar3 = _malloc(param_2 << 4);
  param_1[2] = puVar3;
  for (iVar4 = (param_2 & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  puVar3 = (undefined4 *)param_1[2];
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  param_1[8] = *puVar3;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  puVar3 = (undefined4 *)param_1[2];
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  param_1[4] = *puVar3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

