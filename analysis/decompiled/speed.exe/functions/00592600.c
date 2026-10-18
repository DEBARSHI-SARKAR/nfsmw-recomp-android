/* speed.exe 00592600 FUN_00592600; analysis pseudocode, not buildable source.
 * calls 00592410 FUN_00592410
 */

void __fastcall FUN_00592600(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar2 + -4;
  }
  iVar1 = FUN_00592410(iVar1);
  if (iVar2 == 0) goto LAB_00592627;
  iVar2 = iVar2 + -4;
  while( true ) {
    if (param_1 == -8) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 4;
    }
    if (iVar2 == iVar3) break;
    if (*(char *)(iVar1 + 0x14) == '\0') {
      *(undefined1 *)(iVar2 + 0x28) = 0;
    }
    else if (iVar1 != *(int *)(param_1 + 0x24)) {
      *(undefined1 *)(iVar2 + 0x28) = 1;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
    if (*(int *)(iVar2 + 4) == 0) {
LAB_00592627:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}

