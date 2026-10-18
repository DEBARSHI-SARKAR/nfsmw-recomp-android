/* speed.exe 00726af0 FUN_00726af0; analysis pseudocode, not buildable source.
 * calls 0045f7c0 FUN_0045f7c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00726af0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_90 [4];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  float local_50 [4];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar8 = (int)*(char *)(param_1 + 9);
  iVar7 = 0;
  if (3 < iVar8) {
    iVar9 = (iVar8 - 4U >> 2) + 1;
    iVar7 = iVar9 * 4;
    pfVar5 = (float *)(param_1 + 0x38);
    pfVar6 = local_90 + 2;
    do {
      fVar1 = pfVar5[-2];
      fVar2 = *param_2;
      iVar9 = iVar9 + -1;
      fVar3 = pfVar5[-1];
      fVar4 = param_2[1];
      *pfVar6 = *pfVar5 - param_2[2];
      pfVar6[-2] = fVar1 - fVar2;
      pfVar6[-1] = fVar3 - fVar4;
      fVar1 = pfVar5[2];
      fVar2 = *param_2;
      fVar3 = pfVar5[3];
      fVar4 = param_2[1];
      pfVar6[4] = pfVar5[4] - param_2[2];
      pfVar6[2] = fVar1 - fVar2;
      pfVar6[3] = fVar3 - fVar4;
      fVar1 = pfVar5[6];
      fVar2 = *param_2;
      fVar3 = pfVar5[7];
      fVar4 = param_2[1];
      pfVar6[8] = pfVar5[8] - param_2[2];
      pfVar6[6] = fVar1 - fVar2;
      pfVar6[7] = fVar3 - fVar4;
      fVar1 = pfVar5[0xb];
      fVar2 = param_2[1];
      fVar3 = pfVar5[0xc];
      fVar4 = param_2[2];
      pfVar6[10] = pfVar5[10] - *param_2;
      pfVar6[0xb] = fVar1 - fVar2;
      *(float *)((int)pfVar5 + ((int)local_90 - param_1)) = fVar3 - fVar4;
      pfVar5 = pfVar5 + 0x10;
      pfVar6 = pfVar6 + 0x10;
    } while (iVar9 != 0);
  }
  if (iVar7 < iVar8) {
    iVar8 = iVar8 - iVar7;
    pfVar5 = (float *)(iVar7 * 0x10 + 0x38 + param_1);
    pfVar6 = local_90 + iVar7 * 4 + 2;
    do {
      fVar1 = pfVar5[-2];
      fVar2 = *param_2;
      iVar8 = iVar8 + -1;
      fVar3 = pfVar5[-1];
      fVar4 = param_2[1];
      *pfVar6 = *pfVar5 - param_2[2];
      pfVar6[-2] = fVar1 - fVar2;
      pfVar6[-1] = fVar3 - fVar4;
      pfVar5 = pfVar5 + 4;
      pfVar6 = pfVar6 + 4;
    } while (iVar8 != 0);
  }
  FUN_0045f7c0(local_50,local_90,local_80);
  FUN_0045f7c0(local_40,local_80,local_70);
  if (*(char *)(param_1 + 9) == '\x04') {
    FUN_0045f7c0(local_30,local_70,local_60);
    FUN_0045f7c0(local_20,local_60,local_90);
  }
  else {
    FUN_0045f7c0(local_30,local_70,local_90);
  }
  iVar7 = 0;
  if (0 < *(char *)(param_1 + 9)) {
    pfVar5 = local_50 + 1;
    do {
      if (*pfVar5 * *(float *)(param_1 + 0x74) +
          pfVar5[1] * *(float *)(param_1 + 0x78) + pfVar5[-1] * *(float *)(param_1 + 0x70) <
          _DAT_00890968) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      pfVar5 = pfVar5 + 4;
    } while (iVar7 < *(char *)(param_1 + 9));
  }
  if (param_3 != (float *)0x0) {
    *param_3 = -(local_90[0] * *(float *)(param_1 + 0x70) +
                local_90[2] * *(float *)(param_1 + 0x78) + local_90[1] * *(float *)(param_1 + 0x74))
    ;
  }
  return 1;
}

