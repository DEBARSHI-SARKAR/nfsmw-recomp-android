/* speed.exe 00649660 FUN_00649660; analysis pseudocode, not buildable source.
 * calls 0045f680 FUN_0045f680
 */

void __thiscall FUN_00649660(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  int local_4c;
  int local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0x1e);
  pfVar4 = *(float **)(param_1 + 0x24);
  local_4c = -param_3;
  pfVar7 = pfVar4 + param_3 * 4 + 2;
  local_40 = 4;
  do {
    if (param_3 < -1) {
      local_30 = *pfVar4 - pfVar4[4];
      local_2c = pfVar4[1] - pfVar4[5];
      local_28 = pfVar4[2] - pfVar4[6];
      local_24 = pfVar4[3] - pfVar4[7];
      FUN_0045f680(param_2,pfVar4,&local_30,(float)local_4c);
    }
    else if ((int)uVar8 < param_3) {
      iVar1 = uVar8 - 2;
      pfVar2 = pfVar4 + uVar8 * 4 + -4;
      local_20 = pfVar4[uVar8 * 4 + -4] - pfVar4[iVar1 * 4];
      local_1c = pfVar2[1] - pfVar4[iVar1 * 4 + 1];
      local_18 = pfVar2[2] - pfVar4[iVar1 * 4 + 2];
      local_14 = pfVar2[3] - pfVar4[iVar1 * 4 + 3];
      FUN_0045f680(param_2,pfVar2,&local_20,(float)(int)((1 - uVar8) + param_3));
    }
    else {
      fVar5 = pfVar7[1];
      fVar3 = *pfVar7;
      fVar6 = pfVar7[-2];
      param_2[1] = pfVar7[-1];
      *param_2 = fVar6;
      param_2[2] = fVar3;
      param_2[3] = fVar5;
    }
    local_4c = local_4c + -1;
    pfVar7 = pfVar7 + 4;
    param_3 = param_3 + 1;
    param_2 = param_2 + 4;
    local_40 = local_40 + -1;
  } while (local_40 != 0);
  return;
}

