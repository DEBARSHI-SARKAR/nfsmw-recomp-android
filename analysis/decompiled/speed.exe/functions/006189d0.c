/* speed.exe 006189d0 FUN_006189d0; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 00607d80 FUN_00607d80
 */

void FUN_006189d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00614e00(param_1,param_2);
  iVar4 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)(iVar4 + -8);
  puVar3 = (undefined4 *)FUN_00607d80(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),puVar1);
  *puVar1 = *puVar3;
  *(undefined4 *)(iVar4 + -4) = puVar3[1];
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = iVar2 + -8;
  if (*(int *)(iVar2 + -8) == 0) {
    iVar4 = *(int *)(param_1 + 0x10) + 0x34;
  }
  if ((*(int *)(iVar2 + -0x10) == 5) || (*(int *)(iVar2 + -0x10) == 7)) {
    *(undefined4 *)(*(int *)(iVar2 + -0xc) + 8) = *(undefined4 *)(iVar4 + 4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return;
}

