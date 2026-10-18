/* speed.exe 00709d80 FUN_00709d80; analysis pseudocode, not buildable source.
 */

int FUN_00709d80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = 0;
  if (param_1 != 0) {
    piVar4 = &DAT_00993398;
    do {
      piVar3 = (int *)*piVar4;
      if (((piVar3 != (int *)0x0) && (piVar4[1] - (int)piVar3 >> 2 != 0)) &&
         (piVar3 != (int *)piVar4[1])) {
        do {
          iVar1 = *(int *)(*piVar3 + 0xc);
          if ((iVar1 == 0) || (iVar1 != param_1)) {
            piVar3 = piVar3 + 1;
          }
          else {
            *(undefined4 *)(*piVar3 + 0xc) = 0;
            iVar2 = iVar2 + 1;
          }
        } while (piVar3 != (int *)piVar4[1]);
      }
      piVar4 = piVar4 + 5;
    } while ((int)piVar4 < 0x9933e8);
    if ((DAT_0099225c != 0) && (*(int *)(DAT_0099225c + 0xc) == param_1)) {
      *(undefined4 *)(DAT_0099225c + 0xc) = 0;
    }
    iVar1 = *(int *)(DAT_00992230 + 0x88);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) && (*(int *)(iVar1 + 0xc) == param_1)) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  return iVar2;
}

