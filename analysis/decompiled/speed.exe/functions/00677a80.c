/* speed.exe 00677a80 FUN_00677a80; analysis pseudocode, not buildable source.
 * calls 006760e0 FUN_006760e0
 * calls 006269b0 FUN_006269b0
 * calls 004596e0 FUN_004596e0
 * calls 00454810 FUN_00454810
 */

void FUN_00677a80(void)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EDI;
  uint local_4;
  
  if (((*(byte *)(unaff_EDI + 0x10) & 1) != 0) && (piVar4 = &DAT_008f87a0, DAT_008f87a8 != 0)) {
    while (*piVar4 != in_EAX) {
      piVar1 = piVar4 + 9;
      piVar4 = piVar4 + 7;
      if (*piVar1 == 0) {
        return;
      }
    }
    FUN_004596e0(piVar4[2]);
    FUN_004596e0(piVar4[4]);
    uVar5 = 1 << ((byte)in_EAX & 0x1f);
    puVar3 = (uint *)FUN_00454810(0xcdc136e8,0);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)FUN_006269b0(4);
    }
    uVar2 = *puVar3;
    if ((uVar5 & uVar2) != 0) {
      FUN_004596e0(0xcdc136e8);
      local_4 = uVar2 & ~uVar5;
      FUN_006760e0(0xcdc136e8,&local_4,1);
    }
  }
  return;
}

