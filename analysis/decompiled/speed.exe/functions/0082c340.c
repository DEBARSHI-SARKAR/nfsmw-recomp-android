/* speed.exe 0082c340 FUN_0082c340; analysis pseudocode, not buildable source.
 */

void FUN_0082c340(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_009c2954;
  do {
    if (*piVar3 != 0) {
      piVar1 = (int *)(*piVar3 + 0xc0);
      iVar2 = 0x11;
      do {
        if (*piVar1 == param_1) {
          *piVar1 = param_2;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x9c2964);
  return;
}

