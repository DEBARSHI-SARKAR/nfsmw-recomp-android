/* speed.exe 00588860 FUN_00588860; analysis pseudocode, not buildable source.
 * calls 00573cc0 FUN_00573cc0
 * calls 00515520 FUN_00515520
 * calls 00515e20 FUN_00515e20
 * calls 00573d10 FUN_00573d10
 * calls 00514fd0 FUN_00514fd0
 */

int __thiscall FUN_00588860(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float unaff_EDI;
  undefined1 local_40 [60];
  float fStack_4;
  
  FUN_00515e20(local_40,0x40,&DAT_008a0dac,*(undefined4 *)(param_1 + 200),
               *(undefined4 *)(param_1 + 0x104));
  iVar4 = FUN_00573cc0(*(undefined4 *)(param_1 + 0xb0));
  param_2[0xb] = iVar4;
  (**(code **)(param_2[0x17] + 0xc))(*(undefined4 *)(param_1 + 0x10),local_40);
  (**(code **)(*param_2 + 0x3c))();
  param_2[3] = *(int *)(param_1 + 0xd4);
  param_2[4] = *(int *)(param_1 + 0xd8);
  param_2[0xd] = *(int *)(param_1 + 0xe4);
  param_2[0xe] = *(int *)(param_1 + 0xe8);
  param_2[0xf] = *(int *)(param_1 + 0xec);
  param_2[0x10] = *(int *)(param_1 + 0xf0);
  param_2[0x11] = *(int *)(param_1 + 0xf4);
  param_2[0x12] = *(int *)(param_1 + 0xf8);
  iVar4 = FUN_00573d10(*(undefined4 *)(param_1 + 0xc0));
  param_2[0x13] = iVar4;
  iVar4 = FUN_00573d10(*(undefined4 *)(param_1 + 0xc4));
  param_2[0x14] = iVar4;
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
  FUN_00514fd0(param_2[0x14],&stack0xffffffb0,&fStack_4);
  FUN_00515520(param_2[0x14],&fStack_4,&stack0xffffffb4);
  param_2[5] = (int)ABS((float)param_2[3] - (ABS(fStack_4) + unaff_EDI));
  FUN_00515520(param_2[0xb],&stack0xffffffb4,&fStack_4);
  param_2[6] = (int)ABS(fStack_4);
  return *(int *)(param_1 + 0x104) + -1;
}

