/* speed.exe 0072aac0 FUN_0072aac0; analysis pseudocode, not buildable source.
 * calls 0072a760 FUN_0072a760
 * calls 007252f0 FUN_007252f0
 * calls 00789870 FUN_00789870
 * calls 0045f3c0 FUN_0045f3c0
 * calls 00749fb0 FUN_00749fb0
 * calls 004601b0 FUN_004601b0
 * calls 00727480 FUN_00727480
 * calls 00470080 FUN_00470080
 * calls 00404db0 FUN_00404db0
 * calls 00723330 FUN_00723330
 * calls 004102f0 FUN_004102f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072aac0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float10 fVar10;
  int *piStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [20];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0088053e;
  local_1c = ExceptionList;
  uVar8 = (uint)(*(int *)(param_1 + 4) != 1);
  if ((((*(char *)(param_1 + 8) != '\0') &&
       (iVar7 = *(int *)(param_1 + 0x44), iVar7 != param_1 + 0x44)) && (iVar7 != 0)) &&
     (((int *)(iVar7 + -4) != (int *)0x0 &&
      (ExceptionList = &local_1c, fStack_c8 = (float)(**(code **)(*(int *)(iVar7 + -4) + 0x10))(),
      fStack_c8 != 0.0)))) {
    iVar7 = *(int *)(param_1 + 0x40);
    fStack_98 = *(float *)(iVar7 + 0x40);
    fStack_94 = *(float *)(iVar7 + 0x44);
    pfVar9 = (float *)(iVar7 + 0x50);
    if ((DAT_009ae350 & 1) == 0) {
      DAT_009ae350 = DAT_009ae350 | 1;
      uStack_14 = 0;
      FUN_00404db0(&DAT_009ae330,0x10,2,&LAB_00402190);
      uStack_14 = 0xffffffff;
    }
    piStack_d0 = (int *)(&DAT_009a3a24 + uVar8 * 4);
    iVar5 = *piStack_d0;
    if ((iVar5 == 0) ||
       (cVar4 = FUN_004601b0(&fStack_98,iVar5 + 0x44,(int)*(short *)(iVar5 + 0x40)), cVar4 == '\0'))
    {
      fStack_a8 = (float)FUN_00727480(&fStack_98,3,0);
    }
    else {
      fStack_a8 = (float)*piStack_d0;
    }
    if ((fStack_a8 == 0.0) ||
       (*(float *)((int)fStack_a8 + 0x14) <= *(float *)((int)fStack_c8 + 0x28))) {
      piStack_d0 = *(int **)(param_1 + 100);
      if (_DAT_00890968 < (float)piStack_d0[0x50]) {
        fStack_80 = (float)piStack_d0[0x50] - _DAT_009031dc;
        uStack_90 = 0x43000000;
        uStack_8c = 0x43000000;
        uStack_88 = 0x43000000;
        uStack_84 = 0x43000000;
        uStack_44 = 0;
        fStack_78 = fStack_80;
        FUN_004102f0(&fStack_c0,&DAT_009ae330 + uVar8 * 0x10);
        pfVar9 = (float *)FUN_00470080(auStack_30,0x3f800000);
        fStack_c0 = fStack_c0 + *pfVar9;
        fStack_bc = fStack_bc + pfVar9[1];
        fStack_b8 = fStack_b8 + pfVar9[2];
        if (_DAT_00890968 < fStack_80) {
          iVar7 = uVar8 * 0x30;
          fStack_74 = fStack_c0 + *(float *)(&DAT_009ae2c8 + iVar7);
          fStack_70 = fStack_bc + *(float *)(&DAT_009ae2cc + iVar7);
          fStack_6c = fStack_b8 + *(float *)(&DAT_009ae2d0 + iVar7);
          fStack_68 = fStack_c0 + *(float *)(&DAT_009ae2d4 + iVar7);
          fStack_64 = fStack_bc + *(float *)(&DAT_009ae2d8 + iVar7);
          fStack_60 = fStack_b8 + *(float *)(&DAT_009ae2dc + iVar7);
          fStack_5c = fStack_c0 + *(float *)(&DAT_009ae2e0 + iVar7);
          fStack_58 = fStack_bc + *(float *)(&DAT_009ae2e4 + iVar7);
          fStack_54 = fStack_b8 + *(float *)(&DAT_009ae2e8 + iVar7);
          fStack_50 = fStack_c0 + *(float *)(&DAT_009ae2ec + iVar7);
          fStack_4c = fStack_bc + *(float *)(&DAT_009ae2f0 + iVar7);
          fStack_48 = fStack_b8 + *(float *)(&DAT_009ae2f4 + iVar7);
          FUN_007252f0(3,&uStack_90,1,0);
          ExceptionList = local_1c;
          return;
        }
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar7 + 0x40);
      uVar1 = *(undefined4 *)(iVar7 + 0x48);
      iVar5 = uVar8 * 0x10;
      *(undefined4 *)(&DAT_009ae334 + iVar5) = *(undefined4 *)(iVar7 + 0x44);
      *(undefined4 *)(&DAT_009ae330 + iVar5) = uVar2;
      *(undefined4 *)(&DAT_009ae338 + iVar5) = uVar1;
      iVar5 = FUN_0072a760(param_1,&fStack_40,&fStack_c8);
      if (iVar5 != 0) {
        fStack_c8 = fStack_40;
        fStack_c4 = fStack_3c;
        fVar10 = (float10)FUN_00723330(&fStack_c8,&fStack_b0,&fStack_a0);
        if ((fVar10 != (float10)_DAT_00890da8) && (fVar10 < (float10)_DAT_00891184)) {
          fStack_c0 = -fStack_3c;
          fStack_bc = (float)uStack_38;
          fStack_b8 = fStack_40;
          fStack_40 = 0.0;
          fStack_3c = 4.2039e-45;
          FUN_00789870(&fStack_c0,&fStack_c8,0);
          fStack_74 = fStack_b0 + *pfVar9;
          iVar6 = uVar8 * 0x30;
          *(float *)(&DAT_009ae2c8 + iVar6) = fStack_74;
          uStack_90 = 0x43000000;
          uStack_8c = 0x43000000;
          fStack_70 = fStack_ac + *(float *)(iVar7 + 0x54);
          uStack_88 = 0x43000000;
          uStack_84 = 0x43000000;
          uStack_44 = 0;
          *(float *)(&DAT_009ae2cc + iVar6) = fStack_70;
          fStack_6c = fStack_c8 + *(float *)(iVar7 + 0x58);
          *(float *)(&DAT_009ae2d0 + iVar6) = fStack_6c;
          fStack_68 = fStack_a0 + *pfVar9;
          *(float *)(&DAT_009ae2d4 + iVar6) = fStack_68;
          fStack_64 = fStack_9c + *(float *)(iVar7 + 0x54);
          *(float *)(&DAT_009ae2d8 + iVar6) = fStack_64;
          fStack_60 = fStack_c8 + *(float *)(iVar7 + 0x58);
          *(float *)(&DAT_009ae2dc + iVar6) = fStack_60;
          fStack_5c = fStack_b0 + *pfVar9;
          *(float *)(&DAT_009ae2e0 + iVar6) = fStack_5c;
          fStack_58 = fStack_ac + *(float *)(iVar7 + 0x54);
          *(float *)(&DAT_009ae2e4 + iVar6) = fStack_58;
          fStack_54 = fStack_c8 + DAT_009031f0 + *(float *)(iVar7 + 0x58);
          *(float *)(&DAT_009ae2e8 + iVar6) = fStack_54;
          fStack_50 = fStack_a0 + *pfVar9;
          *(float *)(&DAT_009ae2ec + iVar6) = fStack_50;
          fStack_4c = fStack_9c + *(float *)(iVar7 + 0x54);
          *(float *)(&DAT_009ae2f0 + iVar6) = fStack_4c;
          fStack_48 = fStack_c8 + DAT_009031f0 + *(float *)(iVar7 + 0x58);
          *(float *)(&DAT_009ae2f4 + iVar6) = fStack_48;
          if (*(int *)(&DAT_009ae328 + uVar8 * 4) != iVar5) {
            *(undefined4 *)(*(int *)(param_1 + 100) + 0x148) = 0;
          }
          *(int *)(&DAT_009ae328 + uVar8 * 4) = iVar5;
          if ((float)*piStack_d0 != fStack_a8) {
            *(undefined4 *)(*(int *)(param_1 + 100) + 0x148) = 0;
          }
          *piStack_d0 = (int)fStack_a8;
          fStack_a8 = fStack_b0 - fStack_98;
          fStack_a4 = fStack_ac - fStack_94;
          piStack_d0 = (int *)(fStack_9c - fStack_ac);
          fStack_cc = -(fStack_a0 - fStack_b0);
          FUN_0045f3c0(&piStack_d0,&piStack_d0);
          iVar7 = *(int *)(param_1 + 100);
          fVar3 = ABS(fStack_cc * fStack_a4 + fStack_a8 * (float)piStack_d0);
          if (_DAT_008b2800 <= fVar3) {
            fStack_80 = _DAT_0089096c;
            if (*(float *)(iVar7 + 0x148) < _DAT_0089096c) {
              fStack_80 = _DAT_009031e0 + *(float *)(iVar7 + 0x148);
            }
          }
          else {
            fStack_80 = fVar3 * _DAT_008b2aec * *(float *)(iVar7 + 0x148);
          }
          fStack_78 = fStack_80;
          FUN_007252f0(3,&uStack_90,1,0);
          if ((*(int *)(param_1 + 0x68) != 0) &&
             (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x68) + 0x28c))) {
            *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x280) = 3;
            FUN_00749fb0(fStack_5c,fStack_58,fStack_54,fStack_50,fStack_4c,fStack_48,fStack_74,
                         fStack_70,fStack_6c,fStack_68,fStack_64,fStack_60);
            ExceptionList = local_1c;
            return;
          }
        }
      }
    }
  }
  ExceptionList = local_1c;
  return;
}

