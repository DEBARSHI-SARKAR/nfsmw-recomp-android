/* speed.exe 0073e620 FUN_0073e620; analysis pseudocode, not buildable source.
 * calls 0045e300 FUN_0045e300
 * calls 006bd900 FUN_006bd900
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd940 FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_0073e620(int param_1,int param_2,float param_3,float param_4,float param_5,float param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_00444fe0(local_90,param_2);
  FUN_0045e300(local_90,local_90);
  FUN_006bd900(local_50,param_2,local_90);
  iVar7 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(iVar7 + 0x24);
  uVar4 = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar7 + 0x20);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  pfVar1 = (float *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  iVar7 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(iVar7 + 0x14);
  uVar4 = *(undefined4 *)(iVar7 + 0x18);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar7 + 0x10);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  iVar7 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(iVar7 + 0x34);
  uVar4 = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  FUN_006bd940(pfVar1,local_50,*(int *)(param_1 + 4) + 0x20);
  FUN_006bd940((undefined4 *)(param_1 + 0xa0),local_50,*(int *)(param_1 + 4) + 0x10);
  pfVar2 = (float *)(param_1 + 0x90);
  FUN_006bd940(pfVar2,local_50,*(int *)(param_1 + 4) + 0x30);
  fVar9 = *(float *)(param_1 + 0xb4) * _DAT_00890964;
  fVar5 = *pfVar1 * _DAT_00890964;
  *(float *)(param_1 + 0xb4) = fVar9;
  *pfVar1 = fVar5;
  *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) * _DAT_00890964;
  if (param_3 < _DAT_00890968 == (param_3 == _DAT_00890968)) {
    fVar5 = *(float *)(*(int *)(param_1 + 4) + 0x17a4);
    fVar6 = *(float *)(param_2 + 0x28) * _DAT_008910f0;
    if (_DAT_00890968 <= fVar6) {
      fVar6 = _DAT_00890968;
    }
    if ((DAT_009b376c & 1) == 0) {
      DAT_009b376c = DAT_009b376c | 1;
      _DAT_009b3768 = param_4;
    }
    if ((DAT_009b376c & 2) == 0) {
      DAT_009b376c = DAT_009b376c | 2;
      _DAT_009b3764 = param_5;
    }
    if ((DAT_009b376c & 4) == 0) {
      DAT_009b376c = DAT_009b376c | 4;
      _DAT_009b3760 = param_6;
    }
    fVar10 = (-fVar6 - *(float *)(param_1 + 0xc4)) * _DAT_009b3768 -
             _DAT_009b3764 * *(float *)(param_1 + 0xc0);
    fVar6 = *pfVar2;
    if (fVar6 < _DAT_00890968) {
      fVar6 = -fVar6;
    }
    if (_DAT_00890cd4 < fVar6) {
      fVar10 = fVar10 - *pfVar2 / _DAT_009b3760;
    }
    fVar6 = *(float *)(param_1 + 0xa8);
    if (fVar6 < _DAT_00890968) {
      fVar6 = -fVar6;
    }
    if (_DAT_00893710 < fVar6) {
      fVar10 = fVar10 - (*(float *)(param_1 + 0xa8) / _DAT_009b3760) * _DAT_008959e4;
    }
    fVar6 = -fVar9;
    if (fVar6 < _DAT_00890968) {
      fVar6 = -fVar6;
    }
    if (_DAT_00890dc4 < fVar6) {
      fVar10 = fVar10 - fVar9 * _DAT_00895018;
    }
    fVar9 = fVar10 * fVar5 + *(float *)(param_1 + 0xc0);
    *(float *)(param_1 + 0xc0) = fVar9;
    fVar5 = fVar5 * fVar9 + *(float *)(param_1 + 0xc4);
    bVar8 = _DAT_00890968 <= fVar5;
    *(float *)(param_1 + 0xc4) = fVar5;
    if (bVar8) {
      if (param_3 < fVar5) {
        fVar9 = fVar9 * _DAT_00891068;
        *(float *)(param_1 + 0xc4) = param_3;
        *(float *)(param_1 + 0xc0) = fVar9;
      }
      return (float10)*(float *)(param_1 + 0xc4);
    }
    *(float *)(param_1 + 0xc0) = fVar9 * _DAT_00890dcc;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return (float10)*(float *)(param_1 + 0xc4);
}

