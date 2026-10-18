/* speed.exe 004876f0 FUN_004876f0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_004876f0(undefined4 *param_1,float *param_2,undefined4 *param_3,float *param_4,int param_5,
            undefined4 *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(short *)(param_1 + 0x27) = (short)param_5;
  if (param_5 == 1) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[0x24] = *param_4;
    param_1[0x25] = param_4[1];
    param_1[0x26] = param_4[2];
    param_1[0x28] = *param_6;
    param_1[0x29] = param_6[1];
    param_1[0x2a] = param_6[2];
    fVar1 = (float)param_1[0x24];
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[0x10] = fVar1 * (float)param_1[4];
    param_1[0x11] = fVar1 * (float)param_1[5];
    param_1[0x12] = fVar1 * (float)param_1[6];
    fVar1 = (float)param_1[0x25];
    param_1[8] = param_2[4];
    param_1[9] = param_2[5];
    param_1[10] = param_2[6];
    param_1[0x14] = fVar1 * (float)param_1[8];
    param_1[0x15] = fVar1 * (float)param_1[9];
    param_1[0x16] = fVar1 * (float)param_1[10];
    fVar1 = (float)param_1[0x26];
    param_1[0xc] = param_2[8];
    param_1[0xd] = param_2[9];
    param_1[0xe] = param_2[10];
    param_1[0x18] = fVar1 * (float)param_1[0xc];
    param_1[0x19] = fVar1 * (float)param_1[0xd];
    param_1[0x1a] = fVar1 * (float)param_1[0xe];
  }
  else if (param_5 == 2) {
    param_1[4] = DAT_008a2fd0;
    param_1[5] = DAT_008a2fd4;
    param_1[6] = DAT_008a2fd8;
    param_1[7] = DAT_008a2fdc;
    param_1[8] = DAT_008a2fd0;
    param_1[9] = DAT_008a2fd4;
    param_1[10] = DAT_008a2fd8;
    param_1[0xb] = DAT_008a2fdc;
    param_1[0xc] = DAT_008a2fd0;
    param_1[0xd] = DAT_008a2fd4;
    param_1[0xe] = DAT_008a2fd8;
    param_1[0xf] = DAT_008a2fdc;
    param_1[0x10] = DAT_008a2fd0;
    param_1[0x11] = DAT_008a2fd4;
    param_1[0x12] = DAT_008a2fd8;
    param_1[0x13] = DAT_008a2fdc;
    param_1[0x14] = DAT_008a2fd0;
    param_1[0x15] = DAT_008a2fd4;
    param_1[0x16] = DAT_008a2fd8;
    param_1[0x17] = DAT_008a2fdc;
    param_1[0x18] = DAT_008a2fd0;
    param_1[0x19] = DAT_008a2fd4;
    param_1[0x1a] = DAT_008a2fd8;
    param_1[0x1b] = DAT_008a2fdc;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *param_1 = *param_3;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = 0x3f800000;
    fVar1 = param_4[2];
    if (param_4[2] < param_4[1]) {
      fVar1 = param_4[1];
    }
    if (fVar1 < *param_4) {
      fVar1 = *param_4;
    }
    param_1[0x26] = fVar1;
    param_1[0x25] = fVar1;
    param_1[0x24] = fVar1;
    param_1[0x28] = *param_6;
    param_1[0x29] = param_6[1];
    param_1[0x2a] = param_6[2];
  }
  else {
    *(undefined2 *)(param_1 + 0x27) = 0;
  }
  param_1[0x23] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  param_1[0x2b] = 0xc7c35000;
  return;
}

