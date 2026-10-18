/* speed.exe 006d4620 FUN_006d4620; analysis pseudocode, not buildable source.
 * calls 0073cfa0 FUN_0073cfa0
 * calls 00503400 FUN_00503400
 * calls 006d2cd0 FUN_006d2cd0
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d4620(char param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  float *pfVar7;
  float fVar8;
  int *piVar9;
  undefined4 uStack_c4;
  float fStack_c0;
  int *piStack_bc;
  float *pfStack_b8;
  int **ppiStack_b4;
  int *piStack_b0;
  int iStack_ac;
  int *piStack_a8;
  float fStack_a4;
  int *piStack_a0;
  int **ppiStack_9c;
  undefined4 uStack_98;
  
  uVar2 = DAT_00982c60;
  if (*DAT_009196b8 != 0) {
    uVar3 = DAT_00982a28;
    if (param_1 == '\0') {
      DAT_00982c60 = DAT_00982c60 + 1 & 0x80000001;
      if ((int)DAT_00982c60 < 0) {
        DAT_00982c60 = (DAT_00982c60 - 1 | 0xfffffffe) + 1;
      }
      uVar3 = (&DAT_0093de60)[DAT_00982c60];
    }
    fVar8 = (float)(&DAT_0093def8)[uVar2];
    uStack_98 = 0;
    ppiStack_9c = (int **)&DAT_008f94f4;
    piStack_a0 = (int *)0x1;
    iStack_ac = 0x6d4682;
    piStack_a8 = (int *)uVar3;
    fStack_a4 = fVar8;
    FUN_006d2cd0();
    ppiStack_9c = (int **)0x0;
    piStack_a0 = DAT_00982bdc;
    fStack_a4 = 1.003539e-38;
    uStack_98 = uVar3;
    (**(code **)(*DAT_00982bdc + 0x94))();
    fStack_a4 = 0.0;
    piStack_a8 = DAT_00982bdc;
    iStack_ac = 0x6d46a6;
    (**(code **)(*DAT_00982bdc + 0x9c))();
    piVar1 = DAT_0093deb0;
    DAT_00982c80 = DAT_0093deb0;
    iStack_ac = 0x6d46b9;
    (**(code **)(*DAT_0093deb0 + 4))();
    iStack_ac = piVar1[0x13];
    piStack_b0 = DAT_00982bdc;
    ppiStack_b4 = (int **)0x6d46cb;
    (**(code **)(*DAT_00982bdc + 0x15c))();
    piStack_bc = (int *)piVar1[0x12];
    ppiStack_b4 = (int **)0x0;
    pfStack_b8 = &fStack_a4;
    fStack_c0 = 1.0035491e-38;
    (**(code **)(*piStack_bc + 0xfc))();
    uStack_c4 = *(undefined4 *)(piVar1[0x11] + 0x22c);
    piVar9 = (int *)piVar1[0x12];
    fStack_c0 = fVar8;
    (**(code **)(*piVar9 + 0xd0))(piVar9);
    uVar3 = FUN_00460bf0("RAINDROPPC",1,0);
    piVar4 = (int *)FUN_00503400(uVar3);
    fVar8 = *(float *)(*piVar4 + 0x18);
    (**(code **)(*(int *)piVar1[0x12] + 0xd0))
              ((int *)piVar1[0x12],*(undefined4 *)(piVar1[0x11] + 0x2cc),fVar8);
    iVar5 = 0;
    if (0 < *DAT_009196b8) {
      do {
        pfStack_b8 = (float *)0x0;
        piStack_bc = (int *)0x3f800000;
        FUN_0073cfa0(iVar5,&fStack_c0,&ppiStack_b4,&pfStack_b8,&piStack_bc,0);
        piVar4 = (int *)piVar1[0x12];
        pfVar7 = *(float **)(piVar1[0x11] + 0xa74);
        (**(code **)(*piVar4 + 0x78))(piVar4,pfVar7,(float)pfStack_b8 * _DAT_008959e4);
        ppiVar6 = &piStack_bc;
        ppiStack_b4 = (int **)((float)piVar9 * _DAT_008af9f4);
        piStack_bc = (int *)(fVar8 - _DAT_008910f0 * (float)ppiStack_b4);
        pfStack_b8 = (float *)(_DAT_008910f0 * (float)ppiStack_b4 + fStack_c0);
        piStack_b0 = (int *)-(float)ppiStack_b4;
        (**(code **)(*(int *)piVar1[0x12] + 0x88))
                  ((int *)piVar1[0x12],*(undefined4 *)(piVar1[0x11] + 0xa4c),ppiVar6,piVar4,pfVar7,
                   _DAT_0089096c - (fStack_c0 + fStack_c0),ppiStack_b4,
                   (fVar8 + fVar8) - _DAT_0089096c);
        piStack_a0 = (int *)((float)piVar4 + (float)pfVar7);
        piStack_b0 = (int *)0x0;
        piStack_a8 = (int *)0x0;
        fStack_a4 = 0.0;
        uStack_98 = 0;
        pfStack_b8 = pfVar7;
        ppiStack_b4 = ppiVar6;
        ppiStack_9c = ppiVar6;
        (**(code **)(*(int *)DAT_00982c80[0x12] + 0x104))((int *)DAT_00982c80[0x12]);
        (**(code **)(*(int *)piVar1[0x12] + 0x100))((int *)piVar1[0x12],0);
        (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,5,2,&uStack_c4,0x18);
        (**(code **)(*(int *)piVar1[0x12] + 0x108))((int *)piVar1[0x12]);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *DAT_009196b8);
    }
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
    (**(code **)(*piVar1 + 8))();
    (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
    DAT_00982c80 = (int *)0x0;
  }
  return;
}

