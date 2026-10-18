/* speed.exe 005b6a30 FUN_005b6a30; analysis pseudocode, not buildable source.
 */

void FUN_005b6a30(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_40[0] = param_3[1] * param_2[4] +
                param_3[2] * param_2[8] + param_3[3] * param_2[0xc] + *param_2 * *param_3;
  local_40[1] = param_2[9] * param_3[2] +
                param_3[1] * param_2[5] + param_2[1] * *param_3 + param_2[0xd] * param_3[3];
  local_40[2] = param_3[3] * param_2[0xe] +
                param_2[2] * *param_3 + param_2[6] * param_3[1] + param_2[10] * param_3[2];
  local_40[3] = *param_3 * param_2[3] +
                param_3[2] * param_2[0xb] + param_2[0xf] * param_3[3] + param_2[7] * param_3[1];
  local_30 = param_3[4] * *param_2 +
             param_3[7] * param_2[0xc] + param_2[4] * param_3[5] + param_3[6] * param_2[8];
  local_2c = param_3[7] * param_2[0xd] +
             param_3[5] * param_2[5] + param_3[4] * param_2[1] + param_3[6] * param_2[9];
  local_28 = param_3[4] * param_2[2] +
             param_2[6] * param_3[5] + param_3[6] * param_2[10] + param_3[7] * param_2[0xe];
  local_24 = param_2[7] * param_3[5] +
             param_3[4] * param_2[3] + param_3[6] * param_2[0xb] + param_2[0xf] * param_3[7];
  local_20 = param_3[8] * *param_2 +
             param_3[0xb] * param_2[0xc] + param_3[9] * param_2[4] + param_3[10] * param_2[8];
  local_1c = param_3[0xb] * param_2[0xd] +
             param_3[9] * param_2[5] + param_3[8] * param_2[1] + param_3[10] * param_2[9];
  local_18 = param_3[8] * param_2[2] +
             param_2[6] * param_3[9] + param_3[10] * param_2[10] + param_3[0xb] * param_2[0xe];
  local_14 = param_2[7] * param_3[9] +
             param_3[8] * param_2[3] + param_3[10] * param_2[0xb] + param_2[0xf] * param_3[0xb];
  local_10 = param_3[0xc] * *param_2 +
             param_3[0xf] * param_2[0xc] + param_3[0xd] * param_2[4] + param_3[0xe] * param_2[8];
  local_c = param_3[0xf] * param_2[0xd] +
            param_3[0xd] * param_2[5] + param_3[0xc] * param_2[1] + param_3[0xe] * param_2[9];
  local_8 = param_3[0xc] * param_2[2] +
            param_2[6] * param_3[0xd] + param_3[0xe] * param_2[10] + param_3[0xf] * param_2[0xe];
  local_4 = param_2[7] * param_3[0xd] +
            param_3[0xc] * param_2[3] + param_3[0xe] * param_2[0xb] + param_2[0xf] * param_3[0xf];
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

