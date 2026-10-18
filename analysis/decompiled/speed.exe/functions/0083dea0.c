/* speed.exe 0083dea0 FUN_0083dea0; analysis pseudocode, not buildable source.
 */

int FUN_0083dea0(int param_1,int param_2,byte *param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = *param_3;
  for (iVar4 = 0; (bVar2 != 0 && (iVar4 < param_2 + -2)); iVar4 = iVar4 + iVar3) {
    uVar1 = *(ushort *)(param_4 + (uint)bVar2 * 2);
    bVar2 = (byte)uVar1;
    if (uVar1 < 0x80) {
      *(byte *)(iVar4 + param_1) = bVar2;
      iVar3 = 1;
    }
    else if (uVar1 < 0x800) {
      *(byte *)(iVar4 + 1 + param_1) = bVar2 & 0x3f | 0x80;
      *(byte *)(iVar4 + param_1) = (byte)(uVar1 >> 6) | 0xc0;
      iVar3 = 2;
    }
    else {
      *(byte *)(iVar4 + param_1) = (byte)(uVar1 >> 0xc) | 0xe0;
      *(byte *)(iVar4 + 2 + param_1) = bVar2 & 0x3f | 0x80;
      *(byte *)(iVar4 + 1 + param_1) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      iVar3 = 3;
    }
    bVar2 = param_3[1];
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(iVar4 + param_1) = 0;
  return iVar4 + 1;
}

