/* speed.exe 0083ff40 FUN_0083ff40; analysis pseudocode, not buildable source.
 */

void FUN_0083ff40(void)

{
  int *piVar1;
  
  piVar1 = &DAT_009c3640;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    piVar1 = piVar1 + 2;
  } while ((int)piVar1 < 0x9c36c0);
  DAT_009c36d0 = 0;
  return;
}

