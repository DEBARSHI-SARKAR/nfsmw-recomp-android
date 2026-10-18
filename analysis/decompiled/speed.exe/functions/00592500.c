/* speed.exe 00592500 FUN_00592500; analysis pseudocode, not buildable source.
 * calls 00586760 FUN_00586760
 * calls 00592410 FUN_00592410
 */

bool __thiscall FUN_00592500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + -4;
    }
    if (iVar4 == iVar2) {
      return false;
    }
    iVar2 = FUN_00592410(iVar4);
    while( true ) {
      if (*(int *)(iVar4 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 4) + -4;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + -4;
      }
      if (iVar4 == 0) break;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar1 + -4;
      }
      if ((iVar4 == iVar3) || (*(char *)(iVar2 + 0x14) != '\0')) break;
    }
  }
  else if (param_2 == -1) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + -4;
    }
    if (iVar4 == iVar2) {
      return false;
    }
    iVar2 = FUN_00592410(iVar4);
    while( true ) {
      if (*(int *)(iVar4 + 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8) + -4;
      }
      if (*(int *)(iVar2 + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8) + -4;
      }
      if (iVar4 == 0) break;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar1 + -4;
      }
      if ((iVar4 == iVar3) || (*(char *)(iVar2 + 0x14) != '\0')) break;
    }
  }
  bVar5 = iVar4 != *(int *)(param_1 + 0x2c);
  if (bVar5) {
    FUN_00586760(0x7ab5521a);
    *(int *)(param_1 + 0x2c) = iVar4;
    FUN_00586760(0x249db7b7);
  }
  return bVar5;
}

