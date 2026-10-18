/* speed.exe 005b2a10 FUN_005b2a10; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005b2a10(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(short *)(param_1 + 0xe) != 0x20) {
    uVar5 = 0;
    cVar3 = *(char *)(param_1 + 0x10);
    while (cVar3 == -1) {
      pcVar1 = (char *)(param_1 + 0x11 + uVar5);
      uVar5 = uVar5 + 1;
      cVar3 = *pcVar1;
    }
    uVar6 = uVar5 << 3;
    bVar4 = *(byte *)((uVar5 & 0x1fffffff) + 0x10 + param_1) & 1;
    while (bVar4 != 0) {
      uVar6 = uVar6 + 1;
      bVar4 = *(byte *)((uVar6 >> 3) + 0x10 + param_1) & (byte)(1 << ((byte)uVar6 & 7));
    }
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
    pbVar2 = (byte *)((uVar6 >> 3) + 0x10 + param_1);
    *pbVar2 = *pbVar2 | '\x01' << ((byte)uVar6 & 7);
    return *(ushort *)(param_1 + 0xc) * uVar6 + *(int *)(param_1 + 0x14);
  }
  return 0;
}

