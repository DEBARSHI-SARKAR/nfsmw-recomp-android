/* speed.exe 00594090 FUN_00594090; analysis pseudocode, not buildable source.
 * calls 00576050 FUN_00576050
 * calls 00573d80 FUN_00573d80
 * calls 00515520 FUN_00515520
 * calls 00593f20 FUN_00593f20
 * calls 00573140 FUN_00573140
 * calls 00589db0 FUN_00589db0
 * calls 00652ad0 _malloc
 * calls 00524850 FUN_00524850
 * calls 00575fd0 FUN_00575fd0
 * calls 00573cc0 FUN_00573cc0
 * calls 00515e20 FUN_00515e20
 * calls 00573d10 FUN_00573d10
 * calls 00514fd0 FUN_00514fd0
 * calls 00575e50 FUN_00575e50
 */

int __thiscall
FUN_00594090(int param_1,undefined4 param_2,void *param_3,float param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar7 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872b74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_00593f20(param_2,param_3,param_4);
  param_4 = (float)CONCAT31(param_4._1_3_,uVar3);
  param_3 = _malloc(0xf8);
  uVar5 = param_5;
  local_4 = 0;
  if (param_3 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    fVar8 = param_4;
    uVar4 = FUN_00576050(uVar7,param_4,param_5);
    uVar5 = FUN_00575fd0(uVar7,uVar5);
    iVar6 = FUN_00589db0(uVar7,uVar5,uVar4,fVar8);
  }
  local_4 = 0xffffffff;
  uVar7 = FUN_00573cc0(*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(iVar6 + 0x2c) = uVar7;
  uVar7 = FUN_00573cc0(*(undefined4 *)(param_1 + 0xb4));
  *(undefined4 *)(iVar6 + 0x30) = uVar7;
  uVar7 = FUN_00573d80(*(undefined4 *)(param_1 + 0xbc));
  *(undefined4 *)(iVar6 + 0x24) = uVar7;
  FUN_00515e20(local_4c,0x40,&DAT_008a0dac,*(undefined4 *)(param_1 + 200),
               *(undefined4 *)(param_1 + 0x104));
  FUN_00575e50(*(undefined4 *)(param_1 + 0x10),local_4c);
  FUN_00515e20(local_4c,0x40,"%sGROUP%d",*(undefined4 *)(param_1 + 200),
               *(undefined4 *)(param_1 + 0x104));
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_00573140(local_4c);
  uVar7 = FUN_00524850(uVar7,uVar5);
  *(undefined4 *)(iVar6 + 0x5c) = uVar7;
  uVar7 = FUN_00573d10(*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(iVar6 + 0x4c) = uVar7;
  uVar7 = FUN_00573d10(*(undefined4 *)(param_1 + 0xc4));
  *(undefined4 *)(iVar6 + 0x50) = uVar7;
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  piVar1 = (int *)(iVar6 + 4);
  *puVar2 = piVar1;
  *(int **)(param_1 + 0x30) = piVar1;
  *piVar1 = param_1 + 0x2c;
  *(undefined4 **)(iVar6 + 8) = puVar2;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  fVar8 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xd8) = fVar8;
  *(float *)(param_1 + 0xf8) = fVar8;
  FUN_00514fd0(*(undefined4 *)(iVar6 + 0x50),&param_4,&param_2);
  FUN_00515520(*(undefined4 *)(iVar6 + 0x50),&param_3,&param_5);
  *(float *)(iVar6 + 0x14) = ABS(((float)param_3 + param_4) - param_4);
  ExceptionList = local_c;
  return *(int *)(param_1 + 0x104) + -1;
}

