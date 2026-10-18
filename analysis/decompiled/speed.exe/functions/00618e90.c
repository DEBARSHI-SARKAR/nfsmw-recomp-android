/* speed.exe 00618e90 FUN_00618e90; analysis pseudocode, not buildable source.
 * calls 00615230 FUN_00615230
 */

void FUN_00618e90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00615230(param_1,param_3);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * -8;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 0x10 + param_3 * 8);
    do {
      puVar4 = puVar3 + -2;
      iVar2 = *(int *)(param_1 + 8) + (-0x10 - iVar1);
      param_3 = param_3 + -1;
      *puVar4 = *(undefined4 *)(iVar2 + (int)puVar4);
      puVar3[-1] = *(undefined4 *)((int)puVar4 + iVar2 + 4);
      puVar3 = puVar4;
    } while (param_3 != 0);
  }
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar3[1] = iVar1;
  *puVar3 = 6;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

