/* speed.exe 005b9470 FUN_005b9470; analysis pseudocode, not buildable source.
 * calls 005aef40 FUN_005aef40
 * calls 0050d700 FUN_0050d700
 */

void __thiscall FUN_005b9470(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    while ((param_2 < puVar2 + 3 || (puVar2 + 0x1a3 <= param_2))) {
      puVar2 = (undefined4 *)puVar2[1];
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
    }
    FUN_0050d700(param_2);
    piVar1 = puVar2 + 0x1a7;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_005aef40(puVar2);
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

