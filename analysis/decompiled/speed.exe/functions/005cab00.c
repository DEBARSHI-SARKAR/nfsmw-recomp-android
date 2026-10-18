/* speed.exe 005cab00 FUN_005cab00; analysis pseudocode, not buildable source.
 */

void FUN_005cab00(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float local_40 [16];
  
  iVar3 = 4;
  pfVar1 = (float *)(param_1 + 8);
  pfVar2 = local_40 + 2;
  do {
    iVar3 = iVar3 + -1;
    pfVar2[-2] = pfVar1[-2] * *param_2 +
                 param_2[8] * *pfVar1 + param_2[4] * pfVar1[-1] + param_2[0xc] * pfVar1[1];
    pfVar2[-1] = pfVar1[-1] * param_2[5] +
                 param_2[9] * *pfVar1 + pfVar1[1] * param_2[0xd] + pfVar1[-2] * param_2[1];
    *pfVar2 = pfVar1[-1] * param_2[6] +
              param_2[10] * *pfVar1 + pfVar1[1] * param_2[0xe] + param_2[2] * pfVar1[-2];
    pfVar2[1] = pfVar1[-2] * param_2[3] +
                param_2[0xb] * *pfVar1 + param_2[7] * pfVar1[-1] + param_2[0xf] * pfVar1[1];
    pfVar1 = pfVar1 + 4;
    pfVar2 = pfVar2 + 4;
  } while (iVar3 != 0);
  pfVar1 = local_40;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

