/* speed.exe 00586950 FUN_00586950; analysis pseudocode, not buildable source.
 * calls 00586680 FUN_00586680
 */

int __thiscall FUN_00586950(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != param_1 + 0x10) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -4;
    }
    while( true ) {
      if (param_1 == -0x10) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0xc;
      }
      if (iVar2 == iVar1) break;
      iVar1 = FUN_00586680(param_2);
      if (iVar1 != 0) {
        return iVar2;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + -4;
      }
    }
  }
  return 0;
}

