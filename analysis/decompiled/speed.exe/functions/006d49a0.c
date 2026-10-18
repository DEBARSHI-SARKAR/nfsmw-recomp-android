/* speed.exe 006d49a0 FUN_006d49a0; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c0a30 FUN_006c0a30
 * calls 006d1260 FUN_006d1260
 * calls 006c83a0 FUN_006c83a0
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006d2cd0 FUN_006d2cd0
 * calls 0073d060 FUN_0073d060
 * calls 006c8000 FUN_006c8000
 * calls 006c67c0 FUN_006c67c0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d49a0(int *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int *piVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  undefined *puStack_128;
  undefined4 uStack_124;
  float fStack_114;
  float afStack_110 [10];
  int *piStack_e8;
  float *pfStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float *pfStack_d4;
  float fStack_c8;
  float fStack_c4;
  int *piStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_68 [100];
  
  uVar5 = DAT_00982a28;
  if ((param_1[0x1b] != 0) && (DAT_009b0a74 != '\0')) {
    if (param_2 == '\0') {
      uVar2 = DAT_00982c60 + 1 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      uVar5 = (&DAT_0093de60)[uVar2];
      uStack_124 = 0;
      puStack_128 = &DAT_008f94f4;
      afStack_110[6] = (float)DAT_00982970;
      FUN_006d2cd0(DAT_0098299c,(&DAT_0093def8)[DAT_00982c60],1);
      FUN_006d2cd0(uVar5,(&DAT_0093def8)[DAT_00982c60],1,&DAT_008f94f4,0);
      DAT_00982c60 = DAT_00982c60 + 1 & 0x80000001;
      if ((int)DAT_00982c60 < 0) {
        DAT_00982c60 = (DAT_00982c60 - 1 | 0xfffffffe) + 1;
      }
    }
    else {
      uStack_124 = 0;
      puStack_128 = &DAT_008f94f4;
      afStack_110[6] = (float)DAT_00982970;
      FUN_006d2cd0(DAT_0098299c,(&DAT_0093def8)[DAT_00982c60],1);
      FUN_006d2cd0(uVar5,(&DAT_0093def8)[DAT_00982c60],1,&DAT_008f94f4,0);
      DAT_00982c60 = DAT_00982c60 + 1 & 0x80000001;
      if ((int)DAT_00982c60 < 0) {
        DAT_00982c60 = (DAT_00982c60 - 1 | 0xfffffffe) + 1;
      }
    }
    puStack_128 = (undefined *)0x0;
    piVar14 = DAT_00982bdc;
    uStack_124 = uVar5;
    (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc);
    FUN_0073d060(&fStack_114,afStack_110,afStack_110 + 2,afStack_110 + 4);
    piVar1 = DAT_0093de9c;
    DAT_00982c80 = DAT_0093de9c;
    fStack_114 = fStack_114 - afStack_110[2] * _DAT_008933d4;
    afStack_110[0] = afStack_110[0] - afStack_110[4] * _DAT_008933d4;
    (**(code **)(*DAT_0093de9c + 4))();
    piVar13 = DAT_00982bdc;
    (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar1[0x13]);
    piVar11 = (int *)piVar1[0x12];
    pfVar12 = &fStack_114;
    (**(code **)(*piVar11 + 0xfc))(piVar11,pfVar12,0);
    pfVar10 = (float *)*param_1;
    afStack_110[0] = 1.0;
    afStack_110[1] = 0.0;
    afStack_110[2] = 0.0;
    afStack_110[3] = 0.0;
    afStack_110[4] = 0.0;
    afStack_110[5] = 1.0;
    afStack_110[6] = 0.0;
    afStack_110[7] = 0.0;
    afStack_110[8] = 0.0;
    afStack_110[9] = 0.0;
    piStack_e8 = (int *)0x3f800000;
    pfStack_e4 = (float *)0x0;
    uStack_e0 = 0;
    uStack_dc = 0;
    fStack_d8 = 0.0;
    pfStack_d4 = (float *)0x3f800000;
    pfVar6 = afStack_110;
    pfVar8 = pfVar10;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    D3DXMatrixMultiply(pfVar10 + 0x20,pfVar10,pfVar10 + 0x10);
    iVar3 = *param_1;
    puVar7 = (undefined4 *)&stack0xfffffee4;
    puVar9 = (undefined4 *)(iVar3 + 0x40);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    D3DXMatrixMultiply(iVar3 + 0x80,iVar3,(undefined4 *)(iVar3 + 0x40));
    FUN_006c8000(&puStack_128,0);
    FUN_006c0a30();
    fStack_a8 = (float)piVar11 * _DAT_008afa08;
    fStack_a4 = (float)pfVar12 * _DAT_008afa04;
    fStack_d8 = (float)piVar11 + (float)piVar13;
    fStack_a0 = fStack_d8 * _DAT_008afa08;
    iVar3 = 0;
    fStack_c4 = (float)pfVar12 + (float)piVar14;
    fStack_94 = _DAT_008afa04 * fStack_c4;
    do {
      auStack_68[iVar3 * 4] = 0xff;
      auStack_68[iVar3 * 4 + 1] = 0xff;
      auStack_68[iVar3 * 4 + 2] = 0xff;
      auStack_68[iVar3 * 4 + 3] = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    piStack_e8 = piVar11;
    pfStack_e4 = pfVar12;
    pfStack_d4 = pfVar12;
    fStack_c8 = fStack_d8;
    piStack_b8 = piVar11;
    fStack_b4 = fStack_c4;
    fStack_9c = fStack_a4;
    fStack_98 = fStack_a0;
    fStack_90 = fStack_a8;
    fStack_8c = fStack_94;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,0);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,0);
    (**(code **)(*(int *)DAT_0093de9c[0x12] + 0xd0))
              ((int *)DAT_0093de9c[0x12],*(undefined4 *)(DAT_0093de9c[0x11] + 0x22c),pfVar10);
    FUN_006c67c0(0,1);
    FUN_006c6810(0,5,6);
    FUN_006c83a0();
    FUN_006d1260(afStack_110 + 1,0,0);
    (**(code **)(*piVar1 + 8))();
    (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
    DAT_00982c80 = (int *)0x0;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  }
  return;
}

