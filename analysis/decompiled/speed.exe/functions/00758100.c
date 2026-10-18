/* speed.exe 00758100 FUN_00758100; analysis pseudocode, not buildable source.
 * calls 0074b000 FUN_0074b000
 * calls 007539d0 FUN_007539d0
 * calls 0074a160 FUN_0074a160
 * calls 0074a070 FUN_0074a070
 * calls 007252f0 FUN_007252f0
 * calls 0073cc80 FUN_0073cc80
 * calls 0074a5d0 FUN_0074a5d0
 * calls 00753ac0 FUN_00753ac0
 * calls 0064b680 FUN_0064b680
 * calls 0074acc0 FUN_0074acc0
 * calls 00757770 FUN_00757770
 * calls 006bf530 FUN_006bf530
 * calls 0073cdb0 FUN_0073cdb0
 * calls 0074a320 FUN_0074a320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00758100(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_4;
  
  fVar5 = DAT_00925970;
  if (DAT_00925e90 == 6) {
    local_5c = DAT_00925970;
    cVar6 = FUN_0064b680();
    if (cVar6 != '\0') {
      local_50 = (float)*(int *)(param_1 + 0x34a8);
      if (*(int *)(param_1 + 0x34a8) < 0) {
        local_50 = local_50 + _DAT_00891214;
      }
      local_4c = (float)*(int *)(param_1 + 0x34ac);
      if (*(int *)(param_1 + 0x34ac) < 0) {
        local_4c = local_4c + _DAT_00891214;
      }
      local_48 = (float)*(int *)(param_1 + 0x34b0);
      if (*(int *)(param_1 + 0x34b0) < 0) {
        local_48 = local_48 + _DAT_00891214;
      }
      local_44 = 0x43000000;
      local_4 = 0;
      iVar7 = FUN_006bf530();
      if ((iVar7 < 3) || (*(float *)(param_1 + 0x28c) <= _DAT_00890968)) {
        local_40 = *(float *)(param_1 + 0x290);
      }
      else {
        local_40 = *(float *)(param_1 + 0x290) * _DAT_008b2f28;
      }
      FUN_007252f0(0,&local_50,1,0);
      FUN_0074acc0();
      return;
    }
    FUN_0073cdb0(*(undefined4 *)(param_1 + 0x288));
    _DAT_009b0a50 = _DAT_00904aec * fVar5 + _DAT_009b0a50;
    if (_DAT_00890960 < _DAT_009b0a50) {
      _DAT_009b0a50 = 0.0;
    }
    if (DAT_008f86e4 == 0) {
      *(undefined4 *)(param_1 + 0x240) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      uVar8 = FUN_0074b000(*(undefined4 *)(param_1 + 0x288),1);
      *(uint *)(param_1 + 0x23c) = uVar8;
      if ((uVar8 & 2) != 0) {
        *(undefined4 *)(param_1 + 0x240) = 1;
        *(undefined4 *)(param_1 + 0x23c) = 0;
      }
      if (*(int *)(param_1 + 0x23c) != 0) {
        *(undefined4 *)(param_1 + 0x23c) = 1;
      }
      *(undefined4 *)(param_1 + 0x28c) = 0;
      *(undefined4 *)(param_1 + 0x36a0) = 0;
      return;
    }
    if (DAT_009b0a30 == 0) {
      if (DAT_00925e90 != 6) {
        *(undefined4 *)(param_1 + 0x369c) = 0x3f800000;
        return;
      }
      fVar4 = DAT_00904b38;
      if (*(float *)(param_1 + 0x28c) == _DAT_00890968) {
        fVar4 = _DAT_00890968;
      }
      *(float *)(param_1 + 0x369c) = fVar4;
    }
    else {
      *(float *)(param_1 + 0x36a0) = DAT_00904b38;
    }
    fVar4 = (*(float *)(param_1 + 0x369c) - *(float *)(param_1 + 0x36a0)) * _DAT_008b2f60 +
            *(float *)(param_1 + 0x36a0);
    if (*(float *)(param_1 + 0x369c) <= *(float *)(param_1 + 0x36a0)) {
      *(float *)(param_1 + 0x36a0) = fVar4;
      if (fVar4 < _DAT_008b2e60) {
        *(undefined4 *)(param_1 + 0x36a0) = 0;
      }
    }
    else {
      *(float *)(param_1 + 0x36a0) = fVar4;
    }
    if ((DAT_009b2a9c != 0) && (DAT_009b0c48 != 0)) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x288) + 0x40);
      uVar1 = *(undefined4 *)(iVar7 + 0x44);
      uVar2 = *(undefined4 *)(iVar7 + 0x40);
      fVar9 = (float10)FUN_007539d0(uVar2,uVar1);
      fVar3 = (float10)_DAT_00890968;
      *(float *)(param_1 + 0x3694) = (float)fVar9;
      if (fVar9 <= fVar3) {
        fVar9 = (float10)FUN_00753ac0(uVar2,uVar1);
      }
      *(float *)(param_1 + 0x3698) = (float)fVar9;
      iVar7 = FUN_006bf530();
      if (2 < iVar7) {
        *(float *)(param_1 + 0x3694) = *(float *)(param_1 + 0x3694) * _DAT_00890f14;
      }
    }
    if (fVar5 == _DAT_00890968) {
      local_5c = 0.001;
    }
    local_5c = _DAT_0089096c / local_5c;
    fVar5 = (*(float *)(param_1 + 0x3694) - *(float *)(param_1 + 0x28c)) /
            (local_5c * _DAT_00904ac4) + *(float *)(param_1 + 0x28c);
    *(float *)(param_1 + 0x28c) = fVar5;
    if ((*(float *)(param_1 + 0x3694) == _DAT_00890968) && (fVar5 < _DAT_00890dc4)) {
      *(undefined4 *)(param_1 + 0x28c) = 0;
    }
    if (_DAT_0089096c < *(float *)(param_1 + 0x28c)) {
      *(undefined4 *)(param_1 + 0x28c) = 0x3f800000;
    }
    fVar5 = (*(float *)(param_1 + 0x3698) - *(float *)(param_1 + 0x290)) /
            (local_5c * _DAT_00904ac8) + *(float *)(param_1 + 0x290);
    *(float *)(param_1 + 0x290) = fVar5;
    if ((*(float *)(param_1 + 0x3698) == _DAT_00890968) && (fVar5 < DAT_009b0a3c + _DAT_00890dc4)) {
      *(float *)(param_1 + 0x290) = DAT_009b0a3c;
    }
    if (_DAT_0089096c < *(float *)(param_1 + 0x290)) {
      *(undefined4 *)(param_1 + 0x290) = 0x3f800000;
    }
    FUN_0073cc80(*(undefined4 *)(param_1 + 0x28c));
    *(undefined4 *)(param_1 + 0x36a4) = 0x3f800000;
    FUN_00757770();
    FUN_0074acc0();
    iVar7 = *(int *)(*(int *)(param_1 + 0x288) + 0x68);
    if ((iVar7 == 0) || ((*(int *)(iVar7 + 0x23c) == 0 && (*(int *)(iVar7 + 0x240) == 0)))) {
      *(undefined4 *)(param_1 + 0x280) = 0;
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x280)) {
    case 0:
      *(undefined4 *)(param_1 + 0x280) = 2;
      FUN_0074a070();
      FUN_0074a160();
      param_1 = param_1 + 0x3880;
      iVar7 = 200;
      do {
        FUN_0074a320(param_1);
        param_1 = param_1 + 0x20;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      FUN_0074a5d0();
      return;
    case 2:
      *(undefined4 *)(param_1 + 0x280) = 1;
    case 1:
      FUN_0074a160();
      FUN_0074a5d0();
      return;
    case 3:
      *(undefined4 *)(param_1 + 0x280) = 1;
    default:
      FUN_0074a5d0();
    }
  }
  return;
}

