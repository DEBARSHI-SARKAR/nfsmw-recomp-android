/* speed.exe 007a6c60 FUN_007a6c60; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 00507e40 FUN_00507e40
 * calls 00503360 FUN_00503360
 */

void FUN_007a6c60(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_44;
  undefined1 local_40 [64];
  
  iVar1 = 0;
  piVar2 = &DAT_009b9d60;
  do {
    iVar3 = 5;
    do {
      if (*piVar2 != 0) {
        local_44 = *piVar2;
        FUN_00503360(&local_44,1);
      }
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((&DAT_009b9d50)[iVar1] != '\0') {
      FUN_004647c0(local_40,"GLOBAL\\HUDS_Custom_%2.2d.bin",iVar1);
      FUN_00507e40(local_40);
    }
    (&DAT_009b9d50)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x9b9e3c);
  DAT_009b9eb0 = 0;
  return;
}

