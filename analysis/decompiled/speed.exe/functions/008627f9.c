/* speed.exe 008627f9 FUN_008627f9; analysis pseudocode, not buildable source.
 * calls 0086227f FUN_0086227f
 * calls 007edabb FUN_007edabb
 * calls 008622aa FUN_008622aa
 * calls 007edb85 FUN_007edb85
 */

undefined4 FUN_008627f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0086227f();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_008622aa();
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[8] = param_1;
    puVar1[9] = param_2;
    puVar1[10] = param_4;
    puVar1[0xb] = param_3;
    if (DAT_00907700 < param_4) {
      param_4 = DAT_00907700;
    }
    uVar2 = FUN_007edb85(param_1,param_2,param_3,param_4,100,puVar1);
    puVar1[7] = uVar2;
    if (puVar1[7] != 0) {
      FUN_007edabb(puVar1[7],FUN_008625cd);
      return *puVar1;
    }
  }
  return 0;
}

