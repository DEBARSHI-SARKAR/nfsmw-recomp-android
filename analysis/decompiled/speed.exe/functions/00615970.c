/* speed.exe 00615970 FUN_00615970; analysis pseudocode, not buildable source.
 * calls 0060e2e0 FUN_0060e2e0
 * calls 00614e00 FUN_00614e00
 * calls 00607d80 FUN_00607d80
 * calls 00607de0 FUN_00607de0
 */

undefined4 FUN_00615970(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  FUN_00614e00(param_1,param_2);
  iVar1 = *(int *)(param_1 + 8);
  puVar4 = (undefined4 *)(iVar1 + -8);
  puVar2 = (undefined4 *)FUN_00607d80(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),puVar4);
  *puVar4 = *puVar2;
  *(undefined4 *)(iVar1 + -4) = puVar2[1];
  piVar3 = (int *)(*(int *)(param_1 + 8) + -8);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    *(int **)(param_1 + 8) = piVar3;
    FUN_0060e2e0(param_1);
    FUN_00614e00(param_1,param_2);
    puVar4 = *(undefined4 **)(param_1 + 8);
    *puVar4 = puVar4[-4];
    puVar4[1] = puVar4[-3];
    puVar4 = *(undefined4 **)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = puVar4 + 2;
    puVar2 = (undefined4 *)
             FUN_00607de0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),puVar4 + -2);
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = (undefined4 *)(iVar1 + -0x10);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(iVar1 + -0x18);
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar1 + -0x14);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    FUN_00614e00(param_1,param_2);
    iVar1 = *(int *)(param_1 + 8);
    puVar4 = (undefined4 *)
             FUN_00607de0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),iVar1 + -0x10);
    *puVar4 = *(undefined4 *)(iVar1 + -8);
    puVar4[1] = *(undefined4 *)(iVar1 + -4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
    return 1;
  }
  return 0;
}

