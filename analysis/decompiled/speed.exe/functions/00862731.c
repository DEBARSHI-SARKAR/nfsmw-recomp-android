/* speed.exe 00862731 FUN_00862731; analysis pseudocode, not buildable source.
 * calls 007ee03a FUN_007ee03a
 * calls 0086227f FUN_0086227f
 * calls 007edabb FUN_007edabb
 * calls 008622aa FUN_008622aa
 */

undefined4 FUN_00862731(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0086227f();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_008622aa();
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = param_2;
    puVar1[0xb] = 0;
    uVar2 = FUN_007ee03a(param_1,1,100,puVar1);
    puVar1[7] = uVar2;
    if (puVar1[7] != 0) {
      FUN_007edabb(puVar1[7],FUN_0086252f);
      return *puVar1;
    }
  }
  return 0;
}

