/* speed.exe 005867d0 FUN_005867d0; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_005867d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != param_1 + 0xc) {
    if (iVar2 == 0) goto LAB_005867e8;
    iVar2 = iVar2 + -4;
    while( true ) {
      if (param_1 == -0xc) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 8;
      }
      if (iVar2 == iVar1) break;
      FUN_00514cc0(*(undefined4 *)(iVar2 + 0xc));
      if (*(int *)(iVar2 + 4) == 0) {
LAB_005867e8:
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + -4;
      }
    }
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

