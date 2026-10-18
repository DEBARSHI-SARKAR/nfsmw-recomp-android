/* speed.exe 00441c80 FUN_00441c80; analysis pseudocode, not buildable source.
 * calls 007749a0 FUN_007749a0
 * calls 00438810 FUN_00438810
 * calls 0076e220 FUN_0076e220
 * calls 00778250 FUN_00778250
 * calls 00425a80 FUN_00425a80
 * calls 00436150 FUN_00436150
 * calls 007658a0 FUN_007658a0
 * calls 0077beb0 FUN_0077beb0
 * calls 0042cbf0 FUN_0042cbf0
 * calls 0077ae20 FUN_0077ae20
 * calls 0077bac0 FUN_0077bac0
 * calls 005d0370 FUN_005d0370
 * calls 00438750 FUN_00438750
 * calls 00462430 FUN_00462430
 * calls 005c5e80 FUN_005c5e80
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00766680 FUN_00766680
 * calls 00410220 FUN_00410220
 * calls 0041c8a0 FUN_0041c8a0
 * calls 00434ee0 FUN_00434ee0
 * calls 0041b250 FUN_0041b250
 * calls 00436210 FUN_00436210
 * calls 0045ce40 FUN_0045ce40
 * calls 00422d50 FUN_00422d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FUN_00441c80(char *param_1,float *param_2,float *param_3,float param_4,float param_5,
            undefined4 param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  float10 fVar15;
  float local_358;
  float local_354;
  float local_350;
  int *local_348;
  int local_344;
  undefined4 local_340;
  undefined1 local_33c [4];
  float *local_338;
  float *local_334;
  int local_330;
  float local_32c;
  undefined **local_328;
  int *local_324;
  undefined4 local_320;
  int local_31c;
  int local_318;
  float local_314;
  short local_310;
  int local_30c;
  undefined4 local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  undefined4 local_27c;
  undefined4 local_274;
  char local_268;
  short local_266;
  undefined4 local_264;
  float local_25c;
  float local_258;
  float local_254;
  float local_238;
  float local_230;
  float local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086984c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_340 = FUN_0045ce40();
  local_318 = DAT_009b38a8;
  pfVar1 = (float *)(param_1 + 0x38);
  *pfVar1 = *param_3;
  *(float *)(param_1 + 0x3c) = param_3[1];
  sVar7 = (short)param_6;
  *(float *)(param_1 + 0x40) = param_3[2];
  *(short *)(param_1 + 0x5c) = sVar7;
  param_1[0x5e] = -1;
  param_1[0x5f] = -1;
  *(float *)(param_1 + 0x60) = param_4 / param_5;
  if ((-1 < sVar7) &&
     (iVar8 = FUN_00766680((uint)*(ushort *)(DAT_009b38c0 + (sVar7 * 0xb + param_7) * 2) * 0x20 +
                           DAT_009b38bc,param_6), iVar8 != 0)) {
    *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(iVar8 + 8);
  }
  FUN_00410220(pfVar1);
  *(float *)(param_1 + 0x44) = param_4 * *pfVar1 + *param_2;
  *(float *)(param_1 + 0x48) = param_4 * *(float *)(param_1 + 0x3c) + param_2[1];
  *(float *)(param_1 + 0x4c) = param_4 * *(float *)(param_1 + 0x40) + param_2[2];
  *(float *)(param_1 + 0x50) = param_5 * *pfVar1 + *param_2;
  *(float *)(param_1 + 0x54) = param_5 * *(float *)(param_1 + 0x3c) + param_2[1];
  *(float *)(param_1 + 0x58) = param_5 * *(float *)(param_1 + 0x40) + param_2[2];
  local_348 = (int *)FUN_0041c8a0();
  *(undefined1 *)((int)local_348 + 0xf) = 1;
  local_348[1] = (int)local_348;
  *local_348 = (int)local_348;
  local_348[2] = (int)local_348;
  local_344 = 0;
  local_324 = (int *)0x0;
  local_320 = 0;
  local_31c = 0;
  local_328 = &PTR_FUN_00891594;
  local_4 = 1;
  FUN_0041b250(0x40);
  FUN_0077ae20(param_2,0x41c80000,&local_328);
  piVar9 = local_324;
  piVar10 = local_324;
  if (local_324 != local_324 + local_31c) {
    do {
      iVar8 = *(int *)(*(int *)(local_318 + 0x20) + *piVar10 * 4);
      if (iVar8 != 0) {
        bVar3 = *(byte *)(iVar8 + 0xb);
        iVar12 = 0;
        if (bVar3 != 0) {
          do {
            local_32c = *(float *)(*(ushort *)(iVar8 + 0x12) + 0x14 + iVar8 + iVar12 * 4);
            if ((*param_1 == '\0') ||
               (*(short *)(SUB42(local_32c,0) * 0x16 + 10 + DAT_009b38c0) < 0)) {
              FUN_00438750(&local_358,&local_32c);
            }
            iVar12 = iVar12 + 1;
            piVar9 = local_324;
          } while (iVar12 < (int)(uint)bVar3);
        }
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar9 + local_31c);
  }
  FUN_0077b9e0();
  local_4._0_1_ = 2;
  FUN_007658a0(0);
  local_274 = 3;
  local_27c = 2;
  local_338 = (float *)0x0;
  local_334 = (float *)0x0;
  local_330 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar8 = local_344;
  if (local_344 < 0x22) {
    iVar8 = 0x21;
  }
  FUN_00438810(iVar8);
  piVar9 = (int *)*local_348;
  if (piVar9 != local_348) {
    do {
      if ((short)piVar9[3] < DAT_009b3874) {
        FUN_0077beb0((short)piVar9[3],param_2,pfVar1,0);
        if (((*(byte *)(local_266 * 0x16 + 10 + DAT_009b38c0) >> 6 & 1) != 0) && (local_268 == '\0')
           ) {
          FUN_0077bac0();
        }
        fVar14 = (float10)FUN_007749a0(local_30);
        if ((float)fVar14 != local_30) {
          FUN_00778250((float)fVar14,0);
        }
        fVar14 = (float10)FUN_005c5e80((param_2[2] - local_254) * (param_2[2] - local_254) +
                                       (*param_2 - local_25c) * (*param_2 - local_25c));
        fVar14 = fVar14 - (float10)_DAT_00890d3c;
        if (fVar14 < (float10)_DAT_00890968) {
          fVar14 = (float10)_DAT_00890968;
        }
        fVar15 = ABS((float10)param_2[1] - (float10)local_258) - (float10)_DAT_00890d3c;
        if (fVar15 < (float10)_DAT_00890968) {
          fVar15 = (float10)_DAT_00890968;
        }
        local_358 = local_238;
        local_350 = local_230;
        local_32c = (float)(fVar15 * (float10)_DAT_00890604 + fVar14);
        local_354 = 0.0;
        fVar14 = (float10)FUN_005c5e80(local_230 * local_230 + local_238 * local_238);
        if (fVar14 == (float10)_DAT_00890968) {
          fVar14 = (float10)local_350;
        }
        else {
          fVar14 = (float10)_DAT_0089096c / fVar14;
          local_358 = (float)((float10)local_358 * fVar14);
          local_354 = (float)((float10)_DAT_00890968 * fVar14);
          fVar14 = fVar14 * (float10)local_350;
        }
        local_30c = (int)local_268;
        local_310 = local_266;
        local_300 = local_25c;
        local_308 = local_264;
        fVar14 = (float10)_DAT_0089096c -
                 ((float10)local_358 * (float10)*pfVar1 +
                 fVar14 * (float10)*(float *)(param_1 + 0x40) +
                 (float10)local_354 * (float10)*(float *)(param_1 + 0x3c));
        local_304 = local_30;
        local_2fc = local_258;
        local_2f8 = local_254;
        local_314 = (float)(fVar14 + fVar14 + (float10)local_32c);
        if ((local_338 == (float *)0x0) ||
           ((uint)(local_330 - (int)local_338 >> 5) <= (uint)((int)local_334 - (int)local_338 >> 5))
           ) {
          FUN_00436210(local_334,1,&local_314);
        }
        else {
          FUN_00425a80(local_334,1,&local_314,local_33c,local_340);
          local_334 = local_334 + 8;
        }
      }
      if (*(char *)((int)piVar9 + 0xf) == '\0') {
        piVar10 = (int *)piVar9[2];
        if (*(char *)((int)piVar10 + 0xf) == '\0') {
          cVar4 = *(char *)(*piVar10 + 0xf);
          piVar9 = piVar10;
          piVar10 = (int *)*piVar10;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar10 + 0xf);
            piVar9 = piVar10;
            piVar10 = (int *)*piVar10;
          }
        }
        else {
          cVar4 = *(char *)(piVar9[1] + 0xf);
          piVar5 = (int *)piVar9[1];
          piVar10 = piVar9;
          while ((piVar9 = piVar5, cVar4 == '\0' && (piVar10 == (int *)piVar9[2]))) {
            cVar4 = *(char *)(piVar9[1] + 0xf);
            piVar5 = (int *)piVar9[1];
            piVar10 = piVar9;
          }
        }
      }
    } while (piVar9 != local_348);
  }
  pfVar11 = local_334;
  pfVar1 = local_338;
  if ((local_338 == (float *)0x0) || (iVar8 = (int)local_334 - (int)local_338 >> 5, iVar8 == 0)) {
    local_4._0_1_ = 2;
    if (local_338 != (float *)0x0) {
      FUN_005d0370(local_338,(local_330 - (int)local_338 >> 5) << 5,&PTR_LAB_004c5452_1_00890f10);
    }
    local_4._0_1_ = 1;
    FUN_0076e220();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042cbf0();
    local_4 = 0xffffffff;
    FUN_00436150(&local_340,*local_348,local_348);
    if (local_348 != (int *)0x0) {
      FUN_005d0370(local_348,0x10,0);
    }
    bVar6 = false;
  }
  else {
    FUN_00434ee0(local_338,local_334,iVar8);
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = '\x7f';
    param_1[7] = '\x7f';
    pfVar13 = pfVar1;
    do {
      if (((0x1f < *(int *)(param_1 + 0x94)) || (pfVar13 == pfVar11)) ||
         (fVar2 = *pfVar13, *(float *)(param_1 + 0x90) = fVar2, *(float *)(param_1 + 4) <= fVar2))
      break;
      *(float *)(param_1 + 0x74) = pfVar13[1];
      *(float *)(param_1 + 0x78) = pfVar13[2];
      *(float *)(param_1 + 0x7c) = pfVar13[3];
      *(float *)(param_1 + 0x80) = pfVar13[4];
      *(float *)(param_1 + 0x84) = pfVar13[5];
      *(float *)(param_1 + 0x88) = pfVar13[6];
      *(float *)(param_1 + 0x8c) = pfVar13[7];
      FUN_00422d50(param_1 + 0x74,param_4,param_5,0);
      pfVar13 = pfVar13 + 8;
      pfVar11 = local_334;
    } while (*(int *)(param_1 + 0x98) < 10);
    fVar14 = (float10)FUN_00462430(local_340);
    _DAT_0090d5fc = (float)(fVar14 + (float10)_DAT_0090d5fc);
    bVar6 = *(float *)(param_1 + 4) < _DAT_00890cd8;
    local_4._0_1_ = 2;
    FUN_005d0370(pfVar1,(local_330 - (int)pfVar1 >> 5) << 5,&PTR_LAB_004c5452_1_00890f10);
    local_4._0_1_ = 1;
    FUN_0076e220();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042cbf0();
    local_4 = 0xffffffff;
    FUN_00436150(&local_340,*local_348,local_348);
    if (local_348 != (int *)0x0) {
      FUN_005d0370(local_348,0x10,0);
    }
  }
  ExceptionList = local_c;
  return bVar6;
}

