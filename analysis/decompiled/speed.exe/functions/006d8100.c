/* speed.exe 006d8100 FUN_006d8100; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

undefined4 FUN_006d8100(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_24;
  
  iVar4 = 0;
  while ((&DAT_0093df00)[iVar4] != 0) {
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
      return 1;
    }
  }
  uStack_24 = 0;
  iVar3 = (**(code **)(*DAT_00982d14 + 0xc))(DAT_00982d14,param_1 + 4,&DAT_0093df00 + iVar4);
  if (iVar3 < 0) {
    pcVar5 = "ERROR: Failed to obtain an interface for the enumerated FF device %d.\n";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x24);
    if (cVar1 == '\x14') {
      (&DAT_00982904)[iVar4] = 1;
    }
    else if (cVar1 == '\x15') {
      (&DAT_0093d904)[iVar4] = 1;
    }
    else if (cVar1 == '\x16') {
      (&DAT_0093cc58)[iVar4] = 1;
    }
    piVar2 = (int *)(&DAT_0093df00)[iVar4];
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,9,&uStack_24);
    if (-1 < iVar3) {
      return 1;
    }
    pcVar5 = 
    "ERROR: failed to disable autocenter property for device %d. OK if non FF wheel plugged in.\n";
  }
  FUN_006ca3d0(pcVar5,iVar4);
  return 1;
}

