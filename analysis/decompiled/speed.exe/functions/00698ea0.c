/* speed.exe 00698ea0 FUN_00698ea0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00487160 FUN_00487160
 * calls 00452940 FUN_00452940
 * calls 00488f70 FUN_00488f70
 * calls 00487000 FUN_00487000
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00698ea0(int *param_1,float *param_2,float *param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,int param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float10 fVar11;
  float *unaff_retaddr;
  float *local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined1 local_228 [132];
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 uStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  int iStack_12c;
  undefined1 auStack_120 [4];
  float local_11c;
  undefined1 uStack_58;
  undefined4 uStack_54;
  float *pfStack_4;
  
  iVar1 = *(int *)param_1[0x1e];
  FUN_00487160(param_1 + 0x18);
  fVar2 = *(float *)(param_5 + 0x98) + *(float *)(param_5 + 0x98);
  local_24c = 0;
  fVar3 = *(float *)(param_5 + 0x94) + *(float *)(param_5 + 0x94);
  local_248 = 0;
  local_244 = 0;
  fVar10 = *(float *)(param_5 + 0x90) + *(float *)(param_5 + 0x90);
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  fVar10 = fVar10 * fVar10;
  fVar3 = fVar3 * fVar3;
  fVar2 = fVar2 * fVar2;
  local_278 = (fVar2 + fVar3) * _DAT_008a939c * _DAT_008ab384;
  local_274 = (fVar2 + fVar10) * _DAT_008a939c * _DAT_008ab384;
  local_270 = (fVar3 + fVar10) * _DAT_008a939c * _DAT_008ab384;
  local_234 = local_278;
  local_230 = local_274;
  local_22c = local_270;
  FUN_00487000(param_5 + 0x10,0x49742400,&local_234,&local_24c,param_6,&local_240,param_5);
  local_26c = 0.0;
  local_268 = 0.0;
  local_264 = 0.0;
  local_260 = 0.0;
  local_25c = 0.0;
  local_258 = 0.0;
  local_254 = 0.0;
  iVar9 = param_1[0x21];
  local_250 = 0.0;
  iVar5 = FUN_00452940();
  if (iVar5 == 0) {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  else {
    pfVar6 = (float *)(iVar9 + 200);
  }
  iVar9 = param_1[0x21];
  uVar7 = FUN_00452940();
  if (uVar7 < 2) {
    local_280 = (float *)FUN_006269b0(4);
  }
  else {
    local_280 = (float *)(iVar9 + 0xcc);
  }
  iVar9 = param_1[0x21];
  iVar5 = FUN_00452940();
  if (iVar5 == 0) {
    pfVar8 = (float *)FUN_006269b0(4);
  }
  else {
    pfVar8 = (float *)(iVar9 + 200);
  }
  local_254 = *local_280;
  if (*pfVar8 < *local_280) {
    local_254 = *pfVar8;
  }
  local_25c = param_2[1];
  local_258 = param_2[2];
  local_274 = param_3[1];
  local_260 = *param_2;
  local_26c = *param_3;
  local_264 = param_3[2];
  local_250 = *(float *)(*(int *)(param_8 + 8) + 0xe8);
  iVar9 = param_1[0x21];
  local_254 = local_254 * local_250;
  local_250 = *pfVar6 * local_250;
  local_270 = local_260 * *(float *)(iVar1 + 0x90) +
              local_25c * *(float *)(iVar1 + 0x94) + local_258 * *(float *)(iVar1 + 0x98);
  local_278 = (local_260 * *(float *)(iVar1 + 0x70) +
              local_25c * *(float *)(iVar1 + 0x74) + local_258 * *(float *)(iVar1 + 0x78)) *
              *(float *)(iVar9 + 0x70);
  fVar10 = (local_260 * *(float *)(iVar1 + 0x80) +
           local_25c * *(float *)(iVar1 + 0x84) + local_258 * *(float *)(iVar1 + 0x88)) *
           *(float *)(iVar9 + 0x74);
  fVar2 = local_270 * *(float *)(iVar9 + 0x78);
  local_268 = local_274;
  fVar11 = (float10)FUN_005c5e80(local_278 * local_278 + fVar10 * fVar10 + fVar2 * fVar2);
  local_11c = (float)fVar11;
  (**(code **)(*param_1 + 0x34))(param_8,&local_26c,local_228);
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_58 = 1;
  uStack_54 = 0;
  cVar4 = FUN_00488f70(auStack_120,&local_278,0x20);
  if (cVar4 == '\0') {
    return 0;
  }
  fVar11 = (float10)FUN_005c5e80(fStack_13c * fStack_13c +
                                 fStack_140 * fStack_140 + fStack_144 * fStack_144);
  unaff_retaddr[0x14] = *(float *)(iVar1 + 0x20);
  unaff_retaddr[0x15] = *(float *)(iVar1 + 0x24);
  unaff_retaddr[0x16] = *(float *)(iVar1 + 0x28);
  unaff_retaddr[0x18] = *param_3;
  unaff_retaddr[0x19] = param_3[1];
  unaff_retaddr[0x1a] = param_3[2];
  unaff_retaddr[3] = *(float *)(param_4 + 4);
  iVar9 = (**(code **)(param_1[0x12] + 4))();
  unaff_retaddr[0xf] = *(float *)(iVar9 + 8);
  fVar10 = (float)((uint)unaff_retaddr[7] & 0xfffffffa | 2);
  unaff_retaddr[7] = fVar10;
  unaff_retaddr[0x1f] = *(float *)(param_5 + 4);
  unaff_retaddr[4] = *param_2;
  unaff_retaddr[5] = param_2[1];
  unaff_retaddr[6] = param_2[2];
  *unaff_retaddr = *pfStack_4;
  unaff_retaddr[1] = pfStack_4[1];
  unaff_retaddr[2] = pfStack_4[2];
  unaff_retaddr[7] = (float)(((uint)(iStack_12c == 2) << 7 ^ (uint)fVar10) & 0x80 ^ (uint)fVar10);
  unaff_retaddr[0x1c] = fStack_150;
  unaff_retaddr[0x1d] = fStack_14c;
  unaff_retaddr[0x1e] = fStack_148;
  fVar2 = _DAT_00890968;
  unaff_retaddr[8] = fStack_15c;
  unaff_retaddr[9] = fStack_158;
  unaff_retaddr[0xb] = (float)fVar11;
  unaff_retaddr[10] = fStack_154;
  fVar10 = _DAT_00890968;
  if (fVar2 < fStack_164) {
    fVar10 = _DAT_0089096c / fStack_164;
  }
  unaff_retaddr[0x1b] = 0.0;
  unaff_retaddr[0x17] = fVar10 * (float)fVar11;
  unaff_retaddr[0xc] = *pfStack_4 - *(float *)(iVar1 + 0x10);
  unaff_retaddr[0xd] = pfStack_4[1] - *(float *)(iVar1 + 0x14);
  unaff_retaddr[0xe] = pfStack_4[2] - *(float *)(iVar1 + 0x18);
  (**(code **)(param_1[0x12] + 0xa4))(unaff_retaddr + 0xc,0);
  *(undefined4 *)(iVar1 + 0x30) = uStack_198;
  *(undefined4 *)(iVar1 + 0x34) = uStack_194;
  *(undefined4 *)(iVar1 + 0x38) = uStack_190;
  *(undefined4 *)(iVar1 + 0x20) = uStack_1a4;
  *(undefined4 *)(iVar1 + 0x24) = uStack_1a0;
  *(undefined4 *)(iVar1 + 0x28) = uStack_19c;
  *(undefined1 *)(iVar1 + 0x5d) = 0;
  return 1;
}

