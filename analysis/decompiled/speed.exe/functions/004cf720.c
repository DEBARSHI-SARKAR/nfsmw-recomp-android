/* speed.exe 004cf720 FUN_004cf720; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004c1980 FUN_004c1980
 * calls 004ce520 FUN_004ce520
 * calls 004ce420 FUN_004ce420
 * calls 004c1950 FUN_004c1950
 * calls 004cde30 FUN_004cde30
 * calls 004ce0c0 FUN_004ce0c0
 */

undefined4 * __thiscall FUN_004cf720(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_2;
  *param_1 = *param_2;
  param_1[5] = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  iVar3 = param_2[9];
  param_1[9] = iVar3;
  if ((iVar3 != 0) && (*(undefined4 **)(iVar3 + 0x20) == param_2)) {
    *(undefined4 **)(iVar3 + 0x20) = param_1;
  }
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((int)param_1 + 0x39) = *(undefined1 *)((int)param_2 + 0x39);
  iVar3 = param_1[0x10];
  if (iVar3 != 0) {
    FUN_005d0370(iVar3,(param_1[0x12] - iVar3 >> 2) << 2,0);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_2[0x10] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(param_2[0x11] - param_2[0x10]) >> 2;
  }
  FUN_004ce420(iVar3);
  iVar3 = param_2[0x10];
  if (iVar3 != param_2[0x11]) {
    do {
      iVar1 = param_1[0x10];
      if ((iVar1 == 0) || ((uint)(param_1[0x12] - iVar1 >> 2) <= (uint)(param_1[0x11] - iVar1 >> 2))
         ) {
        FUN_004cde30(param_1[0x11],1,iVar3);
      }
      else {
        iVar1 = param_1[0x11];
        param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
        FUN_004c1950(iVar1,1,iVar3,param_1 + 0xf,param_2);
        param_1[0x11] = iVar1 + 4;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != puVar2[0x11]);
  }
  iVar3 = puVar2[0x10];
  if (iVar3 != 0) {
    FUN_005d0370(iVar3,(puVar2[0x12] - iVar3 >> 2) << 2,0);
  }
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  iVar3 = param_1[0x14];
  if (iVar3 != 0) {
    FUN_005d0370(iVar3,(param_1[0x16] - iVar3 >> 2) << 2,0);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (puVar2[0x14] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(puVar2[0x15] - puVar2[0x14]) >> 2;
  }
  FUN_004ce520(iVar3);
  iVar3 = puVar2[0x14];
  if (iVar3 != puVar2[0x15]) {
    do {
      iVar1 = param_1[0x14];
      if ((iVar1 == 0) || ((uint)(param_1[0x16] - iVar1 >> 2) <= (uint)(param_1[0x15] - iVar1 >> 2))
         ) {
        FUN_004ce0c0(param_1[0x15],1,iVar3);
      }
      else {
        iVar1 = param_1[0x15];
        param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
        FUN_004c1980(iVar1,1,iVar3,param_1 + 0x13,param_2);
        param_1[0x15] = iVar1 + 4;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != puVar2[0x15]);
  }
  iVar3 = puVar2[0x14];
  if (iVar3 != 0) {
    FUN_005d0370(iVar3,(puVar2[0x16] - iVar3 >> 2) << 2,0);
  }
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  param_1[0x17] = puVar2[0x17];
  param_1[0x18] = puVar2[0x18];
  return param_1;
}

