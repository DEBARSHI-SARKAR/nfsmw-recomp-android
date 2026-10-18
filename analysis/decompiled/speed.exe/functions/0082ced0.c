/* speed.exe 0082ced0 FUN_0082ced0; analysis pseudocode, not buildable source.
 * calls 0082e390 FUN_0082e390
 */

void FUN_0082ced0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if ((&DAT_009c2954)[iVar4] != 0) {
      iVar3 = FUN_0082e390(iVar4,0xffffffff);
      if (iVar3 != 0) {
        iVar3 = 0x40;
        do {
          if ((*(int *)(iVar3 + DAT_009c2964) != 0) &&
             (piVar1 = *(int **)(*(int *)(iVar3 + DAT_009c2964) + 300), piVar1 != (int *)0x0)) {
            iVar2 = *piVar1;
            if (param_1 == 0) {
              (**(code **)(iVar2 + 0x14))();
            }
            else {
              (**(code **)(iVar2 + 8))();
            }
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xa0);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

