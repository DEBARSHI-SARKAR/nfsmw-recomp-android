/* speed.exe 0059b830 FUN_0059b830; analysis pseudocode, not buildable source.
 * calls 0059b470 FUN_0059b470
 */

void __fastcall FUN_0059b830(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -4;
    }
    if (param_1 == -8) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 4;
    }
    if (iVar2 == iVar1) break;
    FUN_0059b470(1);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return;
}

