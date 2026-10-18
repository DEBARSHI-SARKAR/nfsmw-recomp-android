/* speed.exe 00470fe0 FUN_00470fe0; analysis pseudocode, not buildable source.
 * calls 00470bf0 FUN_00470bf0
 * calls 0045f340 FUN_0045f340
 * calls 0073cfe0 FUN_0073cfe0
 * calls 00402690 FUN_00402690
 * calls 00449320 FUN_00449320
 * calls 006bde60 FUN_006bde60
 * calls 00767790 FUN_00767790
 * calls 0045f640 FUN_0045f640
 * calls 00468af0 FUN_00468af0
 * calls 00789ec0 FUN_00789ec0
 * calls 006bd940 FUN_006bd940
 * calls 00789c90 FUN_00789c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00470fe0(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  float10 fVar4;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_b0 [48];
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_4c [48];
  byte local_1c;
  
  FUN_006bde60(local_b0,param_2);
  local_d0 = local_80 * _DAT_00894594;
  local_cc = local_7c * _DAT_00894594;
  local_c8 = local_78 * _DAT_00894594;
  FUN_0045f640(&local_d0,&local_d0,param_3,0x3f000000);
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 0.0;
  fVar4 = (float10)FUN_0045f340(param_3,&local_80);
  fVar4 = (fVar4 + (float10)_DAT_0089096c) * (float10)_DAT_00894594;
  local_e8 = (float)fVar4;
  if ((float10)_DAT_00894c1c < fVar4) {
    local_e8 = 24.9;
  }
  local_6c = -local_cc;
  local_68 = local_c8;
  local_64 = local_d0;
  FUN_00789ec0(&local_6c,local_e8,1);
  local_dc = -local_7c;
  local_d8 = local_78;
  local_d4 = local_80;
  uVar2 = FUN_00470bf0(*(undefined4 *)(param_1 + 0x24),param_3,&local_80,&local_c0);
  local_80 = local_80 + local_c0;
  local_7c = local_7c + local_bc;
  local_78 = local_78 + local_b8;
  iVar3 = FUN_0073cfe0(&DAT_009195e0 + *(int *)(param_1 + 0x10) * 0x1c,1);
  local_dc = -local_7c;
  local_d8 = local_78;
  local_d4 = local_80;
  if ((iVar3 == 0) && (fVar1 = *(float *)(param_3 + 8) + _DAT_00894594, local_78 < fVar1)) {
    local_d8 = fVar1;
  }
  FUN_00449320(0x3ccccccd);
  FUN_00789c90(*(undefined4 *)(param_1 + 0x24),&local_dc,1);
  if ((local_1c & 1) != 0) {
    FUN_00402690(&local_e8);
    fVar4 = (float10)FUN_00767790(&local_e8,local_4c,&local_dc);
    if ((float10)local_78 < (float10)_DAT_008910f0 + fVar4) {
      local_78 = (float)((float10)_DAT_008910f0 + fVar4);
    }
    if ((iVar3 != 0) && (fVar4 + (float10)_DAT_00894c18 < (float10)local_78)) {
      local_78 = (float)(fVar4 + (float10)_DAT_00894c18);
    }
  }
  FUN_006bd940(&local_60,param_2,param_3);
  if (local_58 < _DAT_00890968 == (local_58 == _DAT_00890968)) {
    local_e8 = local_60 * (_DAT_0089096c / local_58);
    local_e4 = (_DAT_0089096c / local_58) * local_5c;
    FUN_00468af0(param_2,&local_80,param_3,&local_e8);
    return uVar2;
  }
  return 0;
}

