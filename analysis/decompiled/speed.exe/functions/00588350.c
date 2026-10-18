/* speed.exe 00588350 FUN_00588350; analysis pseudocode, not buildable source.
 * calls 00573d80 FUN_00573d80
 * calls 00573cc0 FUN_00573cc0
 */

int __thiscall FUN_00588350(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00573cc0(*(undefined4 *)(param_1 + 0xb0));
  param_2[0xb] = iVar4;
  iVar4 = FUN_00573d80(*(undefined4 *)(param_1 + 0xbc));
  param_2[9] = iVar4;
  param_2[3] = *(int *)(param_1 + 0xd4);
  param_2[4] = *(int *)(param_1 + 0xd8);
  param_2[0xc] = *(int *)(param_1 + 0xe4);
  param_2[0xd] = *(int *)(param_1 + 0xe8);
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  piVar1 = param_2 + 1;
  *puVar2 = piVar1;
  *(int **)(param_1 + 0x30) = piVar1;
  *piVar1 = param_1 + 0x2c;
  param_2[2] = (int)puVar2;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  fVar3 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xd8) = fVar3;
  *(float *)(param_1 + 0xf8) = fVar3;
  if ((char)param_2[10] == '\0') {
    (**(code **)(*param_2 + 0x20))();
  }
  (**(code **)(*param_2 + 0x14))();
  (**(code **)(*param_2 + 0xc))();
  (**(code **)(*param_2 + 0x10))();
  param_2[5] = (int)ABS(*(float *)(param_1 + 0xdc));
  param_2[6] = (int)ABS(*(float *)(param_1 + 0xe0));
  return *(int *)(param_1 + 0x104) + -1;
}

