/* speed.exe 00475a50 FUN_00475a50; analysis pseudocode, not buildable source.
 * calls 0046f540 FUN_0046f540
 * calls 0046f4a0 FUN_0046f4a0
 * calls 0045f340 FUN_0045f340
 * calls 0045f510 FUN_0045f510
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0045f640 FUN_0045f640
 * calls 0045db30 FUN_0045db30
 * calls 0045f490 FUN_0045f490
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 0045f7c0 FUN_0045f7c0
 * calls 0045dd10 FUN_0045dd10
 * calls 007c4b80 FUN_007c4b80
 * calls 006bde60 FUN_006bde60
 * calls 0045dbf0 FUN_0045dbf0
 * calls 00651790 FUN_00651790
 * calls 00444fe0 FUN_00444fe0
 * calls 00466a60 FUN_00466a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00475a50(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_290;
  float local_28c;
  float local_288;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined1 local_1e0 [8];
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  undefined1 local_190 [64];
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_00466a60(local_110,0,0);
  FUN_006bde60(local_d0,local_110);
  if (DAT_008edea0 == 1) {
    FUN_006bde60(local_190,&local_1d0);
    FUN_006bde60(local_150,local_50);
    thunk_FUN_006bd940(&local_210,local_150,0);
    FUN_0046f540(&local_1f0,local_278);
    fVar7 = (float10)FUN_0045f340(0,0);
    local_254 = (float)(fVar7 * (float10)local_1f0);
    local_290 = 0.0;
    local_28c = 0.0;
    local_288 = 0.0;
    thunk_FUN_006bd940(&local_290,local_110,&local_290);
    thunk_FUN_006bd940(&local_220,&local_1d0,&DAT_008ee180);
    FUN_0045f510(&local_2a0,0,-local_254);
    local_2a0 = local_2a0 + local_290;
    local_29c = local_28c + local_29c;
    local_298 = local_288 + local_298;
    if (local_298 <= local_218) {
      local_298 = local_218;
    }
    local_240 = local_290 - local_2a0;
    local_23c = local_28c - local_29c;
    local_238 = local_288 - local_298;
    local_250 = local_220 - local_2a0;
    local_26c = local_21c - local_29c;
    local_268 = local_218 - local_298;
    local_24c = local_26c;
    local_248 = local_268;
    local_208 = local_238;
    FUN_0045f490(&local_240,&local_240);
    FUN_0045f490(&local_250,&local_250);
    local_278 = local_24c * local_23c + local_248 * local_238 + local_250 * local_240;
    sVar3 = FUN_0045dd10(local_278);
    iVar4 = FUN_007c4b80();
    if ((ushort)iVar4 < (ushort)(0x4000U - sVar3)) {
      local_270 = -local_240;
      local_26c = -local_23c;
      local_268 = -local_238;
      local_210 = local_220 - local_290;
      fVar2 = local_21c - local_28c;
      local_1d8 = local_218 - local_288;
      local_278 = SQRT(fVar2 * fVar2 + local_1d8 * local_1d8 + local_210 * local_210);
      local_224 = _DAT_0089096c / local_278;
      local_210 = local_210 * local_224;
      local_1f4 = fVar2 * local_224 * local_26c +
                  local_1d8 * local_224 * local_268 + local_210 * local_270;
      iVar5 = FUN_0045dd10(local_1f4);
      fVar7 = (float10)FUN_0045db30(iVar4);
      iVar6 = FUN_0045dd10((float)(fVar7 * (float10)local_224 * (float10)local_254));
      fVar2 = local_1f4 * local_278;
      iVar6 = ((0x4000 - iVar5) + iVar4) - iVar6;
      local_254 = fVar2;
      FUN_0045f640(&local_2a0,&local_290,&local_270,fVar2);
      local_250 = local_220 - local_2a0;
      local_24c = local_21c - local_29c;
      local_248 = local_218 - local_298;
      local_208 = local_248;
      fVar7 = (float10)FUN_0045db30(iVar6);
      local_278 = (float)fVar7;
      fVar7 = (float10)FUN_0045dbf0(iVar6);
      FUN_0045f510(&local_250,&local_250,(float)(((float10)local_278 / fVar7) * (float10)local_254))
      ;
      local_2a0 = local_250 + local_2a0;
      local_29c = local_24c + local_29c;
      local_298 = local_248 + local_298;
      local_270 = local_2a0 - local_290;
      local_26c = local_29c - local_28c;
      local_268 = local_298 - local_288;
      local_208 = local_268;
      FUN_0045f510(&local_270,&local_270,fVar2);
      local_2a0 = local_270 + local_290;
      local_29c = local_26c + local_28c;
      local_298 = local_268 + local_288;
      local_208 = local_298;
    }
    thunk_FUN_006bd940(&local_2a0,local_190,&local_2a0);
    thunk_FUN_006bd940(&local_290,local_d0,&local_290);
    fVar2 = local_1ec;
  }
  else {
    fVar2 = _DAT_00894df0;
    if (DAT_008edea0 == 2) {
      local_270 = 0.0;
      local_26c = 0.0;
      local_268 = 1.0;
      local_240 = 0.0;
      local_23c = 0.0;
      local_238 = 0.0;
      FUN_0045f7c0(&local_250,&local_270,&local_240);
      FUN_0045f7c0(&local_270,&local_240,&local_250);
      FUN_0045f490(&local_270,&local_270);
      FUN_0045f490(&local_250,&local_250);
      FUN_0045f490(&local_240,&local_240);
      local_1cc = local_23c;
      local_1c8 = local_238;
      local_1d0 = local_240;
      local_1bc = local_24c;
      local_1b8 = local_248;
      local_1c0 = local_250;
      local_1ac = local_26c;
      local_1a8 = local_268;
      local_1c4 = 0;
      local_1b4 = 0;
      local_1b0 = local_270;
      local_1a4 = 0;
      FUN_006bde60(local_190,&local_1d0);
      FUN_006bde60(local_150,local_50);
      thunk_FUN_006bd940(local_1e0,local_150,0);
      FUN_0046f540(&local_2a0,local_278);
      FUN_0046f4a0(&local_278,local_278);
      thunk_FUN_006bd940(&local_290,local_190,0);
      local_220 = local_2a0 - local_290;
      local_21c = local_29c - local_28c;
      local_218 = local_298 - local_288;
      local_1d8 = local_218;
      FUN_0045f510(&local_220,&local_220,local_278);
      local_2a0 = local_220 + local_2a0;
      local_29c = local_21c + local_29c;
      local_290 = 0.0;
      local_28c = 0.0;
      local_288 = 0.0;
      local_298 = local_218 + local_298;
      FUN_0045ecf0(local_90,local_d0,&local_1d0);
      thunk_FUN_006bd940(&local_1f0,local_90,&local_2a0);
      thunk_FUN_006bd940(&local_210,local_90,0);
      fVar2 = local_274;
      if (local_20c * local_1ec < _DAT_00890968) {
        FUN_0045ecf0(local_150,local_190,local_110);
        local_1ec = 0.0;
        thunk_FUN_006bd940(&local_2a0,local_150,&local_1f0);
        fVar2 = local_274;
      }
    }
  }
  pfVar1 = *(float **)(param_1 + 0x88);
  pfVar1[2] = fVar2;
  if (fVar2 != *pfVar1) {
    *(undefined2 *)(pfVar1 + 10) = 2;
  }
  FUN_00651790(&local_2a0);
  FUN_00651790(&local_290);
  if (param_2 != 0) {
    FUN_00444fe0(param_2,&local_1d0);
  }
  if (param_3 != 0) {
    FUN_00444fe0(param_3,local_190);
  }
  if (param_4 != 0) {
    FUN_00444fe0(param_4,local_110);
  }
  if (param_5 != 0) {
    FUN_00444fe0(param_5,local_d0);
  }
  return;
}

