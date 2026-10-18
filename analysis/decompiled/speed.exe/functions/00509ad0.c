/* speed.exe 00509ad0 FUN_00509ad0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00508ba0 FUN_00508ba0
 * calls 005094c0 FUN_005094c0
 */

void __thiscall FUN_00509ad0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x378);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)(param_1 + 0x378)) {
    puVar1 = (undefined4 *)*puVar2;
    if ((puVar2[6] & param_2) != 0) {
      FUN_00508ba0(1);
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,puVar2);
    }
  }
  return;
}

