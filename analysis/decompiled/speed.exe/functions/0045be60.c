/* speed.exe 0045be60 FUN_0045be60; analysis pseudocode, not buildable source.
 * calls 0045a490 FUN_0045a490
 */

void __thiscall FUN_0045be60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x14) + 8) + 0x14) + *(int *)(iVar1 + 8);
  }
  if (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0) {
    FUN_0045a490(**(undefined4 **)(iVar1 + 0x14),param_2,iVar2 + param_3);
    return;
  }
  FUN_0045a490(0,param_2,iVar2 + param_3);
  return;
}

