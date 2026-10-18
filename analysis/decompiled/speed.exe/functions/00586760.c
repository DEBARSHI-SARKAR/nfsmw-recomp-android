/* speed.exe 00586760 FUN_00586760; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __thiscall FUN_00586760(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) + -4;
  }
  while( true ) {
    if (param_1 == -0xc) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 8;
    }
    if (iVar2 == iVar1) break;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      FUN_00514d10(*(int *)(iVar2 + 0xc),param_2,1);
    }
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00514d10(*(int *)(param_1 + 0x14),param_2,1);
  }
  return;
}

