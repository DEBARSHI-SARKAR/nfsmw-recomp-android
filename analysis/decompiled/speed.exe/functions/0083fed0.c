/* speed.exe 0083fed0 FUN_0083fed0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 */

void FUN_0083fed0(void)

{
  DWORD DVar1;
  int *piVar2;
  
  piVar2 = &DAT_009c3640;
  do {
    if (*piVar2 != 0) {
      DVar1 = GetTickCount();
      (*(code *)*piVar2)(piVar2[1],DVar1);
    }
    piVar2 = piVar2 + 2;
  } while ((int)piVar2 < 0x9c36c0);
  return;
}

