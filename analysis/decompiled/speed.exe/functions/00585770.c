/* speed.exe 00585770 FUN_00585770; analysis pseudocode, not buildable source.
 * calls 005167e0 FUN_005167e0
 * calls 005855b0 FUN_005855b0
 */

void __thiscall FUN_00585770(int param_1,int param_2)

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
    if ((*(short *)(iVar2 + 0x24) == 0) || (param_2 != 0)) {
      FUN_005855b0();
    }
    else if (*(int *)(iVar2 + 0x20) != 0) {
      FUN_005167e0(*(int *)(iVar2 + 0x20));
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

