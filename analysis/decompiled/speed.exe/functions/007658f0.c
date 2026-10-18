/* speed.exe 007658f0 FUN_007658f0; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_007658f0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x78);
  if ((((uVar4 == 3) && (uVar4 = 0, *(char *)(param_1 + 0x50) != '\0')) &&
      (puVar1 = *(ushort **)(param_1 + 0x2e4), puVar1 != (ushort *)0x0)) &&
     (iVar2 = *(int *)(param_1 + 0x2e0), 0 < iVar2)) {
    uVar6 = (uint)*(ushort *)
                   (DAT_009b38c0 +
                   ((int)*(char *)(param_1 + 0x8c) + *(short *)(param_1 + 0x8e) * 0xb) * 2) * 0x20 +
            DAT_009b38bc;
    iVar3 = 0;
    puVar5 = puVar1;
    if (0 < iVar2) {
      do {
        if ((int)*(short *)(param_1 + 0x8e) == (uint)*puVar5) break;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar3 < iVar2);
    }
    uVar4 = iVar3 + 1;
    if (((int)uVar4 < iVar2) &&
       ((puVar1 = puVar1 + uVar4,
        uVar4 = (uint)*(ushort *)((uint)*puVar1 * 0x16 + DAT_009b38c0 + 2) * 0x20 + DAT_009b38bc,
        uVar6 == (uint)*(ushort *)((uint)*puVar1 * 0x16 + DAT_009b38c0) * 0x20 + DAT_009b38bc ||
        (uVar6 == uVar4)))) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}

