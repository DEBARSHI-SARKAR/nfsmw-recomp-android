/* speed.exe 00649380 FUN_00649380; analysis pseudocode, not buildable source.
 * calls 0045f680 FUN_0045f680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00649380(int param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  if (*(ushort *)(param_1 + 0x1e) != 0) {
    pfVar3 = *(float **)(param_1 + 0x24);
    uVar7 = (uint)*(ushort *)(param_1 + 0x1e);
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 0) {
      fVar5 = pfVar3[uVar7 * 4 + -1];
      fVar2 = pfVar3[uVar7 * 4 + -2];
      pfVar1 = pfVar3 + uVar7 * 4;
      fVar6 = pfVar1[-4];
      pfVar3[-3] = pfVar3[uVar7 * 4 + -3];
      pfVar3[-4] = fVar6;
      pfVar3[-2] = fVar2;
      pfVar3[-1] = fVar5;
      fVar5 = pfVar3[3];
      fVar2 = pfVar3[2];
      fVar6 = *pfVar3;
      pfVar1[1] = pfVar3[1];
      *pfVar1 = fVar6;
      pfVar1[2] = fVar2;
      pfVar1[3] = fVar5;
      fVar5 = pfVar3[7];
      fVar2 = pfVar3[6];
      fVar6 = pfVar3[4];
      pfVar1[5] = pfVar3[5];
      pfVar1[4] = fVar6;
      pfVar1[6] = fVar2;
      fVar2 = _DAT_00890968;
      pfVar1[7] = fVar5;
      if (*(float *)(param_1 + 0x14) != fVar2) {
        pfVar3[-1] = pfVar1[-1] - *(float *)(param_1 + 0x14);
        pfVar1[3] = *(float *)(param_1 + 0x14) + pfVar3[3];
        pfVar1[7] = pfVar3[7] + *(float *)(param_1 + 0x14);
      }
    }
    else if (iVar4 == 1) {
      pfVar3[-1] = pfVar3[3];
      pfVar3[-3] = pfVar3[1];
      pfVar3[-4] = *pfVar3;
      pfVar3[-2] = pfVar3[2];
      fVar5 = pfVar3[uVar7 * 4 + -1];
      fVar2 = pfVar3[uVar7 * 4 + -2];
      pfVar1 = pfVar3 + uVar7 * 4;
      pfVar1[1] = pfVar3[uVar7 * 4 + -3];
      *pfVar1 = pfVar1[-4];
      pfVar1[2] = fVar2;
      fVar2 = _DAT_00890968;
      pfVar1[3] = fVar5;
      if (*(float *)(param_1 + 0x14) != fVar2) {
        pfVar3[-1] = -pfVar3[7];
        pfVar1[3] = (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14)) - pfVar1[-1];
        return;
      }
    }
    else if (iVar4 == 2) {
      local_30 = pfVar3[4] - *pfVar3;
      local_2c = pfVar3[5] - pfVar3[1];
      local_28 = pfVar3[6] - pfVar3[2];
      local_24 = pfVar3[7] - pfVar3[3];
      local_18 = local_28;
      local_14 = local_24;
      FUN_0045f680(pfVar3 + -4,pfVar3,&local_30,0xbf800000);
      pfVar1 = pfVar3 + uVar7 * 4;
      iVar4 = uVar7 - 2;
      local_30 = pfVar1[-4] - pfVar3[iVar4 * 4];
      local_2c = pfVar1[-3] - pfVar3[iVar4 * 4 + 1];
      local_28 = pfVar1[-2] - pfVar3[iVar4 * 4 + 2];
      local_24 = pfVar1[-1] - pfVar3[iVar4 * 4 + 3];
      local_18 = local_28;
      local_14 = local_24;
      FUN_0045f680(pfVar1,pfVar1 + -4,&local_30,0x3f800000);
      return;
    }
  }
  return;
}

