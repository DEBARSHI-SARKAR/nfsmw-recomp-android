/* speed.exe 00778820 FUN_00778820; analysis pseudocode, not buildable source.
 * calls 00765410 FUN_00765410
 * calls 0045da30 FUN_0045da30
 * calls 00778250 FUN_00778250
 * calls 0076e890 FUN_0076e890
 * calls 00773a80 FUN_00773a80
 * calls 007647b0 FUN_007647b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __fastcall FUN_00778820(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_8;
  uint local_4;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 0;
  }
  iVar3 = *(short *)(param_1 + 0x8e) * 0x16;
  iVar4 = iVar3 + DAT_009b38c0;
  iVar5 = (int)*(char *)(param_1 + 0x8c);
  if ((*(byte *)(iVar3 + 10 + DAT_009b38c0) & 1) == 0) {
    bVar1 = (byte)*(undefined2 *)(iVar4 + 10);
    if (((~(bVar1 >> 1) & 1) != 0) && (((bVar1 >> 6 & 1) == 0 || (iVar5 != 0)))) {
      local_4 = (uint)(iVar5 == 1);
      bVar1 = FUN_007647b0(iVar5);
      local_8 = (uint)bVar1;
      uVar6 = FUN_00765410(iVar4,iVar5);
      iVar3 = FUN_0076e890((byte)((ulonglong)uVar6 >> 0x20) ^ iVar5 == 1);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = FUN_0045da30(iVar3,local_4,local_8);
      iVar3 = FUN_00773a80(uVar2,local_4,local_8);
      FUN_00778250((float)(*(int *)((int)uVar6 + 4 + iVar3 * 4) >> 0x12) * _DAT_009b3a68,0);
      *(char *)(param_1 + 0x2c3) = (char)iVar3;
      *(char *)(param_1 + 0x2c1) = (char)iVar3;
      return *(undefined1 *)(param_1 + 0x50);
    }
  }
  return 0;
}

