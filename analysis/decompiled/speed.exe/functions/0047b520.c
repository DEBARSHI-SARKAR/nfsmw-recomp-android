/* speed.exe 0047b520 FUN_0047b520; analysis pseudocode, not buildable source.
 * calls 0046d2e0 FUN_0046d2e0
 * calls 004647c0 FUN_004647c0
 * calls 0047b150 FUN_0047b150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b520(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float local_48;
  float local_44;
  undefined1 local_40 [64];
  
  iVar3 = DAT_008ee344;
  if (DAT_008ee344 != 0) {
    FUN_0047b150(&local_48,&local_44,0);
    iVar4 = FUN_0046d2e0((local_48 + local_44) * _DAT_00894594);
    sVar1 = *(short *)(iVar3 + 0x14);
    piVar2 = DAT_009885c8;
    while (iVar4 = iVar4 + 1, DAT_009885c8 = piVar2, iVar4 < sVar1) {
      if (piVar2 != (int *)0x0) {
        FUN_004647c0(local_40,"ICECut%d",iVar4);
        (**(code **)(*piVar2 + 0x58))(local_40);
        piVar2 = DAT_009885c8;
      }
    }
  }
  return;
}

