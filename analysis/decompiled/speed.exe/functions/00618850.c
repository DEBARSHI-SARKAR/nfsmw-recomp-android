/* speed.exe 00618850 FUN_00618850; analysis pseudocode, not buildable source.
 * calls 00613f40 FUN_00613f40
 * calls 00613eb0 FUN_00613eb0
 * calls 00607d80 FUN_00607d80
 */

undefined4 FUN_00618850(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_2 == 0) {
    **(undefined4 **)(param_1 + 8) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    return 1;
  }
  iVar3 = FUN_00613f40(param_1,4);
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 7;
  puVar1[1] = iVar3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_2 + 8);
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 4;
  uVar4 = FUN_00613eb0(param_1,"ISimable",8);
  puVar1[1] = uVar4;
  puVar1 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  puVar5 = (undefined4 *)FUN_00607d80(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),puVar1);
  *puVar1 = *puVar5;
  puVar1[1] = puVar5[1];
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = iVar2 + -8;
  if (*(int *)(iVar2 + -8) == 0) {
    iVar3 = *(int *)(param_1 + 0x10) + 0x34;
  }
  if (*(int *)(iVar2 + -0x10) == 5) {
    *(undefined4 *)(*(int *)(iVar2 + -0xc) + 8) = *(undefined4 *)(iVar3 + 4);
  }
  else if (*(int *)(iVar2 + -0x10) == 7) {
    *(undefined4 *)(*(int *)(iVar2 + -0xc) + 8) = *(undefined4 *)(iVar3 + 4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
    return 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return 1;
}

