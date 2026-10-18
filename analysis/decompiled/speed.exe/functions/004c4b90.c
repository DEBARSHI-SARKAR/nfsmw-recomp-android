/* speed.exe 004c4b90 FUN_004c4b90; analysis pseudocode, not buildable source.
 * calls 004bb580 FUN_004bb580
 * calls 004bb6b0 FUN_004bb6b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c4b90(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float local_20 [8];
  
  FUN_004bb580();
  FUN_004bb6b0();
  *(undefined1 *)(param_1 + 0xf0) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  iVar4 = 0;
  if ((*(int *)(iVar1 + 0xcc) == 0) && (*(int *)(iVar1 + 0x198) == 0)) {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  *(undefined1 *)(param_1 + 0xf1) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if ((*(int *)(iVar1 + 0x110) == 0) && (*(int *)(iVar1 + 0x154) == 0)) {
    *(undefined1 *)(param_1 + 0xf1) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  pfVar5 = local_20;
  pfVar6 = (float *)(param_1 + 0x2c);
  pfVar7 = (float *)(param_1 + 0x68);
  do {
    pfVar7[-4] = ABS(*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 200 + iVar4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
    _DAT_008eeb18 = *(float *)(iVar4 + 0xf8 + iVar1);
    fVar2 = *(float *)(iVar4 + 0xc0 + iVar1);
    *pfVar5 = *(float *)(iVar4 + 0xbc + iVar1);
    fVar3 = (_DAT_008eeb18 - _DAT_008eeb10) / (_DAT_008eeb14 - _DAT_008eeb10);
    pfVar5[1] = fVar2;
    fVar2 = _DAT_00890968;
    if ((_DAT_00890968 < fVar3) && (fVar2 = fVar3, _DAT_0089096c < fVar3)) {
      fVar2 = _DAT_0089096c;
    }
    DAT_008eeb20 = 0;
    _DAT_008eeb1c = (_DAT_008eeb0c - _DAT_008eeb08) * fVar2 + _DAT_008eeb08;
    *pfVar7 = _DAT_008eeb1c;
    if ((iVar4 < 1) || (0xcb < iVar4)) {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0xcc + iVar4) != 0) {
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *pfVar5;
        *(float *)(param_1 + 0x54) = pfVar5[1] + *(float *)(param_1 + 0x54);
      }
    }
    else if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0xcc + iVar4) != 0) {
      *(float *)(param_1 + 0x48) = *pfVar5 + *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x4c) = pfVar5[1] + *(float *)(param_1 + 0x4c);
    }
    fVar2 = _DAT_008ee6b0 * *pfVar5;
    fVar3 = _DAT_008974a8;
    if ((_DAT_008974a8 < fVar2) && (fVar3 = fVar2, _DAT_00897184 < fVar2)) {
      fVar3 = _DAT_00897184;
    }
    pfVar6[-1] = fVar3;
    fVar2 = _DAT_008ee6b4 * pfVar5[1];
    fVar3 = _DAT_008974a8;
    if ((_DAT_008974a8 < fVar2) && (fVar3 = fVar2, _DAT_00897184 < fVar2)) {
      fVar3 = _DAT_00897184;
    }
    *pfVar6 = fVar3;
    iVar4 = iVar4 + 0x44;
    pfVar7 = pfVar7 + 1;
    pfVar5 = pfVar5 + 2;
    pfVar6 = pfVar6 + 2;
  } while (iVar4 < 0x110);
  return;
}

