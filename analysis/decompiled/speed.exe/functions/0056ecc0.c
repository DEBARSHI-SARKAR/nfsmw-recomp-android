/* speed.exe 0056ecc0 FUN_0056ecc0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_0056ecc0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 == param_2) {
      return param_1 + iVar1 * 5;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 5;
  } while (iVar1 < 200);
  return (int *)0x0;
}

