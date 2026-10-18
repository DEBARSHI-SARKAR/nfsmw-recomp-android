/* speed.exe 008001d8 FUN_008001d8; analysis pseudocode, not buildable source.
 */

void FUN_008001d8(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 1;
  *(undefined1 *)(param_1 + 0x5c0) = 0;
  uVar5 = 0;
  iVar6 = 0x40;
  do {
    uVar1 = 1;
    do {
      if (*(byte *)(uVar1 + param_2) == uVar5) {
        *(char *)(param_1 + 0x5c0 + iVar4) = (char)uVar1;
        iVar4 = iVar4 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  bVar3 = 0;
  pbVar2 = (byte *)(param_1 + 0x600);
  do {
    if (bVar3 < pbVar2[-0x40]) {
      bVar3 = pbVar2[-0x40];
    }
    *pbVar2 = bVar3;
    if (6 < *(byte *)(param_1 + 0x19c)) {
      *pbVar2 = bVar3 + 1;
    }
    pbVar2 = pbVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

