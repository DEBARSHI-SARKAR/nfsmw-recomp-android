/* speed.exe 005bb7e0 FUN_005bb7e0; analysis pseudocode, not buildable source.
 * calls 005b7600 FUN_005b7600
 */

void __thiscall FUN_005bb7e0(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x14))(param_2);
  if (cVar1 != '\0') {
    FUN_005b7600(param_2);
    if (*(int **)(param_1 + 0x108) == (int *)0x0) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x10))(param_2);
    }
    if (*(int **)(param_1 + 0x108) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x108) + 8))(param_2,param_2[0x19],param_2[0x1a]);
    }
    if ((cVar1 != '\0') && (param_2 != (undefined4 *)0x0)) {
      (**(code **)*param_2)(1);
    }
  }
  return;
}

