/* speed.exe 00689d10 FUN_00689d10; analysis pseudocode, not buildable source.
 */

void FUN_00689d10(float *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  
  iVar6 = 0;
  if (3 < param_4) {
    iVar8 = (param_4 - 4U >> 2) + 1;
    iVar6 = iVar8 * 4;
    pfVar7 = param_1 + 8;
    pfVar5 = param_3;
    do {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      *pfVar5 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar4 * param_2[0xc] + fVar3 * param_2[8];
      pfVar5[1] = fVar2 * param_2[5] +
                  fVar4 * param_2[0xd] + fVar1 * param_2[1] + fVar3 * param_2[9];
      pfVar5[2] = fVar2 * param_2[6] +
                  fVar4 * param_2[0xe] + fVar1 * param_2[2] + fVar3 * param_2[10];
      pfVar5[3] = fVar1 * param_2[3] +
                  fVar3 * param_2[0xb] + fVar2 * param_2[7] + fVar4 * param_2[0xf];
      fVar1 = pfVar7[-4];
      fVar2 = pfVar7[-3];
      fVar3 = pfVar7[-2];
      fVar4 = pfVar7[-1];
      pfVar5[4] = fVar2 * param_2[4] + fVar1 * *param_2 + fVar4 * param_2[0xc] + fVar3 * param_2[8];
      pfVar5[5] = fVar2 * param_2[5] +
                  fVar4 * param_2[0xd] + fVar1 * param_2[1] + fVar3 * param_2[9];
      pfVar5[6] = fVar2 * param_2[6] +
                  fVar4 * param_2[0xe] + fVar1 * param_2[2] + fVar3 * param_2[10];
      pfVar5[7] = fVar1 * param_2[3] +
                  fVar3 * param_2[0xb] + fVar2 * param_2[7] + fVar4 * param_2[0xf];
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar4 = pfVar7[3];
      pfVar5[8] = fVar2 * param_2[4] + fVar1 * *param_2 + fVar4 * param_2[0xc] + fVar3 * param_2[8];
      pfVar5[9] = fVar2 * param_2[5] +
                  fVar4 * param_2[0xd] + fVar1 * param_2[1] + fVar3 * param_2[9];
      pfVar5[10] = fVar2 * param_2[6] +
                   fVar4 * param_2[0xe] + fVar1 * param_2[2] + fVar3 * param_2[10];
      pfVar5[0xb] = fVar1 * param_2[3] +
                    fVar3 * param_2[0xb] + fVar2 * param_2[7] + fVar4 * param_2[0xf];
      fVar1 = pfVar7[4];
      fVar2 = pfVar7[5];
      fVar3 = pfVar7[6];
      fVar4 = pfVar7[7];
      pfVar5[0xc] = fVar2 * param_2[4] +
                    fVar1 * *param_2 + fVar4 * param_2[0xc] + fVar3 * param_2[8];
      param_1 = param_1 + 0x10;
      pfVar7 = pfVar7 + 0x10;
      param_3 = pfVar5 + 0x10;
      iVar8 = iVar8 + -1;
      pfVar5[0xd] = fVar2 * param_2[5] +
                    fVar4 * param_2[0xd] + fVar1 * param_2[1] + fVar3 * param_2[9];
      pfVar5[0xe] = fVar2 * param_2[6] +
                    fVar4 * param_2[0xe] + fVar1 * param_2[2] + fVar3 * param_2[10];
      pfVar5[0xf] = fVar1 * param_2[3] +
                    fVar3 * param_2[0xb] + fVar2 * param_2[7] + fVar4 * param_2[0xf];
      pfVar5 = param_3;
    } while (iVar8 != 0);
  }
  if (iVar6 < param_4) {
    param_4 = param_4 - iVar6;
    do {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      param_1 = param_1 + 4;
      param_4 = param_4 + -1;
      *param_3 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar4 * param_2[0xc] + fVar3 * param_2[8];
      param_3[1] = fVar2 * param_2[5] +
                   fVar4 * param_2[0xd] + fVar1 * param_2[1] + fVar3 * param_2[9];
      param_3[2] = fVar2 * param_2[6] +
                   fVar4 * param_2[0xe] + fVar1 * param_2[2] + fVar3 * param_2[10];
      param_3[3] = fVar1 * param_2[3] +
                   fVar3 * param_2[0xb] + fVar2 * param_2[7] + fVar4 * param_2[0xf];
      param_3 = param_3 + 4;
    } while (param_4 != 0);
  }
  return;
}

