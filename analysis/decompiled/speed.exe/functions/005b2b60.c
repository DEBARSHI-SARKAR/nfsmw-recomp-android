/* speed.exe 005b2b60 FUN_005b2b60; analysis pseudocode, not buildable source.
 * calls 005aef40 FUN_005aef40
 * calls 005b2ae0 FUN_005b2ae0
 */

void __thiscall FUN_005b2b60(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    while ((puVar1 != (undefined4 *)0x0 && (cVar2 = FUN_005b2ae0(param_2), cVar2 == '\0'))) {
      puVar1 = (undefined4 *)puVar1[1];
    }
    if (puVar1[4] == 0) {
      FUN_005aef40(puVar1);
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

