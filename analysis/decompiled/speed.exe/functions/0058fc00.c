/* speed.exe 0058fc00 FUN_0058fc00; analysis pseudocode, not buildable source.
 * calls 005fb710 FUN_005fb710
 * calls 005fb770 FUN_005fb770
 * calls 007c94b0 __chkstk
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_0058fc00(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_12c4;
  int local_12c0;
  byte local_12bc [4];
  int local_12b8 [1197];
  undefined4 uStack_4;
  
  uStack_4 = 0x58fc0a;
  if (DAT_0091e004 != 0) {
    piVar4 = param_1 + 1;
    iVar1 = 0;
    if ((piVar4 <= param_2) && (iVar1 = *param_1, 299 < iVar1)) {
      iVar1 = 300;
    }
    piVar3 = &local_12c0;
    if (iVar1 != 0) {
      piVar2 = param_1 + 5;
      local_12c4 = iVar1;
      do {
        if (piVar2 <= param_2) {
          *piVar3 = *piVar4;
          piVar3[1] = piVar4[1];
          piVar3[2] = piVar4[2];
          piVar3[3] = piVar4[3];
        }
        piVar4 = piVar4 + 4;
        piVar2 = piVar2 + 4;
        if (((DAT_009260b2 != '\0') && (*piVar3 != 0)) && ((*(byte *)(piVar3 + 1) & 2) != 0)) {
          FUN_005fb710(*piVar3);
        }
        piVar3 = piVar3 + 4;
        local_12c4 = local_12c4 + -1;
      } while (local_12c4 != 0);
    }
    FUN_005fb770(&local_12c0,iVar1);
    return param_1 + 0x4b1;
  }
  return param_1;
}

