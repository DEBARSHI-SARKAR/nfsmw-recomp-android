/* speed.exe 00588b40 FUN_00588b40; analysis pseudocode, not buildable source.
 * calls 00573d80 FUN_00573d80
 * calls 00573cc0 FUN_00573cc0
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 */

int __thiscall FUN_00588b40(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fStack_8;
  undefined1 auStack_4 [4];
  
  iVar5 = FUN_00573cc0(*(undefined4 *)(param_1 + 0xb0));
  piVar4 = param_2;
  param_2[0xb] = iVar5;
  iVar5 = FUN_00573cc0(*(undefined4 *)(param_1 + 0xb4));
  piVar4[0xc] = iVar5;
  iVar5 = FUN_00573d80(*(undefined4 *)(param_1 + 0xbc));
  piVar4[9] = iVar5;
  piVar4[3] = *(int *)(param_1 + 0xd4);
  piVar4[4] = *(int *)(param_1 + 0xd8);
  piVar4[0xd] = *(int *)(param_1 + 0xe4);
  piVar4[0xe] = *(int *)(param_1 + 0xe8);
  piVar4[0xf] = *(int *)(param_1 + 0xec);
  piVar4[0x10] = *(int *)(param_1 + 0xf0);
  piVar4[0x11] = *(int *)(param_1 + 0xf4);
  piVar4[0x12] = *(int *)(param_1 + 0xf8);
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  piVar1 = piVar4 + 1;
  *puVar2 = piVar1;
  *(int **)(param_1 + 0x30) = piVar1;
  *piVar1 = param_1 + 0x2c;
  piVar4[2] = (int)puVar2;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  fVar3 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xd8) = fVar3;
  *(float *)(param_1 + 0xf8) = fVar3;
  if ((char)piVar4[10] == '\0') {
    (**(code **)(*piVar4 + 0x20))();
  }
  (**(code **)(*piVar4 + 0x14))();
  (**(code **)(*piVar4 + 0xc))();
  (**(code **)(*piVar4 + 0x10))();
  FUN_00514fd0(piVar4[0xc],&fStack_8,&param_2);
  FUN_00515520(piVar4[0xc],&param_2,auStack_4);
  piVar4[5] = (int)ABS((float)piVar4[3] - (ABS((float)param_2) + fStack_8));
  FUN_00515520(piVar4[0xc],auStack_4,&param_2);
  piVar4[6] = (int)ABS((float)param_2);
  return *(int *)(param_1 + 0x104) + -1;
}

