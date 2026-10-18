/* speed.exe 0067dce0 FUN_0067dce0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

undefined4 __thiscall FUN_0067dce0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (piVar2 == piVar1) {
      return 0;
    }
    if ((undefined4 *)piVar2[2] == param_2) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar2 != piVar1) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005d0370(piVar2,0xc,0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  return 1;
}

