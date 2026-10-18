/* speed.exe 005f95f0 FUN_005f95f0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005e1970 FUN_005e1970
 * calls 006269b0 FUN_006269b0
 * calls 005f93d0 FUN_005f93d0
 */

void FUN_005f95f0(char param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = DAT_0091dfe4;
  if (DAT_0091dfe4 != 0) {
    if (*(short *)(DAT_0091dfe4 + 0x18) == 0) {
      FUN_005e1970();
    }
    if (iVar3 != 0) {
      do {
        pcVar2 = (char *)FUN_00454810(0x883c65e3,0);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = (char *)FUN_006269b0(1);
        }
        cVar1 = *pcVar2;
        pcVar2 = (char *)FUN_00454810(0xaa0135e9,0);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = (char *)FUN_006269b0(1);
        }
        if (((*pcVar2 == '\0') || (param_1 != '\0')) && (cVar1 != '\0')) {
          FUN_005f93d0();
        }
        iVar3 = *(int *)(iVar3 + 0x24);
        while( true ) {
          if (iVar3 == DAT_0091dfe4) {
            return;
          }
          if (*(short *)(iVar3 + 0x18) != 0) break;
          iVar3 = *(int *)(iVar3 + 0x24);
        }
      } while( true );
    }
  }
  return;
}

