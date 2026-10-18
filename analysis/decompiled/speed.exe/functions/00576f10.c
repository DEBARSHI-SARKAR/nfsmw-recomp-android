/* speed.exe 00576f10 FUN_00576f10; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00576f10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  iVar3 = 0x15;
  do {
    if ((piVar2[-2] == param_2) &&
       (((piVar2[-1] == param_3 || ((param_3 == 0 && (param_2 == 0xe)))) && (*piVar2 == 1)))) {
      iVar1 = iVar1 + 1;
    }
    if (((piVar2[1] == param_2) && ((piVar2[2] == param_3 || ((param_3 == 0 && (param_2 == 0xe))))))
       && (piVar2[3] == 1)) {
      iVar1 = iVar1 + 1;
    }
    if (((piVar2[4] == param_2) && ((piVar2[5] == param_3 || ((param_3 == 0 && (param_2 == 0xe))))))
       && (piVar2[6] == 1)) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

