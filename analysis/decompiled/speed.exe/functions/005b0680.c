/* speed.exe 005b0680 FUN_005b0680; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b0680(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  for (iVar2 = 0; (iVar1 != 0 && (iVar2 != param_2)); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

