/* speed.exe 0072e6e0 FUN_0072e6e0; analysis pseudocode, not buildable source.
 * calls 00726630 FUN_00726630
 */

void FUN_0072e6e0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    piVar5 = param_1 + 2;
    do {
      iVar1 = *piVar4;
      piVar2 = param_1;
      if (iVar1 < *param_1) {
joined_r0x0072e72c:
        if ((piVar2 != piVar4) && (piVar4 != piVar5)) {
          FUN_00726630(piVar2,piVar4,piVar5,0,0);
        }
      }
      else {
        piVar3 = piVar5 + -2;
        if (iVar1 < piVar5[-2]) {
          do {
            piVar2 = piVar3;
            piVar3 = piVar2 + -1;
          } while (iVar1 < *piVar3);
          goto joined_r0x0072e72c;
        }
      }
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

