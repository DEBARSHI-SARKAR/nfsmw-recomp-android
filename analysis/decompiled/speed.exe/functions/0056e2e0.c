/* speed.exe 0056e2e0 FUN_0056e2e0; analysis pseudocode, not buildable source.
 */

undefined1 __thiscall FUN_0056e2e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x40;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *param_2;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}

