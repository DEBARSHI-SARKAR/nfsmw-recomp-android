/* speed.exe 004716a0 FUN_004716a0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 00452940 FUN_00452940
 * calls 00470730 FUN_00470730
 * calls 004707e0 FUN_004707e0
 * calls 00471370 FUN_00471370
 * calls 00467c30 FUN_00467c30
 */

undefined4 * __thiscall FUN_004716a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a22a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_00467c30(DAT_00988e84,0,0);
  local_4 = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  *(undefined1 *)((int)param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0xc1) = 0;
  *(undefined1 *)((int)param_1 + 0xc2) = 0;
  *(undefined1 *)((int)param_1 + 0xc3) = 0;
  param_1[0x31] = 0x3f800000;
  FUN_00470730(0xeec2271a,0,0);
  local_4._0_1_ = 1;
  FUN_004707e0(0xeec2271a,0,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined2 *)(param_1 + 0x32) = 3;
  iVar1 = FUN_00452940();
  if (iVar1 == 0) {
    FUN_006269b0(4);
  }
  iVar2 = FUN_007c4b80();
  iVar1 = param_1[0x42];
  *(short *)((int)param_1 + 0xca) =
       (short)((ulonglong)((longlong)iVar2 * 0xb60b60b7) >> 0x28) -
       ((short)(char)((char)(iVar2 / 0x1680000) + (char)(iVar2 >> 0x1f)) >> 0xf);
  iVar2 = FUN_00452940();
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)FUN_006269b0(4);
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 0x28);
  }
  iVar1 = param_1[0x42];
  param_1[0x33] = *puVar4;
  iVar2 = FUN_00452940();
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)FUN_006269b0(4);
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = param_1[0x42];
  param_1[0x34] = *puVar4;
  iVar2 = FUN_00452940();
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)FUN_006269b0(4);
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 0x18);
  }
  param_1[0x35] = *puVar4;
  iVar1 = FUN_00452940();
  if (iVar1 == 0) {
    FUN_006269b0(4);
  }
  iVar2 = FUN_007c4b80();
  iVar1 = param_1[0x42];
  *(short *)(param_1 + 0x36) =
       (short)((ulonglong)((longlong)iVar2 * 0xb60b60b7) >> 0x28) -
       ((short)(char)((char)(iVar2 / 0x1680000) + (char)(iVar2 >> 0x1f)) >> 0xf);
  iVar2 = FUN_00452940();
  if (iVar2 == 0) {
    pbVar3 = (byte *)FUN_006269b0(1);
  }
  else {
    pbVar3 = (byte *)(iVar1 + 0x6c);
  }
  iVar1 = param_1[0x42];
  *(ushort *)(param_1 + 0x38) = (ushort)*pbVar3;
  iVar2 = FUN_00452940();
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)FUN_006269b0(4);
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 8);
  }
  param_1[0x37] = *puVar4;
  FUN_00471370(param_2);
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f800000;
  ExceptionList = local_c;
  return param_1;
}

