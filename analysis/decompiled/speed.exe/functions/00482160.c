/* speed.exe 00482160 FUN_00482160; analysis pseudocode, not buildable source.
 * calls 0045ded0 FUN_0045ded0
 * calls 0046a150 FUN_0046a150
 * calls 00725550 FUN_00725550
 * calls 0046a190 FUN_0046a190
 * calls 0047edb0 FUN_0047edb0
 * calls 00469760 FUN_00469760
 * calls 0046a420 FUN_0046a420
 * calls 004647c0 FUN_004647c0
 * calls 0047f490 FUN_0047f490
 * calls 0047ee00 FUN_0047ee00
 * calls 0046a3c0 FUN_0046a3c0
 * calls 00466a60 FUN_00466a60
 * calls 0046d620 FUN_0046d620
 * calls 0046eae0 FUN_0046eae0
 * calls 0046d2e0 FUN_0046d2e0
 * calls 0046a300 FUN_0046a300
 * calls 0046dc50 FUN_0046dc50
 * calls 0046a170 FUN_0046a170
 * calls 00477ee0 FUN_00477ee0
 * calls 0046da10 FUN_0046da10
 * calls 0046a480 FUN_0046a480
 * calls 0046db30 FUN_0046db30
 * calls 0047b150 FUN_0047b150
 * calls 00469210 FUN_00469210
 * calls 0046dca0 FUN_0046dca0
 * calls 0047b3a0 FUN_0047b3a0
 * calls 006bde60 FUN_006bde60
 * calls 00472340 FUN_00472340
 * calls 0046ea50 FUN_0046ea50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00482160(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  float10 fVar17;
  float10 fVar18;
  float local_2e4;
  undefined4 uStack_2e0;
  char local_2d9;
  int local_2d8;
  undefined4 uStack_2d4;
  undefined4 auStack_2d0 [10];
  undefined2 uStack_2a8;
  undefined2 uStack_2a6;
  undefined4 auStack_2a0 [10];
  undefined2 uStack_278;
  undefined2 uStack_276;
  int local_264;
  undefined4 auStack_260 [8];
  undefined4 local_240 [8];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_110 [64];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  
  local_264 = *(int *)(param_1 + 0xc4);
  local_2d8 = DAT_008ee344;
  if (DAT_008ee344 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_0047b150(param_1 + 0xb4,param_1 + 0xb8,0);
  }
  iVar14 = *(int *)(param_1 + 0xc4);
  local_2d9 = iVar14 != iVar9;
  if (param_3 == '\0') {
    if (!(bool)local_2d9) {
      return;
    }
LAB_004821cb:
    if (((iVar9 != 0) && (iVar14 != 0)) && (cVar8 = FUN_00477ee0(iVar14,1,iVar9,0), cVar8 == '\0'))
    {
      bVar6 = true;
      goto LAB_004821f2;
    }
  }
  else if ((bool)local_2d9) goto LAB_004821cb;
  bVar6 = false;
LAB_004821f2:
  if (((iVar9 == 0) || (iVar14 != 0)) || (local_2e4 = 1.4013e-45, (*(byte *)(iVar9 + 1) & 1) != 0))
  {
    local_2e4 = 0.0;
  }
  cVar8 = local_2e4._0_1_;
  if (((iVar14 == 0) || (iVar9 != 0)) || ((*(byte *)(iVar14 + 1) & 1) != 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  *(int *)(param_1 + 0xc4) = iVar9;
  if ((bVar6 || local_2e4._0_1_ != '\0') || bVar7) {
    FUN_00725550();
    puVar11 = *(undefined4 **)(param_1 + 0x80);
    uVar10 = puVar11[1];
    uVar1 = puVar11[2];
    *(undefined4 *)(param_1 + 0x110) = *puVar11;
    *(undefined4 *)(param_1 + 0x114) = uVar10;
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    iVar14 = *(int *)(param_1 + 0x80);
    uVar10 = *(undefined4 *)(iVar14 + 0x14);
    uVar1 = *(undefined4 *)(iVar14 + 0x18);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(param_1 + 0x124) = uVar10;
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  if (local_2d9 != '\0') {
    if (local_2d8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_0046d2e0((*(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xb4)) *
                            _DAT_00894594);
    }
    piVar13 = DAT_009885c8;
    if (DAT_009885c8 != (int *)0x0) {
      FUN_004647c0(local_110,"ICECut%d",uVar10);
      (**(code **)(*piVar13 + 0x58))(local_110);
    }
  }
  if (iVar9 != 0) {
    *(uint *)(param_1 + 0xbc) = (uint)*(byte *)(iVar9 + 4);
    *(uint *)(param_1 + 0xc0) = (uint)*(byte *)(iVar9 + 5);
    puVar11 = local_240 + 2;
    iVar14 = 2;
    do {
      puVar11[-2] = 0;
      puVar11[-1] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar11 = auStack_260 + 2;
    iVar14 = 2;
    do {
      puVar11[-2] = 0;
      puVar11[-1] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar11 = auStack_2a0 + 2;
    iVar14 = 2;
    do {
      puVar11[-2] = 0;
      puVar11[-1] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar11 = auStack_2d0 + 2;
    iVar14 = 2;
    do {
      puVar11[-2] = 0;
      puVar11[-1] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    FUN_0047edb0(0,local_240);
    FUN_0047edb0(1,local_240 + 4);
    FUN_0047ee00(0,auStack_260);
    FUN_0047ee00(1,auStack_260 + 4);
    iVar14 = local_2d8;
    FUN_0047f490(auStack_2a0,auStack_2d0,&local_2e4,&local_2d8,iVar9,0,local_2d8);
    FUN_0047f490(auStack_2a0 + 4,auStack_2d0 + 4,&uStack_2e0,&uStack_2d4,iVar9,1,iVar14);
    FUN_0046a3c0(local_240[0],local_240[1],local_240[2]);
    FUN_0046a420(auStack_2a0[0],auStack_2a0[1],auStack_2a0[2]);
    FUN_0046a480(local_240[4],local_240[5],local_240[6]);
    iVar14 = *(int *)(param_1 + 0x84);
    *(undefined4 *)(iVar14 + 0xc) = auStack_2a0[4];
    *(undefined4 *)(iVar14 + 0x38) = auStack_2a0[5];
    *(undefined4 *)(iVar14 + 100) = auStack_2a0[6];
    FUN_0046a3c0(auStack_260[0],auStack_260[1],auStack_260[2]);
    FUN_0046a420(auStack_2d0[0],auStack_2d0[1],auStack_2d0[2]);
    FUN_0046a480(auStack_260[4],auStack_260[5],auStack_260[6]);
    iVar14 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(iVar14 + 0xc) = auStack_2d0[4];
    *(undefined4 *)(iVar14 + 0x38) = auStack_2d0[5];
    *(undefined4 *)(iVar14 + 100) = auStack_2d0[6];
    fVar2 = *(float *)(iVar9 + 0x4c);
    pfVar4 = *(float **)(param_1 + 0x8c);
    *pfVar4 = fVar2;
    if (fVar2 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    iVar14 = *(int *)(param_1 + 0x8c);
    *(float *)(iVar14 + 4) = local_2e4;
    if (local_2e4 != *(float *)(iVar14 + 0xc)) {
      *(undefined2 *)(iVar14 + 0x28) = 2;
    }
    fVar2 = *(float *)(iVar9 + 0x50);
    pfVar4 = *(float **)(param_1 + 0x8c);
    pfVar4[2] = fVar2;
    if (fVar2 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xc) = uStack_2e0;
    local_2e4 = *(float *)(iVar9 + 0x54);
    uVar12 = FUN_0045ded0(local_2e4,0x417f5c2a);
    pfVar4 = *(float **)(param_1 + 0x90);
    local_2e4 = (float)((uVar12 & 0x7fff) << 1);
    *pfVar4 = (float)(int)local_2e4;
    if ((float)(int)local_2e4 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    fVar17 = (float10)FUN_0046d620(*(undefined4 *)(iVar9 + 0x54),local_2d8);
    iVar14 = *(int *)(param_1 + 0x90);
    *(float *)(iVar14 + 4) = (float)fVar17;
    if (fVar17 != (float10)*(float *)(iVar14 + 0xc)) {
      *(undefined2 *)(iVar14 + 0x28) = 2;
    }
    local_2e4 = *(float *)(iVar9 + 0x58);
    uVar12 = FUN_0045ded0(local_2e4,0x417f5c2a);
    local_2e4 = (float)((uVar12 & 0x7fff) << 1);
    pfVar4 = *(float **)(param_1 + 0x90);
    pfVar4[2] = (float)(int)local_2e4;
    if ((float)(int)local_2e4 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    fVar17 = (float10)FUN_0046d620(*(undefined4 *)(iVar9 + 0x58),uStack_2d4);
    *(float *)(*(int *)(param_1 + 0x90) + 0xc) = (float)fVar17;
    if ((bVar6 || cVar8 != '\0') || bVar7) {
      FUN_00469760(param_1 + 0xd0);
      FUN_00466a60(param_1 + 0xd0,*(int *)(param_1 + 0x80) + 0x10,*(int *)(param_1 + 0x80));
    }
    if ((local_2d9 != '\0') &&
       (DAT_008ee392 = *(byte *)(iVar9 + 1) >> 1 & 1, (*(byte *)(iVar9 + 1) & 1) != 0)) {
      FUN_00469210();
      FUN_00469210();
      FUN_00466a60(auStack_50,*(int *)(param_1 + 0x80) + 0x10,*(int *)(param_1 + 0x80));
      FUN_006bde60(auStack_d0,auStack_50);
      FUN_00469210();
      FUN_006bde60(auStack_90,param_1 + 0xd0);
      FUN_0046a300(1,0x3f800000);
      FUN_0046a300(1,0x3f800000);
      auStack_2d0[0] = 0;
      auStack_2d0[1] = 0;
      auStack_2d0[2] = 0;
      auStack_2d0[3] = 0;
      auStack_2d0[8] = 0;
      auStack_2d0[9] = 0x3f800000;
      uStack_2a8 = 0;
      uStack_2a6 = 1;
      auStack_2d0[4] = 0;
      auStack_2d0[5] = 0;
      auStack_2d0[6] = 0;
      auStack_2d0[7] = 0;
      auStack_2a0[0] = 0;
      auStack_2a0[1] = 0;
      auStack_2a0[2] = 0;
      auStack_2a0[3] = 0;
      auStack_2a0[8] = 0;
      auStack_2a0[9] = 0x3f800000;
      uStack_278 = 0;
      uStack_276 = 1;
      auStack_2a0[4] = 0;
      auStack_2a0[5] = 0;
      auStack_2a0[6] = 0;
      auStack_2a0[7] = 0;
      FUN_00469210();
      puVar16 = (undefined1 *)0x0;
      if (((*(int *)(param_1 + 0xbc) == 3) || (*(int *)(param_1 + 0xc0) == 3)) &&
         ((DAT_009885c8 != (int *)0x0 &&
          (piVar13 = (int *)(**(code **)(*DAT_009885c8 + 0x48))(), piVar13 != (int *)0x0)))) {
        puVar16 = local_110;
        uVar10 = (**(code **)(*piVar13 + 0x30))();
        FUN_006bde60(puVar16,uVar10);
      }
      iVar14 = *(int *)(param_1 + 0xbc);
      if (iVar14 == 0) {
        puVar15 = auStack_d0;
      }
      else if (iVar14 == 2) {
        puVar15 = auStack_90;
      }
      else {
        puVar15 = puVar16;
        if (iVar14 != 3) {
          puVar15 = (undefined1 *)0x0;
        }
      }
      iVar5 = *(int *)(param_1 + 0xc0);
      if (iVar5 == 0) {
        puVar16 = auStack_d0;
      }
      else if (iVar5 == 2) {
        puVar16 = auStack_90;
      }
      else if (iVar5 != 3) {
        puVar16 = (undefined1 *)0x0;
      }
      if (iVar14 == 0) {
        iVar14 = *(int *)(param_1 + 0x80) + 0x50;
      }
      else {
        iVar14 = 0;
      }
      FUN_0046da10(&uStack_198,puVar15,iVar14);
      if (*(int *)(param_1 + 0xc0) == 0) {
        iVar14 = *(int *)(param_1 + 0x80) + 0x50;
      }
      else {
        iVar14 = 0;
      }
      FUN_0046db30(&uStack_220,puVar16,iVar14);
      FUN_0046dc50(auStack_2d0);
      FUN_0046dca0(auStack_2a0);
      fVar17 = (float10)FUN_0047b3a0();
      local_2e4 = (float)fVar17;
      fVar17 = fVar17 - (float10)*(float *)(param_1 + 0xb4);
      if (fVar17 < (float10)_DAT_00890968) {
        fVar17 = -fVar17;
      }
      fVar18 = (float10)local_2e4 - (float10)*(float *)(param_1 + 0xb8);
      if (fVar18 < (float10)_DAT_00890968) {
        fVar18 = -fVar18;
      }
      if (fVar18 <= fVar17) {
        FUN_0046a480(uStack_198,uStack_16c,uStack_140);
        iVar14 = *(int *)(param_1 + 0x84);
        *(undefined4 *)(iVar14 + 0xc) = uStack_194;
        *(undefined4 *)(iVar14 + 0x38) = uStack_168;
        *(undefined4 *)(iVar14 + 100) = uStack_13c;
        FUN_0046a480(uStack_220,uStack_1f4,uStack_1c8);
        iVar14 = *(int *)(param_1 + 0x88);
        *(undefined4 *)(iVar14 + 0xc) = uStack_21c;
        *(undefined4 *)(iVar14 + 0x38) = uStack_1f0;
        *(undefined4 *)(iVar14 + 100) = uStack_1c4;
        FUN_0046a190(auStack_2d0[0]);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xc) = auStack_2d0[1];
        FUN_0046a190(auStack_2a0[0]);
        *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc) = auStack_2a0[1];
      }
      else {
        FUN_0046a3c0(uStack_198,uStack_16c,uStack_140);
        FUN_0046a420(uStack_194,uStack_168,uStack_13c);
        FUN_0046a3c0(uStack_220,uStack_1f4,uStack_1c8);
        FUN_0046a420(uStack_21c,uStack_1f0,uStack_1c4);
        FUN_0046a150(auStack_2d0[0]);
        FUN_0046a170(auStack_2d0[1]);
        FUN_0046a150(auStack_2a0[0]);
        FUN_0046a170(auStack_2a0[1]);
      }
    }
    FUN_00472340();
    FUN_00472340();
    pfVar4 = *(float **)(param_1 + 0x8c);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[3] + pfVar4[1]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    pfVar4 = *(float **)(param_1 + 0x90);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[3] + pfVar4[1]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    pfVar4 = *(float **)(param_1 + 0x94);
    fVar2 = *(float *)(iVar9 + 0x5c);
    *pfVar4 = fVar2;
    if (fVar2 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    fVar2 = *(float *)(iVar9 + 0x60);
    pfVar4 = *(float **)(param_1 + 0x94);
    pfVar4[2] = fVar2;
    if (fVar2 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0x94);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[1] + pfVar4[3]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    pfVar4 = *(float **)(param_1 + 0x98);
    fVar2 = *(float *)(iVar9 + 100);
    *pfVar4 = fVar2;
    if (fVar2 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    fVar2 = *(float *)(iVar9 + 0x68);
    pfVar4 = *(float **)(param_1 + 0x98);
    pfVar4[2] = fVar2;
    if (fVar2 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0x98);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[1] + pfVar4[3]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    pfVar4 = *(float **)(param_1 + 0x9c);
    fVar2 = *(float *)(iVar9 + 0x6c);
    *pfVar4 = fVar2;
    if (fVar2 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    fVar2 = *(float *)(iVar9 + 0x70);
    pfVar4 = *(float **)(param_1 + 0x9c);
    pfVar4[2] = fVar2;
    if (fVar2 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0x9c);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[1] + pfVar4[3]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    pfVar4 = *(float **)(param_1 + 0xa0);
    fVar2 = *(float *)(iVar9 + 0x74);
    *pfVar4 = fVar2;
    if (fVar2 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    fVar2 = *(float *)(iVar9 + 0x78);
    pfVar4 = *(float **)(param_1 + 0xa0);
    pfVar4[2] = fVar2;
    if (fVar2 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0xa0);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[3] + pfVar4[1]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    bVar3 = *(byte *)(iVar9 + 0x7c);
    pfVar4 = *(float **)(param_1 + 0xa4);
    *pfVar4 = (float)bVar3;
    if ((float)bVar3 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    bVar3 = *(byte *)(iVar9 + 0x7d);
    pfVar4 = *(float **)(param_1 + 0xa4);
    pfVar4[2] = (float)bVar3;
    if ((float)bVar3 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0xa4);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[1] + pfVar4[3]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    bVar3 = *(byte *)(iVar9 + 0x7e);
    pfVar4 = *(float **)(param_1 + 0xa8);
    *pfVar4 = (float)bVar3;
    if ((float)bVar3 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    bVar3 = *(byte *)(iVar9 + 0x7f);
    pfVar4 = *(float **)(param_1 + 0xa8);
    pfVar4[2] = (float)bVar3;
    if ((float)bVar3 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0xa8);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[1] + pfVar4[3]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    bVar3 = *(byte *)(iVar9 + 0x80);
    pfVar4 = *(float **)(param_1 + 0xac);
    *pfVar4 = (float)bVar3;
    if ((float)bVar3 != pfVar4[2]) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    local_2e4 = (float)(uint)*(byte *)(iVar9 + 0x81);
    pfVar4 = *(float **)(param_1 + 0xac);
    pfVar4[2] = (float)(int)local_2e4;
    if ((float)(int)local_2e4 != *pfVar4) {
      *(undefined2 *)(pfVar4 + 10) = 2;
    }
    pfVar4 = *(float **)(param_1 + 0xac);
    fVar2 = pfVar4[2] - *pfVar4;
    pfVar4[6] = pfVar4[1];
    pfVar4[7] = *pfVar4;
    pfVar4[4] = (pfVar4[1] + pfVar4[3]) - (fVar2 + fVar2);
    pfVar4[5] = (fVar2 * _DAT_008945ec - pfVar4[3]) - (pfVar4[1] + pfVar4[1]);
    if ((((DAT_008ee348 == 0) || (DAT_008ee348 == 5)) || (DAT_008ee348 == 7)) &&
       ((local_264 == 0 || (*(char *)(local_264 + 10) != *(char *)(iVar9 + 10))))) {
      FUN_0046eae0();
      FUN_0046ea50(*(undefined1 *)(iVar9 + 10));
    }
  }
  return;
}

