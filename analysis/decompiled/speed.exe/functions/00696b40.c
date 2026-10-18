/* speed.exe 00696b40 FUN_00696b40; analysis pseudocode, not buildable source.
 * calls 00696a90 FUN_00696a90
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 __thiscall FUN_00696b40(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c1bf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005d29d0();
  local_4 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00696a90(param_2,param_3,param_4);
  }
  piVar1 = *(int **)(param_1 + 4);
  *piVar1 = (int)piVar3;
  *(int **)(param_1 + 4) = piVar3;
  piVar3[1] = (int)piVar1;
  *piVar3 = param_1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_4;
  iVar2 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

