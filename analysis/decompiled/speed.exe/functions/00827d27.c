/* speed.exe 00827d27 FUN_00827d27; analysis pseudocode, not buildable source.
 * calls 00827c9b FUN_00827c9b
 */

void FUN_00827d27(int param_1)

{
  float fVar1;
  int in_EAX;
  float *pfVar2;
  int unaff_EDI;
  float local_34;
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
  
  pfVar2 = (float *)(unaff_EDI + 0x684 + in_EAX * 4);
  FUN_00827c9b(&local_34);
  if (0 < param_1) {
    do {
      fVar1 = local_28 * *(float *)(unaff_EDI + 0x150) +
              local_18 * *(float *)(unaff_EDI + 0x160) +
              local_2c * *(float *)(unaff_EDI + 0x14c) +
              local_1c * *(float *)(unaff_EDI + 0x15c) +
              local_c * *(float *)(unaff_EDI + 0x16c) +
              local_8 * *(float *)(unaff_EDI + 0x170) +
              local_30 * *(float *)(unaff_EDI + 0x148) +
              local_20 * *(float *)(unaff_EDI + 0x158) +
              local_10 * *(float *)(unaff_EDI + 0x168) +
              local_34 * *(float *)(unaff_EDI + 0x144) +
              local_24 * *(float *)(unaff_EDI + 0x154) + local_14 * *(float *)(unaff_EDI + 0x164) +
              *pfVar2;
      *(float *)(unaff_EDI + 0x170) = fVar1;
      *pfVar2 = fVar1;
      fVar1 = local_24 * *(float *)(unaff_EDI + 0x150) +
              local_14 * *(float *)(unaff_EDI + 0x160) +
              local_34 * *(float *)(unaff_EDI + 0x170) +
              local_28 * *(float *)(unaff_EDI + 0x14c) +
              local_18 * *(float *)(unaff_EDI + 0x15c) +
              local_8 * *(float *)(unaff_EDI + 0x16c) +
              local_2c * *(float *)(unaff_EDI + 0x148) +
              local_1c * *(float *)(unaff_EDI + 0x158) +
              local_c * *(float *)(unaff_EDI + 0x168) +
              local_30 * *(float *)(unaff_EDI + 0x144) +
              local_20 * *(float *)(unaff_EDI + 0x154) + local_10 * *(float *)(unaff_EDI + 0x164) +
              pfVar2[1];
      *(float *)(unaff_EDI + 0x16c) = fVar1;
      pfVar2[1] = fVar1;
      fVar1 = local_20 * *(float *)(unaff_EDI + 0x150) +
              local_10 * *(float *)(unaff_EDI + 0x160) +
              local_34 * *(float *)(unaff_EDI + 0x16c) +
              local_30 * *(float *)(unaff_EDI + 0x170) +
              local_24 * *(float *)(unaff_EDI + 0x14c) +
              local_14 * *(float *)(unaff_EDI + 0x15c) +
              local_28 * *(float *)(unaff_EDI + 0x148) +
              local_18 * *(float *)(unaff_EDI + 0x158) +
              local_8 * *(float *)(unaff_EDI + 0x168) +
              local_2c * *(float *)(unaff_EDI + 0x144) +
              local_1c * *(float *)(unaff_EDI + 0x154) + local_c * *(float *)(unaff_EDI + 0x164) +
              pfVar2[2];
      *(float *)(unaff_EDI + 0x168) = fVar1;
      pfVar2[2] = fVar1;
      fVar1 = local_1c * *(float *)(unaff_EDI + 0x150) +
              local_c * *(float *)(unaff_EDI + 0x160) +
              local_30 * *(float *)(unaff_EDI + 0x16c) +
              local_2c * *(float *)(unaff_EDI + 0x170) +
              local_20 * *(float *)(unaff_EDI + 0x14c) +
              local_10 * *(float *)(unaff_EDI + 0x15c) +
              local_34 * *(float *)(unaff_EDI + 0x168) +
              local_24 * *(float *)(unaff_EDI + 0x148) +
              local_14 * *(float *)(unaff_EDI + 0x158) +
              local_28 * *(float *)(unaff_EDI + 0x144) +
              local_18 * *(float *)(unaff_EDI + 0x154) + local_8 * *(float *)(unaff_EDI + 0x164) +
              pfVar2[3];
      *(float *)(unaff_EDI + 0x164) = fVar1;
      pfVar2[3] = fVar1;
      fVar1 = local_18 * *(float *)(unaff_EDI + 0x150) +
              local_8 * *(float *)(unaff_EDI + 0x160) +
              local_2c * *(float *)(unaff_EDI + 0x16c) +
              local_28 * *(float *)(unaff_EDI + 0x170) +
              local_1c * *(float *)(unaff_EDI + 0x14c) +
              local_c * *(float *)(unaff_EDI + 0x15c) +
              local_30 * *(float *)(unaff_EDI + 0x168) +
              local_20 * *(float *)(unaff_EDI + 0x148) +
              local_10 * *(float *)(unaff_EDI + 0x158) +
              local_34 * *(float *)(unaff_EDI + 0x164) +
              local_24 * *(float *)(unaff_EDI + 0x144) + local_14 * *(float *)(unaff_EDI + 0x154) +
              pfVar2[4];
      *(float *)(unaff_EDI + 0x160) = fVar1;
      pfVar2[4] = fVar1;
      fVar1 = local_34 * *(float *)(unaff_EDI + 0x160) +
              local_14 * *(float *)(unaff_EDI + 0x150) +
              local_28 * *(float *)(unaff_EDI + 0x16c) +
              local_24 * *(float *)(unaff_EDI + 0x170) +
              local_18 * *(float *)(unaff_EDI + 0x14c) +
              local_8 * *(float *)(unaff_EDI + 0x15c) +
              local_2c * *(float *)(unaff_EDI + 0x168) +
              local_1c * *(float *)(unaff_EDI + 0x148) +
              local_c * *(float *)(unaff_EDI + 0x158) +
              local_30 * *(float *)(unaff_EDI + 0x164) +
              local_20 * *(float *)(unaff_EDI + 0x144) + local_10 * *(float *)(unaff_EDI + 0x154) +
              pfVar2[5];
      *(float *)(unaff_EDI + 0x15c) = fVar1;
      pfVar2[5] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_EDI + 0x160) +
              local_10 * *(float *)(unaff_EDI + 0x150) +
              local_34 * *(float *)(unaff_EDI + 0x15c) +
              local_24 * *(float *)(unaff_EDI + 0x16c) +
              local_20 * *(float *)(unaff_EDI + 0x170) +
              local_14 * *(float *)(unaff_EDI + 0x14c) +
              local_28 * *(float *)(unaff_EDI + 0x168) +
              local_18 * *(float *)(unaff_EDI + 0x148) +
              local_8 * *(float *)(unaff_EDI + 0x158) +
              local_2c * *(float *)(unaff_EDI + 0x164) +
              local_1c * *(float *)(unaff_EDI + 0x144) + local_c * *(float *)(unaff_EDI + 0x154) +
              pfVar2[6];
      *(float *)(unaff_EDI + 0x158) = fVar1;
      pfVar2[6] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_EDI + 0x160) +
              local_c * *(float *)(unaff_EDI + 0x150) +
              local_30 * *(float *)(unaff_EDI + 0x15c) +
              local_20 * *(float *)(unaff_EDI + 0x16c) +
              local_1c * *(float *)(unaff_EDI + 0x170) +
              local_10 * *(float *)(unaff_EDI + 0x14c) +
              local_34 * *(float *)(unaff_EDI + 0x158) +
              local_24 * *(float *)(unaff_EDI + 0x168) +
              local_14 * *(float *)(unaff_EDI + 0x148) +
              local_28 * *(float *)(unaff_EDI + 0x164) +
              local_18 * *(float *)(unaff_EDI + 0x144) + local_8 * *(float *)(unaff_EDI + 0x154) +
              pfVar2[7];
      *(float *)(unaff_EDI + 0x154) = fVar1;
      pfVar2[7] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_EDI + 0x160) +
              local_8 * *(float *)(unaff_EDI + 0x150) +
              local_2c * *(float *)(unaff_EDI + 0x15c) +
              local_1c * *(float *)(unaff_EDI + 0x16c) +
              local_18 * *(float *)(unaff_EDI + 0x170) +
              local_c * *(float *)(unaff_EDI + 0x14c) +
              local_30 * *(float *)(unaff_EDI + 0x158) +
              local_20 * *(float *)(unaff_EDI + 0x168) +
              local_10 * *(float *)(unaff_EDI + 0x148) +
              local_34 * *(float *)(unaff_EDI + 0x154) +
              local_24 * *(float *)(unaff_EDI + 0x164) + local_14 * *(float *)(unaff_EDI + 0x144) +
              pfVar2[8];
      *(float *)(unaff_EDI + 0x150) = fVar1;
      pfVar2[8] = fVar1;
      fVar1 = local_34 * *(float *)(unaff_EDI + 0x150) +
              local_24 * *(float *)(unaff_EDI + 0x160) +
              local_28 * *(float *)(unaff_EDI + 0x15c) +
              local_18 * *(float *)(unaff_EDI + 0x16c) +
              local_14 * *(float *)(unaff_EDI + 0x170) +
              local_8 * *(float *)(unaff_EDI + 0x14c) +
              local_2c * *(float *)(unaff_EDI + 0x158) +
              local_1c * *(float *)(unaff_EDI + 0x168) +
              local_c * *(float *)(unaff_EDI + 0x148) +
              local_30 * *(float *)(unaff_EDI + 0x154) +
              local_20 * *(float *)(unaff_EDI + 0x164) + local_10 * *(float *)(unaff_EDI + 0x144) +
              pfVar2[9];
      *(float *)(unaff_EDI + 0x14c) = fVar1;
      pfVar2[9] = fVar1;
      param_1 = param_1 + -1;
      fVar1 = local_30 * *(float *)(unaff_EDI + 0x150) +
              local_20 * *(float *)(unaff_EDI + 0x160) +
              local_34 * *(float *)(unaff_EDI + 0x14c) +
              local_24 * *(float *)(unaff_EDI + 0x15c) +
              local_14 * *(float *)(unaff_EDI + 0x16c) +
              local_10 * *(float *)(unaff_EDI + 0x170) +
              local_28 * *(float *)(unaff_EDI + 0x158) +
              local_18 * *(float *)(unaff_EDI + 0x168) +
              local_8 * *(float *)(unaff_EDI + 0x148) +
              local_2c * *(float *)(unaff_EDI + 0x154) +
              local_1c * *(float *)(unaff_EDI + 0x164) + local_c * *(float *)(unaff_EDI + 0x144) +
              pfVar2[10];
      *(float *)(unaff_EDI + 0x148) = fVar1;
      pfVar2[10] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_EDI + 0x150) +
              local_1c * *(float *)(unaff_EDI + 0x160) +
              local_30 * *(float *)(unaff_EDI + 0x14c) +
              local_20 * *(float *)(unaff_EDI + 0x15c) +
              local_10 * *(float *)(unaff_EDI + 0x16c) +
              local_c * *(float *)(unaff_EDI + 0x170) +
              local_34 * *(float *)(unaff_EDI + 0x148) +
              local_24 * *(float *)(unaff_EDI + 0x158) +
              local_14 * *(float *)(unaff_EDI + 0x168) +
              local_28 * *(float *)(unaff_EDI + 0x154) +
              local_18 * *(float *)(unaff_EDI + 0x164) + local_8 * *(float *)(unaff_EDI + 0x144) +
              pfVar2[0xb];
      *(float *)(unaff_EDI + 0x144) = fVar1;
      pfVar2[0xb] = fVar1;
      pfVar2 = pfVar2 + 0xc;
    } while (param_1 != 0);
  }
  return;
}

