/* speed.exe 005ae890 FUN_005ae890; analysis pseudocode, not buildable source.
 * calls 005ae890 FUN_005ae890
 */

int __thiscall FUN_005ae890(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x10) == param_2) break;
    if ((*(int *)(iVar1 + 0x18) == 5) && (iVar2 = FUN_005ae890(param_2), iVar2 != 0)) {
      return iVar2;
    }
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

