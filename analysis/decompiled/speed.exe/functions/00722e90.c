/* speed.exe 00722e90 FUN_00722e90; analysis pseudocode, not buildable source.
 * calls 0045f3c0 FUN_0045f3c0
 */

void __thiscall
FUN_00722e90(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float local_24;
  int local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_10 = *param_2 - *param_3;
  local_24 = 0.0;
  local_20 = 0;
  local_c = param_2[1] - param_3[1];
  FUN_0045f3c0(&local_10,&local_10);
  iVar7 = 0;
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x40)) {
    do {
      iVar6 = iVar7 % (int)*(short *)(param_1 + 0x40);
      iVar1 = iVar7 + 1;
      pfVar2 = (float *)(param_1 + 0x44 + iVar6 * 8);
      pfVar3 = (float *)(param_1 + 0x44 + (iVar1 % (int)*(short *)(param_1 + 0x40)) * 8);
      if (((((*param_2 != *(float *)(param_1 + 0x44 + iVar6 * 8)) || (param_2[1] != pfVar2[1])) ||
           (*param_3 != *pfVar3)) || (param_3[1] != pfVar3[1])) &&
         (((*param_3 != *pfVar2 || (param_3[1] != pfVar2[1])) ||
          ((*param_2 != *pfVar3 || (param_2[1] != pfVar3[1])))))) {
        local_14 = pfVar2[1] - pfVar3[1];
        local_18 = *pfVar2 - *pfVar3;
        FUN_0045f3c0(&local_18,&local_18);
        fVar5 = ABS(local_18 * local_10 + local_14 * local_c);
        if (local_24 < fVar5) {
          local_24 = fVar5;
          local_20 = iVar7;
        }
      }
      iVar7 = iVar1;
      iVar6 = local_20;
    } while (iVar1 < *(short *)(param_1 + 0x40));
  }
  iVar7 = iVar6 % (int)*(short *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44 + iVar7 * 8);
  param_4[1] = *(undefined4 *)(param_1 + 0x48 + iVar7 * 8);
  *param_4 = uVar4;
  iVar7 = (iVar6 + 1) % (int)*(short *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44 + iVar7 * 8);
  param_5[1] = *(undefined4 *)(param_1 + 0x48 + iVar7 * 8);
  *param_5 = uVar4;
  return;
}

