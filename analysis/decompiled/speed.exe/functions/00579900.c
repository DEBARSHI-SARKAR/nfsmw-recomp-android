/* speed.exe 00579900 FUN_00579900; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005b3630 FUN_005b3630
 * calls 005672f0 FUN_005672f0
 * calls 00579840 FUN_00579840
 * calls 00573140 FUN_00573140
 * calls 00515b90 FUN_00515b90
 * calls 004647e0 FUN_004647e0
 * calls 00722840 FUN_00722840
 * calls 005b7ee0 FUN_005b7ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00579900(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int *piVar11;
  uint uVar12;
  float10 extraout_ST0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [128];
  
  uVar6 = FUN_00722840(DAT_00904fb8);
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  uVar6 = (**(code **)(*param_2 + 4))();
  FUN_00579840(&uStack_a8,&fStack_88,uVar6);
  fStack_84 = ((*(float *)(*(int *)(param_1 + 0x98) + 0xb0) - uStack_a4) *
               (_DAT_0089096c / *(float *)(*(int *)(param_1 + 0x98) + 0xb4)) + _DAT_0089096c) *
              _DAT_00890dbc;
  uVar6 = FUN_007c4b80();
  uStack_a8 = (float)uVar6;
  iVar7 = FUN_007c4b80();
  fStack_ac = fStack_84 - (float)iVar7;
  if ((float10)_DAT_008933d4 <= extraout_ST0) {
    sVar9 = (short)uVar6 + (short)iVar7 * 8;
    fStack_8c = (float)(extraout_ST0 - (float10)_DAT_0089096c);
    if (fStack_ac < _DAT_008933d4) {
      uStack_a4 = (float)CONCAT22(sVar9 + 1,sVar9);
      uStack_a8 = (float)CONCAT22(sVar9 + -7,sVar9 + -8);
      goto LAB_00579a82;
    }
    fStack_ac = fStack_ac - _DAT_0089096c;
    sVar8 = sVar9 + 1;
    sVar10 = sVar9 + 8;
    uStack_a4._2_2_ = sVar9 + 9;
LAB_00579a78:
    uStack_a8 = (float)CONCAT22(sVar8,sVar9);
  }
  else {
    fStack_8c = (float)extraout_ST0;
    sVar5 = (short)uVar6 + (short)iVar7 * 8;
    if (fStack_ac < _DAT_008933d4) {
      sVar9 = sVar5 + -9;
      sVar8 = sVar5 + -8;
      sVar10 = sVar5 + -1;
      uStack_a4._2_2_ = sVar5;
      goto LAB_00579a78;
    }
    fStack_ac = fStack_ac - _DAT_0089096c;
    sVar10 = sVar5 + 7;
    uStack_a4._2_2_ = sVar5 + 8;
    uStack_a8 = (float)CONCAT22(sVar5,sVar5 + -1);
  }
  uStack_a4 = (float)CONCAT22(uStack_a4._2_2_,sVar10);
LAB_00579a82:
  FUN_005672f0(&uStack_a8,4);
  piVar1 = (int *)(param_1 + 0x3c);
  uVar12 = 0;
  piVar11 = piVar1;
  do {
    FUN_004647e0(auStack_80,0x80,"%s_CHOP%d",DAT_0091cefc + 8,
                 (int)*(short *)((int)&uStack_a8 + uVar12 * 2));
    uVar6 = FUN_00573140(auStack_80);
    FUN_00515b90(*piVar11,uVar6);
    uVar12 = uVar12 + 1;
    piVar11 = piVar11 + 1;
  } while (uVar12 < 4);
  iVar7 = *piVar1;
  fStack_8c = fStack_8c * *(float *)(param_1 + 0xa8);
  fStack_ac = fStack_ac * *(float *)(param_1 + 0xa8);
  fStack_94 = 1.0;
  fStack_90 = 1.0;
  fStack_9c = *(float *)(param_1 + 0xa8) - _DAT_0089096c;
  fStack_98 = fStack_9c;
  fStack_88 = fStack_9c;
  FUN_005b7ee0(5,&fStack_9c,0);
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  iVar7 = *piVar1;
  FUN_005b7ee0(6,&fStack_94,0);
  uStack_a8 = _DAT_0089096c - fStack_88;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  iVar7 = *(int *)(param_1 + 0x40);
  fStack_98 = fStack_88;
  fStack_9c = 0.0;
  fStack_90 = 1.0;
  fStack_94 = uStack_a8;
  FUN_005b7ee0(5,&fStack_9c,0);
  puVar2 = (uint *)(iVar7 + 0x1c);
  *puVar2 = *puVar2 | 0x400000;
  iVar7 = *(int *)(param_1 + 0x40);
  FUN_005b7ee0(6,&fStack_94,0);
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  fStack_90 = uStack_a8;
  iVar7 = *(int *)(param_1 + 0x44);
  fStack_9c = fStack_88;
  fStack_98 = 0.0;
  fStack_94 = 1.0;
  FUN_005b7ee0(5,&fStack_9c,0);
  puVar2 = (uint *)(iVar7 + 0x1c);
  *puVar2 = *puVar2 | 0x400000;
  iVar7 = *(int *)(param_1 + 0x44);
  FUN_005b7ee0(6,&fStack_94,0);
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  fStack_94 = uStack_a8;
  iVar7 = *(int *)(param_1 + 0x48);
  fStack_90 = uStack_a8;
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  FUN_005b7ee0(5,&fStack_9c,0);
  puVar2 = (uint *)(iVar7 + 0x1c);
  *puVar2 = *puVar2 | 0x400000;
  iVar7 = *(int *)(param_1 + 0x48);
  FUN_005b7ee0(6,&fStack_94,0);
  fStack_9c = -fStack_8c;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  uStack_a8 = -fStack_ac;
  fStack_98 = uStack_a8;
  fStack_94 = fStack_9c;
  fStack_90 = uStack_a8;
  FUN_005b3630(0,fStack_9c + *(float *)(param_1 + 0x4c),uStack_a8 + *(float *)(param_1 + 0x50),
               fStack_9c + *(float *)(param_1 + 0x54),uStack_a8 + *(float *)(param_1 + 0x58));
  FUN_005b3630(0,fStack_9c + *(float *)(param_1 + 0x5c),fStack_98 + *(float *)(param_1 + 0x60),
               fStack_94 + *(float *)(param_1 + 100),fStack_90 + *(float *)(param_1 + 0x68));
  FUN_005b3630(0,fStack_9c + *(float *)(param_1 + 0x6c),fStack_98 + *(float *)(param_1 + 0x70),
               fStack_94 + *(float *)(param_1 + 0x74),fStack_90 + *(float *)(param_1 + 0x78));
  FUN_005b3630(0,fStack_9c + *(float *)(param_1 + 0x7c),fStack_98 + *(float *)(param_1 + 0x80),
               fStack_94 + *(float *)(param_1 + 0x84),fStack_90 + *(float *)(param_1 + 0x88));
  fStack_8c = fStack_8c * _DAT_008a0d64;
  fStack_ac = fStack_ac * _DAT_008a0d64;
  iVar7 = *(int *)(*(int *)(param_1 + 0x38) + 0x2c);
  fVar3 = *(float *)(param_1 + 0x9c);
  fVar4 = *(float *)(param_1 + 0xa0);
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(param_1 + 0xa4);
  *(float *)(iVar7 + 0x1c) = fVar3 - fStack_8c;
  *(float *)(iVar7 + 0x20) = fVar4 - fStack_ac;
  iVar7 = *(int *)(*(int *)(param_1 + 0x38) + 0x2c);
  fStack_8c = fStack_8c + _DAT_0091cf04;
  fStack_ac = _DAT_0091cf08 + fStack_ac;
  *(undefined4 *)(iVar7 + 0x18) = 0;
  *(float *)(iVar7 + 0x10) = fStack_8c;
  *(float *)(iVar7 + 0x14) = fStack_ac;
  return;
}

