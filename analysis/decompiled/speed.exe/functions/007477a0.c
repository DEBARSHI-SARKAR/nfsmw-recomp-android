/* speed.exe 007477a0 FUN_007477a0; analysis pseudocode, not buildable source.
 * calls 007477a0 FUN_007477a0
 */

void __fastcall FUN_007477a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xf4) = 1;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_007477bb;
  iVar2 = *(int *)(param_1 + 0x18) + -0x10;
  while( true ) {
    if (param_1 == -0x18) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 8;
    }
    if (iVar2 == iVar1) break;
    if (*(int *)(iVar2 + 0xf4) == 0) {
      FUN_007477a0();
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
LAB_007477bb:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x10) + -0x10;
    }
  }
  return;
}

