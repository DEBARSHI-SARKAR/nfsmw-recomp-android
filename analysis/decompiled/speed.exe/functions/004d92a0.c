/* speed.exe 004d92a0 FUN_004d92a0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004d92a0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(int *)(iVar1 + 0x20) >> 4 & 0x7fU) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

