/* speed.exe 005d5830 FUN_005d5830; analysis pseudocode, not buildable source.
 * calls 005d1d60 FUN_005d1d60
 */

void FUN_005d5830(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
joined_r0x005d5847:
    piVar3 = piVar3 + 1;
    if (piVar3 != param_2) {
      uVar5 = 0xff8 - *(int *)(*piVar3 + 4);
      piVar4 = param_1;
      if (0xff8U - *(int *)(*param_1 + 4) <= uVar5) goto LAB_005d5880;
      goto joined_r0x005d58aa;
    }
  }
  return;
LAB_005d5880:
  piVar2 = piVar3;
  if (uVar5 < 0xff8U - *(int *)(piVar3[-1] + 4)) {
    do {
      piVar4 = piVar2 + -1;
      piVar1 = piVar2 + -2;
      piVar2 = piVar4;
    } while (uVar5 < 0xff8U - *(int *)(*piVar1 + 4));
joined_r0x005d58aa:
    if ((piVar4 != piVar3) && (piVar3 != piVar3 + 1)) {
      FUN_005d1d60(piVar4,piVar3,piVar3 + 1,0,0);
    }
  }
  goto joined_r0x005d5847;
}

