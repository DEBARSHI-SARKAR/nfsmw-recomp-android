/* speed.exe 0045f210 FUN_0045f210; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0045f210(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((-1 < param_2) && (param_2 < *(int *)(iVar2 + 0x24))) break;
    piVar1 = (int *)(iVar2 + 0x24);
    iVar2 = *(int *)(iVar2 + 8);
    param_2 = param_2 - *piVar1;
  }
  return *(int *)(param_1 + 0x28) * param_2 + 0x30 + iVar2;
}

