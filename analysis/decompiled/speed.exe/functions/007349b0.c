/* speed.exe 007349b0 FUN_007349b0; analysis pseudocode, not buildable source.
 * calls 005d2b90 FUN_005d2b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_007349b0(float *param_1,float *param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  
  if (param_1[0x19] < _DAT_00890968) {
    param_1[0x19] = 13.333333;
  }
  fVar4 = param_3 * param_1[0x19] + param_1[0x1a];
  bVar1 = NAN(_DAT_0089096c);
  bVar2 = fVar4 < _DAT_0089096c;
  bVar3 = fVar4 == _DAT_0089096c;
  param_1[0x1a] = fVar4;
  if (bVar2) {
    fVar4 = _DAT_0089096c - (_DAT_008959e4 - (fVar4 + fVar4)) * fVar4 * fVar4;
    *param_2 = *param_2 - *param_1;
    param_2[1] = param_2[1] - param_1[1];
    param_2[2] = param_2[2] - param_1[2];
    *param_2 = fVar4 * *param_2 + *param_1;
    param_2[1] = fVar4 * param_2[1] + param_1[1];
    param_2[2] = fVar4 * param_2[2] + param_1[2];
    param_2[4] = param_2[4] - param_1[4];
    param_2[5] = param_2[5] - param_1[5];
    param_2[6] = param_2[6] - param_1[6];
    param_2[4] = fVar4 * param_2[4] + param_1[4];
    param_2[5] = fVar4 * param_2[5] + param_1[5];
    param_2[6] = fVar4 * param_2[6] + param_1[6];
    uVar5 = FUN_005d2b90(param_1 + 0xc,param_2 + 0xc,param_2 + 0xc,fVar4);
    param_2[0x10] = param_2[0x10] - param_1[0x10];
    param_2[0x11] = param_2[0x11] - param_1[0x11];
    param_2[0x12] = param_2[0x12] - param_1[0x12];
    param_2[0x10] = fVar4 * param_2[0x10] + param_1[0x10];
    param_2[0x11] = fVar4 * param_2[0x11] + param_1[0x11];
    param_2[0x12] = fVar4 * param_2[0x12] + param_1[0x12];
    param_2[3] = (param_2[3] - param_1[3]) * fVar4 + param_1[3];
    param_2[7] = (param_2[7] - param_1[7]) * fVar4 + param_1[7];
    param_2[0xb] = (param_2[0xb] - param_1[0xb]) * fVar4 + param_1[0xb];
    param_2[0x18] = (param_2[0x18] - param_1[0x18]) * fVar4 + param_1[0x18];
    *(undefined1 *)((int)param_2 + 0x72) = *(undefined1 *)((int)param_1 + 0x72);
    *(undefined1 *)((int)param_2 + 0x71) = *(undefined1 *)((int)param_1 + 0x71);
    return uVar5 & 0xffffff00;
  }
  for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                  (ushort)bVar2 << 8 | (ushort)(NAN(fVar4) || bVar1) << 10 |
                                  (ushort)bVar3 << 0xe) >> 8),1);
}

