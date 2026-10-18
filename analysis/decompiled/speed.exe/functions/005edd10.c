/* speed.exe 005edd10 FUN_005edd10; analysis pseudocode, not buildable source.
 * calls 005e6920 FUN_005e6920
 */

void __fastcall FUN_005edd10(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    if ((*(byte *)(piVar2 + 7) & 2) != 0) {
      piVar2[6] = 0xbf800000;
      piVar2[5] = 0xbf800000;
    }
    FUN_005e6920();
    piVar1 = *(int **)(param_1 + 0x9c);
  }
  return;
}

