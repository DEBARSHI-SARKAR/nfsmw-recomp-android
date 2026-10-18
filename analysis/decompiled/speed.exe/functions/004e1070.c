/* speed.exe 004e1070 FUN_004e1070; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004e1070(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
  *(int *)(param_1 + 0xac) = param_2;
  pbVar7 = (byte *)(param_2 * 0x13 + *(int *)(param_1 + 0x24));
  *(float *)(param_1 + 0x2c) = (float)(int)((*pbVar7 & 0xf0) + (char)pbVar7[1] * 0x100);
  iVar8 = 3;
  *(float *)(param_1 + 0x30) = (float)(int)((char)pbVar7[3] * 0x100 + (pbVar7[2] & 0xf0));
  fVar1 = *(float *)(&DAT_008efe10 + (*pbVar7 & 0xf) * 4);
  fVar2 = *(float *)(&DAT_008efe20 + (*pbVar7 & 0xf) * 4);
  iVar6 = (pbVar7[2] & 0xf) * 0x10;
  pfVar5 = (float *)(param_1 + 0x34);
  do {
    bVar3 = pbVar7[4];
    fVar4 = fVar1 * pfVar5[-1] +
            fVar2 * pfVar5[-2] + *(float *)(&DAT_008efe30 + ((uint)(bVar3 >> 4) + iVar6) * 4);
    *pfVar5 = fVar4;
    pfVar5[1] = fVar4 * fVar1 +
                fVar2 * pfVar5[-1] + *(float *)(&DAT_008efe30 + (iVar6 + (bVar3 & 0xf)) * 4);
    bVar3 = pbVar7[5];
    fVar4 = fVar2 * *pfVar5 +
            fVar1 * pfVar5[1] + *(float *)(&DAT_008efe30 + ((uint)(bVar3 >> 4) + iVar6) * 4);
    pfVar5[2] = fVar4;
    pfVar5[3] = fVar4 * fVar1 +
                fVar2 * pfVar5[1] + *(float *)(&DAT_008efe30 + (iVar6 + (bVar3 & 0xf)) * 4);
    bVar3 = pbVar7[6];
    fVar4 = fVar1 * pfVar5[3] +
            fVar2 * pfVar5[2] + *(float *)(&DAT_008efe30 + ((uint)(bVar3 >> 4) + iVar6) * 4);
    pfVar5[4] = fVar4;
    pfVar5[5] = fVar2 * pfVar5[3] +
                fVar4 * fVar1 + *(float *)(&DAT_008efe30 + (iVar6 + (bVar3 & 0xf)) * 4);
    bVar3 = pbVar7[7];
    fVar4 = fVar1 * pfVar5[5] +
            fVar2 * pfVar5[4] + *(float *)(&DAT_008efe30 + ((uint)(bVar3 >> 4) + iVar6) * 4);
    pfVar5[6] = fVar4;
    pfVar5[7] = fVar2 * pfVar5[5] +
                fVar4 * fVar1 + *(float *)(&DAT_008efe30 + (iVar6 + (bVar3 & 0xf)) * 4);
    bVar3 = pbVar7[8];
    iVar8 = iVar8 + -1;
    fVar4 = fVar1 * pfVar5[7] +
            fVar2 * pfVar5[6] + *(float *)(&DAT_008efe30 + ((uint)(bVar3 >> 4) + iVar6) * 4);
    pfVar5[8] = fVar4;
    pfVar5[9] = fVar2 * pfVar5[7] +
                fVar4 * fVar1 + *(float *)(&DAT_008efe30 + (iVar6 + (bVar3 & 0xf)) * 4);
    pfVar5 = pfVar5 + 10;
    pbVar7 = pbVar7 + 5;
  } while (iVar8 != 0);
  return;
}

