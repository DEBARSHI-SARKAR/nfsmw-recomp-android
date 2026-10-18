/* speed.exe 00501760 FUN_00501760; analysis pseudocode, not buildable source.
 * calls 006be460 FUN_006be460
 */

int * FUN_00501760(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 8);
  piVar1 = (int *)(*(int *)(param_1 + 4) + 8 + param_1);
  piVar4 = (int *)0x0;
  if (piVar5 < piVar1) {
    do {
      iVar2 = *piVar5;
      if (iVar2 == 0x134002) {
        piVar4 = piVar5 + 2;
        *DAT_0091a0d4 = (int)piVar4;
        piVar3 = piVar4;
        piVar5[3] = (int)DAT_0091a0d4;
        DAT_0091a0d4 = piVar3;
        *piVar4 = (int)&DAT_0091a0d0;
        DAT_00915180 = DAT_00915180 + 1;
      }
      else if (iVar2 == 0x134003) {
        piVar4[0x1d] = (int)(piVar5 + 2);
      }
      else if (iVar2 == 0x134004) {
        piVar4[0x1e] = (int)(piVar5 + 2);
      }
      else if (iVar2 == -0x7fecbff8) {
        FUN_006be460(piVar5);
      }
      piVar5 = (int *)((int)piVar5 + piVar5[1] + 8);
    } while (piVar5 < piVar1);
    if (piVar4 != (int *)0x0) {
      *(undefined2 *)((int)piVar4 + 0x72) = 1;
    }
  }
  piVar5 = piVar4 + 0x20;
  *piVar5 = (int)piVar5;
  piVar4[0x21] = (int)piVar5;
  piVar5 = piVar4 + 0x22;
  *piVar5 = (int)piVar5;
  piVar4[0x23] = (int)piVar5;
  return piVar4;
}

