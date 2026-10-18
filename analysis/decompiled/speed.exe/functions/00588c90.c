/* speed.exe 00588c90 FUN_00588c90; analysis pseudocode, not buildable source.
 * calls 00573dd0 FUN_00573dd0
 */

void __fastcall FUN_00588c90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00588ca4;
  piVar4 = (int *)(*(int *)(param_1 + 0x2c) + -4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(param_1 + 0x28);
    }
    if (piVar4 == piVar3) break;
    (**(code **)(*piVar4 + 0x18))();
    (**(code **)(*piVar4 + 0x28))();
    if (piVar4[1] == 0) {
LAB_00588ca4:
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(piVar4[1] + -4);
    }
  }
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    piVar4 = (int *)*piVar1;
    iVar2 = *piVar4;
    piVar3 = (int *)piVar4[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar4 + -1 != (int *)0x0) {
      (**(code **)piVar4[-1])(1);
    }
    piVar4 = (int *)*piVar1;
  }
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  FUN_00573dd0();
  return;
}

