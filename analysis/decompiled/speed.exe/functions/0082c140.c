/* speed.exe 0082c140 FUN_0082c140; analysis pseudocode, not buildable source.
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082e390 FUN_0082e390
 */

int FUN_0082c140(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return -0x12;
  }
  iVar1 = 0;
  uVar4 = 0;
  do {
    iVar2 = FUN_0082e390(uVar4 & 0xff,param_1 & 0xf000000);
    if (iVar2 != 0) {
      piVar3 = (int *)(DAT_009c2964 + 0xc4);
      iVar2 = 4;
      do {
        if (piVar3[-1] != 0) {
          iVar1 = iVar1 + 1;
        }
        if (*piVar3 != 0) {
          iVar1 = iVar1 + 1;
        }
        if (piVar3[1] != 0) {
          iVar1 = iVar1 + 1;
        }
        if (piVar3[2] != 0) {
          iVar1 = iVar1 + 1;
        }
        piVar3 = piVar3 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_00829450();
      return iVar1;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  FUN_00829450();
  return 0;
}

