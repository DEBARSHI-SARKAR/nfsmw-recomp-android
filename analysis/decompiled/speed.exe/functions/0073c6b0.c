/* speed.exe 0073c6b0 FUN_0073c6b0; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 00460bf0 FUN_00460bf0
 * calls 00503400 FUN_00503400
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0073c6b0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  int local_18;
  int local_14;
  
  uVar4 = FUN_00460bf0("RAINDROP",0,0);
  uVar4 = FUN_00503400(uVar4);
  *(undefined4 *)(param_1 + 0x3404) = uVar4;
  *(undefined4 *)(param_1 + 0x33d8) = 0x15e;
  *(undefined4 *)(param_1 + 0x33dc) = 0;
  *(undefined4 *)(param_1 + 0x33e4) = 0;
  *(undefined4 *)(param_1 + 0x33e0) = 0;
  *(undefined4 *)(param_1 + 0x33e8) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 1;
  *(undefined4 *)(param_1 + 0x33dc + param_2 * 4) = *(undefined4 *)(param_1 + 0x33d8);
  *(float *)(param_1 + 0x33f4) = DAT_00904a80;
  *(undefined4 *)(param_1 + 0x33fc) = 0x3f800000;
  fVar1 = DAT_00904a80 * _DAT_008933d4;
  *(undefined4 *)(param_1 + 0x3400) = 0x3f800000;
  local_18 = 0;
  *(float *)(param_1 + 0x33f8) = fVar1;
  uVar2 = _DAT_00904a98;
  uVar4 = _DAT_00904a94;
  *(undefined4 *)(param_1 + 0x3420) = DAT_00904a90;
  *(undefined4 *)(param_1 + 0x3424) = uVar4;
  *(undefined4 *)(param_1 + 0x3428) = uVar2;
  uVar2 = _DAT_00904a28;
  uVar4 = _DAT_00904a24;
  *(undefined4 *)(param_1 + 0x3440) = DAT_00904a20;
  *(undefined4 *)(param_1 + 0x3444) = uVar4;
  *(undefined4 *)(param_1 + 0x3448) = uVar2;
  *(undefined4 *)(param_1 + 0x3460) = DAT_00904a2c;
  *(undefined4 *)(param_1 + 0x3468) = 1;
  *(undefined4 *)(param_1 + 0x34a4) = 0;
  *(undefined4 *)(param_1 + 0x3480) = 0;
  *(undefined4 *)(param_1 + 0x3484) = 0;
  *(undefined4 *)(param_1 + 0x3488) = 0;
  if (0 < *(int *)(param_1 + 0x33d8)) {
    iVar10 = 0x2a;
    puVar8 = (undefined1 *)(param_1 + 0x2e61);
    do {
      puVar8[-1] = 2;
      *puVar8 = (undefined1)param_2;
      uVar3 = FUN_0045da30(2);
      puVar8[1] = uVar3;
      fVar12 = (float10)FUN_0045da70(DAT_00904a60);
      *(float *)((*(int *)(param_1 + 0x298) + iVar10) * 0x10 + param_1) =
           (float)((fVar12 - (float10)DAT_00904a60 * (float10)_DAT_008933d4) +
                  (float10)_DAT_00904a6c);
      fVar12 = (float10)FUN_0045da70(DAT_00904a64);
      *(float *)((*(int *)(param_1 + 0x298) + iVar10 + -0x2a) * 0x10 + 0x2a4 + param_1) =
           (float)((fVar12 - (float10)DAT_00904a64 * (float10)_DAT_008933d4) +
                  (float10)_DAT_009b0a34);
      fVar12 = (float10)FUN_0045da70(DAT_00904a68);
      *(float *)((*(int *)(param_1 + 0x298) + iVar10 + -0x2a) * 0x10 + 0x2a8 + param_1) =
           (float)(fVar12 + (float10)_DAT_009b0a38);
      iVar5 = (*(int *)(param_1 + 0x298) + iVar10) * 0x10;
      uVar2 = *(undefined4 *)(iVar5 + param_1);
      uVar4 = *(undefined4 *)(iVar5 + 8 + param_1);
      puVar7 = (undefined4 *)((*(int *)(param_1 + 0x29c) + iVar10) * 0x10 + param_1);
      puVar7[1] = *(undefined4 *)(iVar5 + 4 + param_1);
      *puVar7 = uVar2;
      puVar7[2] = uVar4;
      local_18 = local_18 + 1;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 + 2;
    } while (local_18 < *(int *)(param_1 + 0x33d8));
  }
  pfVar6 = (float *)(param_1 + 0x36cc);
  pfVar9 = (float *)(param_1 + 0x3460);
  pfVar11 = (float *)(param_1 + 0x3444);
  local_14 = 2;
  do {
    local_18 = 10;
    do {
      fVar12 = (float10)FUN_0045da70(pfVar11[-1]);
      pfVar6[-1] = (float)(fVar12 - (float10)pfVar11[-1] * (float10)_DAT_008933d4);
      fVar12 = (float10)FUN_0045da70(*pfVar11);
      *pfVar6 = (float)(fVar12 - (float10)*pfVar11 * (float10)_DAT_008933d4);
      fVar12 = (float10)FUN_0045da70(pfVar11[1]);
      fVar1 = *pfVar9;
      pfVar6[2] = -99999.9;
      pfVar6[1] = (float)(-fVar12 - (float10)fVar1);
      pfVar6 = pfVar6 + 4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}

