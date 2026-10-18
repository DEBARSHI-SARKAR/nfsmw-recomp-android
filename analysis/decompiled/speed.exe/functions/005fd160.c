/* speed.exe 005fd160 FUN_005fd160; analysis pseudocode, not buildable source.
 * calls 00565d90 FUN_00565d90
 * calls 005fc110 FUN_005fc110
 * calls 00565db0 FUN_00565db0
 * calls 005fab40 FUN_005fab40
 * calls 00565da0 FUN_00565da0
 * calls 0050df90 FUN_0050df90
 */

undefined4 FUN_005fd160(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (DAT_00926124 != '\0') {
    return 1;
  }
  if (param_1 == 0) {
    cVar1 = FUN_005fc110();
    if (cVar1 == '\0') {
      uVar2 = FUN_005fab40();
      uVar2 = FUN_00565da0(uVar2);
      return uVar2;
    }
  }
  else {
    if (param_1 == 1) {
      uVar2 = FUN_005fab40();
      uVar2 = FUN_00565db0(uVar2);
      return uVar2;
    }
    if (param_1 == 2) {
      uVar2 = FUN_005fab40();
      cVar1 = FUN_00565d90(uVar2);
      if (cVar1 != '\0') {
        uVar2 = FUN_005fab40();
        cVar1 = FUN_0050df90(uVar2);
        if (cVar1 == '\0') {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

