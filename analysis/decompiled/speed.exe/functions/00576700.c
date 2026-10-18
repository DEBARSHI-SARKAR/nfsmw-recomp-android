/* speed.exe 00576700 FUN_00576700; analysis pseudocode, not buildable source.
 * calls 00576560 FUN_00576560
 * calls 005765f0 FUN_005765f0
 * calls 00576670 FUN_00576670
 */

byte FUN_00576700(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  undefined1 local_1;
  
  if (DAT_00926124 == '\0') {
    local_1 = 0;
    if ((param_1 & 1) != 0) {
      local_1 = FUN_00576560(param_1,param_2,param_3,param_4,param_5);
    }
    if ((param_1 & 2) != 0) {
      bVar1 = FUN_00576670(param_1,param_2,param_3,param_5);
      local_1 = local_1 | bVar1;
    }
    if ((param_1 & 4) != 0) {
      bVar1 = FUN_005765f0(param_1,param_2,param_3,param_5);
      local_1 = local_1 | bVar1;
    }
    return local_1;
  }
  return 1;
}

