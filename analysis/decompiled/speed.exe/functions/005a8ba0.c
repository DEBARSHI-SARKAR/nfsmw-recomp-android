/* speed.exe 005a8ba0 FUN_005a8ba0; analysis pseudocode, not buildable source.
 * calls 005a4820 FUN_005a4820
 */

void __thiscall
FUN_005a8ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4) + -4;
  }
  while( true ) {
    iVar1 = param_1;
    if (param_1 == -4) {
      iVar1 = 0;
    }
    if (iVar2 == iVar1) break;
    if (((*(int *)(iVar2 + 0x20) != 0) && (param_5 == *(int *)(iVar2 + 0x20))) &&
       (*(int *)(iVar2 + 0x1c) != 0)) {
      FUN_005a4820(param_2,param_3,param_4,param_5);
    }
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}

