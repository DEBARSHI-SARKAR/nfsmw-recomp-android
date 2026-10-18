/* speed.exe 0056b7e0 FUN_0056b7e0; analysis pseudocode, not buildable source.
 */

char * FUN_0056b7e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_008f40f8;
  do {
    if (*piVar1 == param_1) {
      if (iVar2 * 0x14 == -0x8f40f8) {
        return "UNKNOWN";
      }
      return (&PTR_s_ENGLISH_008f40fc)[iVar2 * 5];
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x8f41c0);
  return "UNKNOWN";
}

