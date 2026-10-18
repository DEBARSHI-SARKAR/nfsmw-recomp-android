/* speed.exe 00832c64 FUN_00832c64; analysis pseudocode, not buildable source.
 * calls 00832c1d FUN_00832c1d
 * calls 00832ff5 FUN_00832ff5
 */

undefined4 __fastcall FUN_00832c64(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *unaff_ESI;
  undefined4 unaff_EDI;
  
  uVar3 = 0;
  if ((*unaff_ESI == '\x03') && (unaff_ESI[1] == '\x12')) {
    FUN_00832ff5();
    piVar2 = &DAT_009c2a60;
    do {
      iVar1 = *piVar2;
      if (((iVar1 != 0) && (*(byte *)(iVar1 + 9) == param_1)) && (*(byte *)(iVar1 + 8) == param_1))
      {
        return 0;
      }
      piVar2 = piVar2 + 2;
    } while ((int)piVar2 < 0x9c2aa0);
    iVar1 = 0;
    do {
      if ((&DAT_009c2a60)[iVar1 * 2] == 0) {
        (&DAT_009c2a60)[iVar1 * 2] = unaff_ESI;
        (&DAT_009c2a64)[iVar1 * 2] = unaff_EDI;
        uVar3 = 1;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    FUN_00832c1d();
  }
  return uVar3;
}

