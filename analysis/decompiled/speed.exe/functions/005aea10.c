/* speed.exe 005aea10 FUN_005aea10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005aea10(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  uVar3 = 0xffffffff;
  puVar5 = (uint *)(param_1 + 0xc);
  iVar4 = 2;
  do {
    bVar2 = (byte)iVar4;
    if (((param_2 & 1 << (bVar2 - 2 & 0x1f)) != 0) && (puVar5[-1] <= uVar3)) {
      uVar3 = puVar5[-1];
    }
    if (((param_2 & 1 << (bVar2 - 1 & 0x1f)) != 0) && (*puVar5 <= uVar3)) {
      uVar3 = *puVar5;
    }
    if (((param_2 & 1 << (bVar2 & 0x1f)) != 0) && (puVar5[1] <= uVar3)) {
      uVar3 = puVar5[1];
    }
    if (((param_2 & 1 << (bVar2 + 1 & 0x1f)) != 0) && (puVar5[2] <= uVar3)) {
      uVar3 = puVar5[2];
    }
    iVar1 = iVar4 + 2;
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar1 < 0x20);
  return;
}

