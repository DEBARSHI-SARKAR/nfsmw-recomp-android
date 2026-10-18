/* speed.exe 0069c030 FUN_0069c030; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00768bb0 FUN_00768bb0
 * calls 007c4b80 FUN_007c4b80
 * calls 006ed550 FUN_006ed550
 * calls 00768c00 FUN_00768c00
 * calls 0040e040 FUN_0040e040
 * calls 00407cc0 FUN_00407cc0
 * calls 00768be0 FUN_00768be0
 * calls 00645a40 FUN_00645a40
 * calls 00627400 FUN_00627400
 * calls 00625970 FUN_00625970
 * calls 006e8de0 FUN_006e8de0
 * calls 0068cab0 FUN_0068cab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0069c030(int *param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int *param_7)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  float unaff_EDI;
  uint uVar12;
  float10 fVar13;
  float unaff_retaddr;
  float fStack_44;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pfStack_8 = (float *)&LAB_0087c3f7;
  pvStack_c = ExceptionList;
  fVar1 = *(float *)(param_1[0x1e] + 0x58);
  ExceptionList = &pvStack_c;
  if (_DAT_00890968 < fVar1) {
    ExceptionList = &pvStack_c;
    uVar7 = (**(code **)(*(int *)param_1[0x24] + 0x20))();
    fVar13 = (float10)FUN_006ed550(uVar7);
    if ((float10)fVar1 < fVar13) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  piVar2 = param_7;
  if ((param_7 != (int *)0x0) && (iVar8 = (**(code **)(*param_7 + 4))(), iVar8 == 2)) {
    uVar7 = (**(code **)(*piVar2 + 0x44))();
    FUN_00407cc0(uVar7);
    if (*(char *)(iStack_18 + 0x1c) != '\0') {
      uStack_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = pvStack_c;
      return;
    }
    uStack_4 = 0xffffffff;
    FUN_0045a430();
  }
  fVar1 = *(float *)(param_1[0x1e] + 0x60) * _DAT_00894200;
  if (_DAT_00890968 < fVar1) {
    (**(code **)(*(int *)param_1[0x24] + 0x48))(auStack_2c);
    uStack_3c = *param_2;
    fStack_38 = (float)param_2[1];
    fStack_34 = (float)param_2[2];
    (**(code **)(*(int *)param_1[0x24] + 0xa4))(&uStack_3c,0);
    if (pfStack_8[2] <= fStack_30 * _DAT_008933d4) {
      if (-(fStack_30 * _DAT_008933d4) <= pfStack_8[2]) {
        if ((pfStack_8[1] <= fStack_34 * _DAT_008933d4) || (_DAT_008ab588 <= fVar1)) {
          if ((-(fStack_34 * _DAT_008933d4) <= pfStack_8[1]) || (fVar1 <= _DAT_0089119c)) {
            uStack_4 = 3;
            if (*pfStack_8 <= _DAT_00890968) {
              uStack_4 = 2;
            }
          }
          else {
            uStack_4 = 9;
          }
        }
        else {
          uStack_4 = 8;
        }
      }
      else if ((*pfStack_8 <= fStack_38 * _DAT_008933d4) || (_DAT_008ab588 <= fStack_44)) {
        if ((-(fStack_38 * _DAT_008933d4) <= *pfStack_8) || (fStack_44 <= _DAT_0089119c)) {
          uStack_4 = 1;
        }
        else {
          uStack_4 = 6;
        }
      }
      else {
        uStack_4 = 7;
      }
    }
    else if ((*pfStack_8 <= fStack_38 * _DAT_008933d4) || (_DAT_008ab588 <= fStack_44)) {
      if ((-(fStack_38 * _DAT_008933d4) <= *pfStack_8) || (fStack_44 <= _DAT_0089119c)) {
        uStack_4 = 0;
      }
      else {
        uStack_4 = 4;
      }
    }
    else {
      uStack_4 = 5;
    }
    iVar8 = FUN_0068cab0(uStack_4);
    fVar1 = *(float *)(iVar8 + 4);
    pfStack_8 = (float *)FUN_007c4b80();
    if (5 < (int)pfStack_8) {
      pfStack_8 = (float *)0x6;
    }
    fVar3 = *(float *)(param_1[0x1e] + 100);
    if ((((_DAT_00890968 < fVar3) && ((float)param_1[0x22] < _DAT_0089096c)) &&
        (fVar3 = _DAT_0089096c / fVar3, fVar1 = (unaff_retaddr / unaff_EDI) * fVar3 * fVar1,
        fVar3 * *(float *)(param_1[0x1e] + 0x54) < fVar1)) &&
       (fVar1 = fVar1 + (float)param_1[0x22], param_1[0x22] = (int)fVar1, _DAT_0089096c < fVar1)) {
      iVar8 = FUN_00627400(0xc);
      uStack_10 = 1;
      if (iVar8 != 0) {
        FUN_00625970(*(undefined4 *)(param_1[0xd] + 8));
      }
      uStack_10 = 0xffffffff;
    }
    fVar13 = (float10)FUN_006e8de0();
    piVar2 = (int *)(float)fVar13;
    piVar9 = (int *)(**(code **)(*(int *)param_1[0xd] + 0x74))();
    uVar7 = uStack_3c;
    iVar8 = 0;
    if (piVar9 != (int *)0x0) {
      iVar8 = FUN_00768bb0(auStack_20,param_3);
      iVar8 = (**(code **)(*piVar9 + 0x28))(*(undefined4 *)(iVar8 + 8));
      if (iVar8 != 0) {
        piVar9 = param_1 + 0x18;
        FUN_00645a40(0x1ea131b8,uVar7,piVar9,2);
        piVar5 = param_7;
        if ((param_7 != (int *)0x0) && (cVar6 = FUN_0040e040(&param_7), cVar6 != '\0')) {
          FUN_00645a40(0x1e3a3751,uVar7,piVar9,2);
          iVar10 = (**(code **)(*param_7 + 0x58))();
          if (iVar10 == 2) {
            FUN_00645a40(0xe8d20c6b,uVar7,piVar9,2);
          }
          cVar6 = (**(code **)(*piVar5 + 0x24))();
          if (cVar6 != '\0') {
            FUN_00645a40(0xb13e6c7e,uVar7,piVar9,2);
          }
        }
        iVar10 = 0;
        param_1 = piVar2;
        if (0 < (int)param_2) {
          do {
            puVar11 = (undefined4 *)FUN_00768c00(&param_7,iVar10);
            FUN_00645a40(*puVar11,uVar7,piVar9,2);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)param_2);
        }
      }
    }
    if ((0 < (int)param_4) &&
       (cVar6 = (**(code **)(*param_1 + 0x2c))(), uVar4 = param_4, cVar6 != '\0')) {
      param_7 = (int *)(param_3 * 3);
      uVar12 = (uint)param_1[0x26] >> ((byte)param_7 & 0x1f) & 7;
      if ((uVar12 < 6) && ((int)uVar12 < (int)param_4)) {
        if (iVar8 != 0) {
          for (; (int)uVar12 < (int)uVar4; uVar12 = uVar12 + 1) {
            puVar11 = (undefined4 *)FUN_00768be0(&param_3,uVar12);
            FUN_00645a40(*puVar11,uVar7,piVar2 + 0x18,2);
          }
        }
        piVar2[0x26] = ~(7 << ((byte)param_7 & 0x1f)) & piVar2[0x26] |
                       (uVar4 & 7) << ((byte)param_7 & 0x1f);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

