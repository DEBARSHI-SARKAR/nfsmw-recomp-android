/* speed.exe 007b0b70 FUN_007b0b70; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_007b0b70(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar4 = DAT_009ba078;
  if (DAT_009ba074 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_009ba074 + -4;
  }
  while( true ) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar4 + -4;
    }
    if (*(int *)(iVar3 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + -4;
    }
    if (iVar1 == iVar3) break;
    if (*(char *)(iVar1 + 0x14) != '\0') {
      *(undefined1 *)(iVar1 + 0x14) = 0;
      iVar4 = DAT_009ba078;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_007b0bd5;
  piVar5 = (int *)(*(int *)(param_1 + 0x2c) + -4);
  while( true ) {
    if (param_1 == -0x2c) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(param_1 + 0x28);
    }
    if (piVar5 == piVar2) break;
    if (*(char *)(piVar5[0x15] + 0x14) == '\0') {
      iVar4 = piVar5[0x13];
      uVar6 = 0x77cdc4e9;
    }
    else {
      iVar4 = piVar5[0x13];
      uVar6 = 0xe6361f46;
    }
    FUN_00514d10(iVar4,uVar6,1);
    (**(code **)(*piVar5 + 0xc))();
    if (piVar5[1] == 0) {
LAB_007b0bd5:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(piVar5[1] + -4);
    }
  }
  return;
}

