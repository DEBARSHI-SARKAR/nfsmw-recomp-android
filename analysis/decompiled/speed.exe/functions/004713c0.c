/* speed.exe 004713c0 FUN_004713c0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00455fd0 FUN_00455fd0
 * calls 0045a840 FUN_0045a840
 * calls 00467d90 FUN_00467d90
 * calls 00467d70 FUN_00467d70
 * calls 00467db0 FUN_00467db0
 * calls 00467e10 FUN_00467e10
 * calls 00467e30 FUN_00467e30
 * calls 00467dd0 FUN_00467dd0
 * calls 007c4b80 FUN_007c4b80
 * calls 00467df0 FUN_00467df0
 * calls 00452940 FUN_00452940
 * calls 0045a760 FUN_0045a760
 * calls 006bf530 FUN_006bf530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * __thiscall FUN_004713c0(int param_1,float param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  
  puVar1 = (undefined2 *)(param_1 + 200);
  *puVar1 = SUB42(param_2,0);
  switch(param_2) {
  case 0.0:
    uVar3 = FUN_00467d70();
    FUN_0045a840(uVar3);
    break;
  case 1.4013e-45:
    uVar3 = FUN_00467df0();
    FUN_0045a840(uVar3);
    break;
  case 2.8026e-45:
    uVar3 = FUN_00467d90();
    FUN_0045a840(uVar3);
    break;
  case 4.2039e-45:
    uVar3 = FUN_00467dd0();
    FUN_0045a840(uVar3);
    break;
  case 5.60519e-45:
    uVar3 = FUN_00467e30();
    FUN_0045a840(uVar3);
    break;
  case 7.00649e-45:
    uVar3 = FUN_00467db0();
    FUN_0045a840(uVar3);
    break;
  case 8.40779e-45:
    uVar3 = FUN_00467e10();
    FUN_0045a840(uVar3);
    break;
  default:
    *puVar1 = 3;
    uVar3 = FUN_00455fd0(0x93c171e4,0xeec2271a);
    FUN_0045a760(uVar3);
  }
  if (*(float *)(param_1 + 0xc4) <= _DAT_00890968) {
    param_2 = 1.0;
  }
  else {
    param_2 = *(float *)(param_1 + 0xc4);
  }
  iVar4 = FUN_006bf530();
  uVar2 = (uint)(iVar4 == 3);
  uVar5 = FUN_00452940();
  if (uVar5 <= uVar2) {
    FUN_006269b0(4);
  }
  iVar6 = FUN_007c4b80();
  iVar4 = *(int *)(param_1 + 0x108);
  *(short *)(param_1 + 0xca) =
       (short)((ulonglong)((longlong)iVar6 * 0xb60b60b7) >> 0x28) -
       ((short)(char)((char)(iVar6 / 0x1680000) + (char)(iVar6 >> 0x1f)) >> 0xf);
  uVar5 = FUN_00452940();
  if (uVar2 < uVar5) {
    pfVar7 = (float *)(iVar4 + 0x28 + uVar2 * 4);
  }
  else {
    pfVar7 = (float *)FUN_006269b0(4);
  }
  iVar4 = *(int *)(param_1 + 0x108);
  *(float *)(param_1 + 0xcc) = *pfVar7 / param_2;
  uVar5 = FUN_00452940();
  if (uVar2 < uVar5) {
    puVar9 = (undefined4 *)(iVar4 + 0x48 + uVar2 * 4);
  }
  else {
    puVar9 = (undefined4 *)FUN_006269b0(4);
  }
  iVar4 = *(int *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0xd0) = *puVar9;
  uVar5 = FUN_00452940();
  if (uVar2 < uVar5) {
    puVar9 = (undefined4 *)(iVar4 + 0x18 + uVar2 * 4);
  }
  else {
    puVar9 = (undefined4 *)FUN_006269b0(4);
  }
  *(undefined4 *)(param_1 + 0xd4) = *puVar9;
  uVar5 = FUN_00452940();
  if (uVar5 <= uVar2) {
    FUN_006269b0(4);
  }
  iVar6 = FUN_007c4b80();
  iVar4 = *(int *)(param_1 + 0x108);
  *(short *)(param_1 + 0xd8) =
       (short)((ulonglong)((longlong)iVar6 * 0xb60b60b7) >> 0x28) -
       ((short)(char)((char)(iVar6 / 0x1680000) + (char)(iVar6 >> 0x1f)) >> 0xf);
  uVar5 = FUN_00452940();
  if (uVar2 < uVar5) {
    pbVar8 = (byte *)(iVar4 + 0x6c + uVar2);
  }
  else {
    pbVar8 = (byte *)FUN_006269b0(1);
  }
  iVar4 = *(int *)(param_1 + 0x108);
  *(ushort *)(param_1 + 0xe0) = (ushort)*pbVar8;
  uVar5 = FUN_00452940();
  if (uVar5 <= uVar2) {
    puVar9 = (undefined4 *)FUN_006269b0(4);
    *(undefined4 *)(param_1 + 0xdc) = *puVar9;
    return puVar1;
  }
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar4 + 8 + uVar2 * 4);
  return puVar1;
}

