/* speed.exe 005b1380 FUN_005b1380; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b1380(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x3c); (iVar1 != 0 && (*(int *)(iVar1 + 0xc) != param_2));
      iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

