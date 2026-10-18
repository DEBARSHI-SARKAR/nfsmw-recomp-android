/* speed.exe 00588d20 FUN_00588d20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00588d20(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00588d31;
  piVar2 = (int *)(*(int *)(param_1 + 0x2c) + -4);
  while( true ) {
    if (param_1 == -0x2c) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(param_1 + 0x28);
    }
    if (piVar2 == piVar1) break;
    (**(code **)(*piVar2 + 0xc))();
    if (piVar2[1] == 0) {
LAB_00588d31:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(piVar2[1] + -4);
    }
  }
  return;
}

