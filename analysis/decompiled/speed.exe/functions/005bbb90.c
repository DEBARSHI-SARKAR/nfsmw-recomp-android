/* speed.exe 005bbb90 FUN_005bbb90; analysis pseudocode, not buildable source.
 * calls 005b9c80 FUN_005b9c80
 */

undefined4 FUN_005bbb90(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if (param_3 < 0xe10c4afa) {
    if (param_3 == 0xe10c4af9) {
      FUN_005b9c80(0xffffffff,0);
      return 1;
    }
    if (param_3 == 0x30471ac) {
      FUN_005b9c80(1,0);
      return 1;
    }
    if (param_3 == 0xe10814a6) {
      FUN_005b9c80(0,1);
      return 1;
    }
  }
  else if (param_3 == 0xfb814f13) {
    FUN_005b9c80(0,0xffffffff);
    return 1;
  }
  return 0;
}

