/* speed.exe 0072e9e0 FUN_0072e9e0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0072e9e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  iVar6 = param_1 + 8;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0xc) = iVar6;
  iVar6 = param_1 + 0x10;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x14) = iVar6;
  iVar6 = param_1 + 0x18;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x1c) = iVar6;
  iVar6 = param_1 + 0x20;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x24) = iVar6;
  iVar6 = param_1 + 0x28;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x2c) = iVar6;
  iVar6 = param_1 + 0x30;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x34) = iVar6;
  iVar6 = param_1 + 0x38;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x3c) = iVar6;
  iVar6 = param_1 + 0x40;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x44) = iVar6;
  iVar6 = param_1 + 0x48;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x4c) = iVar6;
  iVar6 = param_1 + 0x6424;
  *(int *)iVar6 = iVar6;
  *(int *)(param_1 + 0x6428) = iVar6;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x60);
  for (iVar5 = 0xaf0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x2c20) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x2c44);
  iVar5 = 0x80;
  do {
    piVar2 = *(int **)(param_1 + 0x6428);
    piVar1 = puVar4 + -8;
    *piVar2 = (int)piVar1;
    *(int **)(param_1 + 0x6428) = piVar1;
    *piVar1 = iVar6;
    puVar4[-7] = piVar2;
    piVar2 = *(int **)(param_1 + 0x6428);
    piVar1 = puVar4 + -1;
    *piVar2 = (int)piVar1;
    *(int **)(param_1 + 0x6428) = piVar1;
    *piVar1 = iVar6;
    *puVar4 = piVar2;
    puVar3 = *(undefined4 **)(param_1 + 0x6428);
    piVar1 = puVar4 + 6;
    *puVar3 = piVar1;
    *(int **)(param_1 + 0x6428) = piVar1;
    puVar4[7] = puVar3;
    *piVar1 = iVar6;
    puVar3 = *(undefined4 **)(param_1 + 0x6428);
    piVar1 = puVar4 + 0xd;
    *puVar3 = piVar1;
    *(int **)(param_1 + 0x6428) = piVar1;
    puVar4[0xe] = puVar3;
    puVar4 = puVar4 + 0x1c;
    iVar5 = iVar5 + -1;
    *piVar1 = iVar6;
  } while (iVar5 != 0);
  *(undefined4 *)(param_1 + 0x642c) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x6430);
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}

