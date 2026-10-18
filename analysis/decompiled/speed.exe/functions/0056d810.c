/* speed.exe 0056d810 FUN_0056d810; analysis pseudocode, not buildable source.
 * calls 005fb710 FUN_005fb710
 */

int * FUN_0056d810(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (DAT_0091e004 != (int *)0x0) {
    iVar1 = *DAT_0091e004;
    if (299 < iVar1) {
      iVar1 = 300;
    }
    piVar4 = param_1;
    if (param_1 + 1 <= param_2) {
      *param_1 = iVar1;
      piVar4 = param_1 + 1;
    }
    piVar3 = (int *)DAT_0091e004[0xf];
    if (iVar1 != 0) {
      piVar2 = piVar4 + 4;
      do {
        if (((DAT_009260b2 != '\0') && (*piVar3 != 0)) && ((*(byte *)(piVar3 + 1) & 2) != 0)) {
          FUN_005fb710(*piVar3);
        }
        piVar5 = piVar4;
        if (piVar2 <= param_2) {
          *piVar4 = *piVar3;
          piVar4[1] = piVar3[1];
          piVar4[2] = piVar3[2];
          piVar5 = piVar4 + 4;
          piVar4[3] = piVar3[3];
          piVar2 = piVar2 + 4;
        }
        piVar3 = piVar3 + 4;
        iVar1 = iVar1 + -1;
        piVar4 = piVar5;
      } while (iVar1 != 0);
    }
    return param_1 + 0x4b1;
  }
  return param_1;
}

