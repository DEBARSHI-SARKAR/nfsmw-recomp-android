/* speed.exe 004d92d0 FUN_004d92d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d92d0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while ((iVar1 != 0 && ((*(int *)(iVar1 + 0x20) >> 4 & 0x7fU) != param_2))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

