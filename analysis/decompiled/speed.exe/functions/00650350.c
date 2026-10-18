/* speed.exe 00650350 FUN_00650350; analysis pseudocode, not buildable source.
 * calls 006500f0 FUN_006500f0
 * calls 006501f0 FUN_006501f0
 * calls 00650160 FUN_00650160
 * calls 0064db40 FUN_0064db40
 */

undefined4 FUN_00650350(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar1 = *param_1;
    if (uVar1 < 0x57574153) {
      if (uVar1 == 0x57574152) {
        uVar2 = FUN_00650160();
        return uVar2;
      }
      if (uVar1 == 0x46465548) {
        uVar2 = FUN_006500f0();
        return uVar2;
      }
      if (uVar1 == 0x504d4f43) {
        uVar2 = FUN_006501f0();
        return uVar2;
      }
    }
    else if (uVar1 == 0x5a4c444a) {
      uVar2 = FUN_0064db40();
      return uVar2;
    }
  }
  return 0;
}

