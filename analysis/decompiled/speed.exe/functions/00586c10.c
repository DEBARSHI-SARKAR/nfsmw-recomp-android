/* speed.exe 00586c10 FUN_00586c10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00586c10(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  bVar1 = false;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -4;
    }
    if (param_1 == -8) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 4;
    }
    if (iVar2 == iVar3) break;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    iVar2 = *(int *)(iVar2 + 4);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -4;
    }
    if (param_1 == -0x10) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0xc;
    }
    if (iVar2 == iVar3) break;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if ((bVar1) || (iVar2 == *(int *)(param_1 + 0x28))) {
      iVar2 = *(int *)(iVar2 + 4);
      bVar1 = true;
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}

