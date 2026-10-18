/* speed.exe 004d96b0 FUN_004d96b0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004d96b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 0x1c)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

