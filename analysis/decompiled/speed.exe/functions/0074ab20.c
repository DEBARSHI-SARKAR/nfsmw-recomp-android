/* speed.exe 0074ab20 FUN_0074ab20; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074ab20(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float10 extraout_ST0;
  int local_1c;
  int local_18;
  
  _DAT_00904ad4 = _DAT_0089096c - DAT_00904ad8;
  *(float *)(param_1 + 0x33f4) = DAT_00904a80;
  pfVar4 = (float *)(param_1 + 0x3460);
  *(float *)(param_1 + 0x33f8) = DAT_00904a80 * _DAT_008933d4;
  uVar2 = _DAT_00904a98;
  uVar3 = _DAT_00904a94;
  *(undefined4 *)(param_1 + 0x3420) = DAT_00904a90;
  *(undefined4 *)(param_1 + 0x3424) = uVar3;
  *(undefined4 *)(param_1 + 0x3428) = uVar2;
  uVar2 = _DAT_00904a28;
  uVar3 = _DAT_00904a24;
  *(undefined4 *)(param_1 + 0x3440) = DAT_00904a20;
  *(undefined4 *)(param_1 + 0x3444) = uVar3;
  *(undefined4 *)(param_1 + 0x3448) = uVar2;
  *pfVar4 = DAT_00904a2c;
  if (_DAT_009b3788 != DAT_00904a2c) {
    pfVar5 = (float *)(param_1 + 0x36cc);
    pfVar6 = (float *)(param_1 + 0x3444);
    local_18 = 2;
    do {
      local_1c = 10;
      do {
        fVar7 = (float10)FUN_0045da70(pfVar6[-1]);
        pfVar5[-1] = (float)(fVar7 - (float10)pfVar6[-1] * (float10)_DAT_008933d4);
        fVar7 = (float10)FUN_0045da70(*pfVar6);
        *pfVar5 = (float)(fVar7 - (float10)*pfVar6 * (float10)_DAT_008933d4);
        fVar7 = (float10)FUN_0045da70(pfVar6[1]);
        fVar1 = *pfVar4;
        pfVar5[2] = -99999.9;
        pfVar5[1] = (float)(-fVar7 - (float10)fVar1);
        pfVar5 = pfVar5 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    _DAT_009b3788 = DAT_00904a2c;
  }
  uVar3 = FUN_007c4b80();
  *(float *)(param_1 + 0x33ec) = (float)extraout_ST0;
  *(undefined4 *)(param_1 + 0x33e4) = uVar3;
  return;
}

