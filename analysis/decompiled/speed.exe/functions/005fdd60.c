/* speed.exe 005fdd60 FUN_005fdd60; analysis pseudocode, not buildable source.
 * calls 005fd820 FUN_005fd820
 */

void __fastcall FUN_005fdd60(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x80);
  if (piVar2 != *(int **)(param_1 + 0x84)) {
    do {
      if (((*(char *)(*piVar2 + 0x4c) == '\x02') || (*(char *)(*piVar2 + 0x4c) == '\x03')) &&
         (cVar1 = FUN_005fd820(), cVar1 != '\0')) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x84));
  }
  return;
}

