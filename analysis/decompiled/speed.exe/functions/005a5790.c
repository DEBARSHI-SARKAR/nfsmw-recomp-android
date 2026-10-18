/* speed.exe 005a5790 FUN_005a5790; analysis pseudocode, not buildable source.
 * calls 00592490 FUN_00592490
 * calls 005a5020 FUN_005a5020
 */

void __thiscall FUN_005a5790(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int **)(param_1 + 8) == (int *)(param_1 + 8)) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == param_1 + 0x10) {
    return;
  }
  *(undefined1 *)(param_2 + 0x14) = 0;
  iVar2 = FUN_00592490(param_2);
  if (iVar2 == 0) {
    return;
  }
  if (param_2 != *(int *)(param_1 + 0x24)) goto LAB_005a5800;
  cVar1 = FUN_005a5020(1);
  if (cVar1 == '\0') {
    cVar1 = FUN_005a5020(0xffffffff);
    if (cVar1 == '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) goto LAB_005a57fa;
    iVar3 = iVar3 + -4;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
LAB_005a57fa:
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) + -4;
  }
  if (iVar2 == iVar3) {
    return;
  }
LAB_005a5800:
  *(undefined1 *)(iVar2 + 0x28) = 0;
  return;
}

