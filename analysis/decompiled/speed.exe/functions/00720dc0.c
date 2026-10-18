/* speed.exe 00720dc0 FUN_00720dc0; analysis pseudocode, not buildable source.
 * calls 007153b0 FUN_007153b0
 * calls 005c5e80 FUN_005c5e80
 * calls 004cca50 FUN_004cca50
 * calls 005d51f0 FUN_005d51f0
 * calls 007125f0 FUN_007125f0
 * calls 005d0370 FUN_005d0370
 * calls 007159d0 FUN_007159d0
 * calls 00704e00 FUN_00704e00
 * calls 0040fe20 FUN_0040fe20
 * calls 0071fa90 FUN_0071fa90
 * calls 005d59f0 FUN_005d59f0
 * calls 007138c0 FUN_007138c0
 * calls 0070da60 FUN_0070da60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00720dc0(int param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  float *pfVar14;
  undefined2 extraout_var;
  uint3 uVar16;
  int iVar15;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  char cStack_6d;
  undefined4 uStack_6c;
  int *local_68;
  int *piStack_60;
  float fStack_5c;
  undefined4 uStack_54;
  int *piStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008804d8;
  pvStack_c = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_007125f0(0x1e);
  if (local_18 != (undefined4 *)0x0) {
    FUN_005d0370(local_18,(local_10 - (int)local_18 >> 2) << 2,0);
  }
  *(undefined1 *)(param_1 + 0x15d) = (undefined1)DAT_0092ce44;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_68 = (int *)0x477fff00;
  iVar17 = DAT_0092ce3c;
  if (DAT_0092ce3c != DAT_0092ce3c + DAT_0092ce44 * 4) {
    do {
      piVar8 = (int *)FUN_005d59f0(&LAB_00404ff0);
      if ((piVar8 != (int *)0x0) &&
         (fVar18 = (float10)(**(code **)(*piVar8 + 0x18))(), fVar18 < (float10)(float)local_68)) {
        local_68 = (int *)(float)fVar18;
      }
      iVar17 = iVar17 + 4;
    } while (iVar17 != DAT_0092ce3c + DAT_0092ce44 * 4);
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x184) + 0x44);
  if ((float)local_68 < fVar1 == ((float)local_68 == fVar1)) {
    if (((*(uint *)(param_1 + 0x54) & 0x800) != 0) &&
       (piVar8 = (int *)FUN_007153b0(0,0), piVar8 != (int *)0x0)) {
      (**(code **)(*piVar8 + 0x13c))();
    }
    uVar9 = *(uint *)(param_1 + 0x54) & 0xfffff7ff;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x54) | 0x800;
  }
  *(uint *)(param_1 + 0x54) = uVar9;
  cStack_6d = '\0';
  uStack_6c = 0;
  fStack_5c = 65535.0;
  piStack_60 = DAT_0092ce9c;
  if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
    do {
      uVar4 = uStack_6c;
      piVar8 = (int *)*piStack_60;
      piStack_50 = piVar8;
      piVar10 = (int *)FUN_005d59f0(&LAB_00404ff0);
      piVar11 = (int *)(**(code **)(*piVar8 + 4))();
      uVar12 = (**(code **)(*piVar11 + 0x34))();
      uStack_54 = 0;
      uVar9 = (uint)local_68 >> 8;
      local_68 = (int *)((uint)local_68 & 0xffffff00);
      bVar2 = false;
      uStack_6c = uStack_6c & 0xffffff;
      piVar11 = (int *)FUN_00704e00();
      if ((piVar11 != (int *)0x0) &&
         (piVar11 = (int *)(**(code **)(*piVar11 + 0x58))(uVar12), piVar11 == piVar8)) {
        uStack_6c._0_3_ = (undefined3)uVar4;
        uStack_6c = CONCAT13(1,(undefined3)uStack_6c);
      }
      iVar17 = (**(code **)(*piVar8 + 0x58))();
      if (iVar17 == 2) {
        piVar11 = (int *)FUN_005d59f0(&LAB_004038e0);
        piVar13 = (int *)(**(code **)(*piVar8 + 0x44))();
        if (*piVar13 == DAT_0092c52c) {
          if ((piVar10 != (int *)0x0) && (cVar7 = (**(code **)(*piVar10 + 4))(), cVar7 != '\0')) {
            cStack_6d = cStack_6d + '\x01';
            bVar2 = true;
          }
          cVar7 = (**(code **)(*piVar8 + 0x88))();
          if (((cVar7 != '\0') && (piVar11 != (int *)0x0)) &&
             ((fVar18 = (float10)(**(code **)(*piVar11 + 0x74))(), fVar18 < (float10)_DAT_00890ea8
              || ((uStack_6c._3_1_ != '\0' && (bVar2)))))) {
            uStack_54 = 1;
            uStack_6c = CONCAT31(uStack_6c._1_3_,(byte)uStack_6c + '\x01');
          }
          uVar4 = uStack_6c;
          fStack_40 = *(float *)(param_1 + 0x10c);
          fStack_3c = *(float *)(param_1 + 0x110);
          fStack_38 = *(float *)(param_1 + 0x114);
          pfVar14 = (float *)(**(code **)(*piVar8 + 0xc))();
          fStack_4c = *pfVar14;
          fStack_48 = pfVar14[1];
          fStack_44 = pfVar14[2];
          fStack_28 = *(float *)(param_1 + 0x118);
          fStack_24 = *(float *)(param_1 + 0x11c);
          fStack_20 = *(float *)(param_1 + 0x120);
          cVar7 = (**(code **)(*piVar8 + 0x88))();
          if ((cVar7 == '\0') &&
             ((piVar10 == (int *)0x0 || (cVar7 = (**(code **)(*piVar10 + 4))(), cVar7 == '\0')))) {
LAB_007210d3:
            bVar2 = false;
          }
          else {
            fStack_34 = fStack_4c - fStack_40;
            fStack_30 = fStack_48 - fStack_3c;
            fStack_2c = fStack_44 - fStack_38;
            FUN_0040fe20(&fStack_34,&fStack_34);
            if (fStack_34 * fStack_28 + fStack_24 * fStack_30 + fStack_20 * fStack_2c <=
                _DAT_00890968) goto LAB_007210d3;
            bVar2 = true;
            local_68 = (int *)CONCAT31((int3)uVar9,1);
          }
          cVar7 = (**(code **)(*piVar8 + 0x88))();
          if (cVar7 != '\0') {
            uStack_6c._0_2_ = CONCAT11(uStack_6c._1_1_ + '\x01',(byte)uStack_6c);
            fVar18 = (float10)FUN_005c5e80((fStack_4c - fStack_40) * (fStack_4c - fStack_40) +
                                           (fStack_48 - fStack_3c) * (fStack_48 - fStack_3c) +
                                           (fStack_44 - fStack_38) * (fStack_44 - fStack_38));
            if (fVar18 < (float10)fStack_5c) {
              fStack_5c = (float)fVar18;
            }
            if (bVar2) {
              uStack_6c._2_1_ = SUB41(uVar4,2);
              uStack_6c._3_1_ = SUB41(uVar4,3);
              uStack_6c._0_3_ = CONCAT12(uStack_6c._2_1_ + '\x01',(undefined2)uStack_6c);
            }
          }
          piVar10 = (int *)FUN_004cca50(uVar12);
          if (piVar10 == (int *)0x0) {
            FUN_007138c0(&piStack_50);
          }
          else {
            cVar7 = (**(code **)(*piVar8 + 0x88))();
            if (cVar7 == '\0') {
              if (DAT_009922bc == 0) {
                uVar12 = 0;
                goto LAB_00721199;
              }
              uVar12 = (**(code **)(*piVar10 + 0x28))();
              FUN_007159d0(uVar12);
            }
            else {
              cVar7 = (**(code **)(*piVar10 + 0x60))();
              if (cVar7 == '\0') {
                uVar12 = 1;
LAB_00721199:
                (**(code **)(*piVar10 + 100))(uVar12);
              }
            }
            (**(code **)(*piVar10 + 0x74))(uStack_54);
            (**(code **)(*piVar10 + 0x1e8))(uStack_6c);
            (**(code **)(*piVar10 + 0x54))();
            piStack_60 = (int *)(DAT_00925ae8 - *(int *)(param_1 + 0x1e4));
            if (((*(float *)(*(int *)(param_1 + 0x184) + 0x38) <
                  (float)(int)piStack_60 * _DAT_00890984) &&
                (fVar18 = (float10)(**(code **)(*piVar10 + 0x68))(),
                fVar18 < (float10)*(float *)(param_1 + 0x108))) && (!bVar2)) {
              fVar18 = (float10)(**(code **)(*piVar10 + 0x68))();
              piStack_60 = (int *)(float)((float10)*(float *)(param_1 + 0x108) - fVar18);
              fVar18 = (float10)(**(code **)(*piVar10 + 0x58))();
              *(float *)(param_1 + 0x1dc) = (float)fVar18;
              *(int **)(param_1 + 0x1e0) = piStack_60;
              *(int *)(param_1 + 0x1e4) = DAT_00925ae8;
            }
            fVar18 = (float10)(**(code **)(*piVar10 + 0x58))();
            if (((fVar18 < (float10)*(float *)(param_1 + 0x1dc)) &&
                (fVar18 = (float10)(**(code **)(*piVar10 + 0x68))(),
                fVar18 < (float10)*(float *)(param_1 + 0x108))) &&
               (((char)local_68 == '\0' &&
                (fVar18 = (float10)(**(code **)(*piVar10 + 0x68))(),
                (float10)*(float *)(param_1 + 0x108) * (float10)_DAT_00891050 <
                (float10)*(float *)(param_1 + 0x108) - fVar18)))) {
              fVar18 = (float10)(**(code **)(*piVar10 + 0x68))();
              fVar1 = *(float *)(param_1 + 0x108);
              fVar19 = (float10)(**(code **)(*piVar10 + 0x58))();
              *(float *)(param_1 + 0x1dc) = (float)fVar19;
              *(float *)(param_1 + 0x1e0) = (float)((float10)fVar1 - fVar18);
              *(int *)(param_1 + 0x1e4) = DAT_00925ae8;
            }
          }
        }
        else {
          piVar10 = (int *)(**(code **)(*piVar8 + 0x44))();
          if (*piVar10 == DAT_0092c4f4) {
            if (*(int *)(param_1 + 0xe0) == 0) {
              FUN_0070da60(piVar8);
            }
            else {
              piVar11 = (int *)(**(code **)(*piVar8 + 4))();
              piVar10 = *(int **)(param_1 + 0xe0);
              iVar17 = (**(code **)(*piVar11 + 0x34))();
              iVar15 = (**(code **)(*piVar10 + 0x28))();
              if (iVar15 != iVar17) {
                piVar10 = (int *)(**(code **)(*piVar8 + 4))();
                iVar17 = **(int **)(param_1 + 0xe0);
                uVar12 = (**(code **)(*piVar10 + 0x34))();
                (**(code **)(iVar17 + 0x2c))(uVar12);
              }
              cVar7 = (**(code **)(*piVar8 + 0x88))();
              if ((cVar7 == '\0') ||
                 (cVar7 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x60))(), cVar7 != '\0')) {
                cVar7 = (**(code **)(*piVar8 + 0x88))();
                if ((cVar7 == '\0') &&
                   (cVar7 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x60))(), cVar7 != '\0')) {
                  (**(code **)(**(int **)(param_1 + 0xe0) + 100))(0);
                }
              }
              else {
                (**(code **)(**(int **)(param_1 + 0xe0) + 100))(1);
              }
              cVar7 = (**(code **)(*piVar8 + 0x88))();
              if ((cVar7 != '\0') && (local_68 != (int *)0x0)) {
                fVar19 = (float10)(**(code **)(*local_68 + 0x74))();
                fVar18 = (float10)_DAT_00890ea8;
                uVar16 = (uint3)(CONCAT22(extraout_var,
                                          (ushort)(fVar19 < fVar18) << 8 |
                                          (ushort)(NAN(fVar19) || NAN(fVar18)) << 10 |
                                          (ushort)(fVar19 == fVar18) << 0xe) >> 8);
                if (fVar19 < fVar18) {
                  iVar17 = CONCAT31(uVar16,1);
                }
                else {
                  iVar17 = (uint)uVar16 << 8;
                }
                (**(code **)(**(int **)(param_1 + 0xe0) + 0x74))(iVar17);
              }
              (**(code **)(**(int **)(param_1 + 0xe0) + 0x54))();
            }
          }
        }
      }
      piStack_60 = piStack_60 + 1;
    } while (piStack_60 != DAT_0092ce9c + DAT_0092cea4);
  }
  puVar6 = local_14;
  puVar5 = local_18;
  *(ushort *)(param_1 + 0x148) = (ushort)(byte)uStack_6c;
  *(char *)(param_1 + 0x1f8) = cStack_6d;
  *(float *)(param_1 + 0x13c) = fStack_5c;
  *(uint *)(param_1 + 0x1f0) = (uint)uStack_6c._1_1_;
  if (uStack_6c._1_1_ == uStack_6c._2_1_) {
    uVar9 = *(uint *)(param_1 + 0x54) | 0x20;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x54) & 0xffffffdf;
  }
  *(uint *)(param_1 + 0x54) = uVar9;
  if ((local_18 != (undefined4 *)0x0) &&
     (puVar3 = local_18, (int)local_14 - (int)local_18 >> 2 != 0)) {
    for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
      FUN_0071fa90(*puVar3);
    }
    FUN_005d0370(puVar5,(local_10 - (int)puVar5 >> 2) * 4,0);
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
  }
  puVar5 = local_18;
  iVar17 = *(int *)(param_1 + 0x5c);
  if (iVar17 != *(int *)(param_1 + 0x60)) {
    do {
      piVar8 = *(int **)(iVar17 + 4);
      if (((piVar8 != (int *)0x0) && (cVar7 = (**(code **)(*piVar8 + 0x60))(), cVar7 != '\0')) &&
         ((iVar15 = (**(code **)(*piVar8 + 0x28))(), iVar15 == 0 ||
          ((iVar15 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,iVar15), iVar15 == 0
           || (*(int *)(iVar15 + 4) == 0)))))) {
        uVar12 = (**(code **)(*piVar8 + 0x28))();
        FUN_007159d0(uVar12);
        break;
      }
      iVar17 = iVar17 + 8;
    } while (iVar17 != *(int *)(param_1 + 0x60));
  }
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd8) + 0x54))();
  }
  local_4 = 0xffffffff;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_005d0370(puVar5,(local_10 - (int)puVar5 >> 2) << 2,0);
  }
  ExceptionList = pvStack_c;
  return;
}

