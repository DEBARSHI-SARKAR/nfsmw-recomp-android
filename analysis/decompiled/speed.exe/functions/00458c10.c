/* speed.exe 00458c10 FUN_00458c10; analysis pseudocode, not buildable source.
 * calls 00458b80 FUN_00458b80
 * calls 004569d0 FUN_004569d0
 * calls 00456390 FUN_00456390
 * calls 00458ac0 FUN_00458ac0
 * calls 00456220 FUN_00456220
 */

undefined4 * __thiscall
FUN_00458c10(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  if (param_5 != 0) {
    FUN_004569d0(((param_5 * 5 - 5U & 0x3fffffff) >> 2) + 3 & 0xfffffffc);
  }
  local_4 = 0;
  param_1[4] = param_3;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = param_4;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((param_3 != 0) && (param_2 == 0)) {
    param_1[5] = *(undefined4 *)(param_3 + 0x14);
  }
  iVar2 = *(int *)(param_1[5] + 8);
  FUN_00456220(param_4,param_1);
  if (0x50 < (*(uint *)(iVar2 + 0x28) & 0xfffffffe)) {
    FUN_00456390(((*(int *)(iVar2 + 0x20) * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  *(int *)(param_1[5] + 4) = *(int *)(param_1[5] + 4) + 1;
  if (param_1[4] == 0) {
    uVar3 = FUN_00458ac0();
  }
  else {
    piVar1 = (int *)(param_1[4] + 0x1c);
    *piVar1 = *piVar1 + 1;
    uVar3 = FUN_00458b80(*(undefined4 *)(param_1[4] + 0x18));
  }
  param_1[6] = uVar3;
  param_1[10] = 0;
  ExceptionList = local_c;
  return param_1;
}

