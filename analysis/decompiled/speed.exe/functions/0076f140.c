/* speed.exe 0076f140 FUN_0076f140; analysis pseudocode, not buildable source.
 * calls 00404390 FUN_00404390
 * calls 007647e0 FUN_007647e0
 * calls 005c5e80 FUN_005c5e80
 * calls 004100a0 FUN_004100a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0076f140(int param_1,float param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(byte *)((int)param_2 + 0xb) & 1) != 0) {
    bVar4 = *(char *)(param_1 + 0x8c) != '\0' ^ param_3;
    pfVar6 = (float *)((uint)*(ushort *)((int)param_2 + (uint)bVar4 * 2) * 0x20 + DAT_009b38bc);
    pfVar7 = (float *)((uint)*(ushort *)((int)param_2 + (uint)(bVar4 == 0) * 2) * 0x20 +
                      DAT_009b38bc);
    if (bVar4 == 0) {
      FUN_00404390(&local_c);
    }
    else {
      FUN_007647e0(&local_c);
    }
    fVar8 = (float10)FUN_005c5e80((*pfVar6 - *pfVar7) * (*pfVar6 - *pfVar7) +
                                  (pfVar6[1] - pfVar7[1]) * (pfVar6[1] - pfVar7[1]) +
                                  (pfVar6[2] - pfVar7[2]) * (pfVar6[2] - pfVar7[2]));
    if ((float10)_DAT_00890dc4 <= fVar8) {
      param_2 = (float)fVar8;
    }
    else {
      param_2 = 0.01;
    }
    fVar1 = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 200);
    pfVar6 = (float *)(param_1 + 200);
    fVar3 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xcc);
    fVar2 = *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd0);
    fVar8 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    if (fVar8 < (float10)_DAT_00890dc4) {
      fVar8 = (float10)_DAT_00890dc4;
    }
    fVar1 = (float)((float10)_DAT_0089096c / (float10)param_2);
    fVar8 = ((float10)_DAT_0089096c / (float10)param_2) * fVar8;
    if (param_3 == 0) {
      pfVar7 = (float *)(param_1 + 0xe0);
    }
    else {
      pfVar7 = (float *)(param_1 + 0xec);
      pfVar6 = (float *)(param_1 + 0xd4);
    }
    *pfVar7 = (float)((float10)local_c * fVar8 + (float10)*pfVar6);
    pfVar7[1] = (float)((float10)local_8 * fVar8 + (float10)pfVar6[1]);
    pfVar7[2] = (float)((float10)local_4 * fVar8 + (float10)pfVar6[2]);
    if (*(char *)(param_1 + 0x55) != '\0') {
      pfVar6 = (float *)(param_1 + 0xf8);
      fVar8 = (float10)FUN_004100a0((float *)(param_1 + 0x104),pfVar6);
      if (fVar8 < (float10)_DAT_00890dc4) {
        fVar8 = (float10)_DAT_00890dc4;
      }
      pfVar7 = (float *)(param_1 + 0x128);
      fVar2 = (float)((float10)fVar1 * fVar8);
      fVar8 = (float10)FUN_004100a0((float *)(param_1 + 0x134),pfVar7);
      if (fVar8 < (float10)_DAT_00890dc4) {
        fVar8 = (float10)_DAT_00890dc4;
      }
      fVar8 = fVar8 * (float10)fVar1;
      if (param_3 == 0) {
        pfVar5 = (float *)(param_1 + 0x110);
      }
      else {
        pfVar5 = (float *)(param_1 + 0x11c);
        pfVar6 = (float *)(param_1 + 0x104);
      }
      *pfVar5 = local_c * fVar2 + *pfVar6;
      pfVar5[1] = local_8 * fVar2 + pfVar6[1];
      pfVar5[2] = local_4 * fVar2 + pfVar6[2];
      if (param_3 == 0) {
        pfVar6 = (float *)(param_1 + 0x140);
      }
      else {
        pfVar6 = (float *)(param_1 + 0x14c);
        pfVar7 = (float *)(param_1 + 0x134);
      }
      *pfVar6 = (float)((float10)local_c * fVar8 + (float10)*pfVar7);
      pfVar6[1] = (float)((float10)local_8 * fVar8 + (float10)pfVar7[1]);
      pfVar6[2] = (float)((float10)local_4 * fVar8 + (float10)pfVar7[2]);
    }
  }
  return;
}

