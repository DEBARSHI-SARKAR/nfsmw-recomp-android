/* speed.exe 0058a960 FUN_0058a960; analysis pseudocode, not buildable source.
 * calls 0058a080 FUN_0058a080
 * calls 0058a500 FUN_0058a500
 * calls 0058a5c0 FUN_0058a5c0
 */

byte FUN_0058a960(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  undefined1 local_1;
  
  if (DAT_00926124 != '\0') {
    return 1;
  }
  local_1 = 0;
  if ((param_1 & 1) != 0) {
    local_1 = FUN_0058a080(param_1,param_2,param_3,param_4,param_5);
  }
  if ((param_1 & 2) != 0) {
    bVar1 = FUN_0058a5c0(param_1,param_2,param_3,param_5);
    local_1 = local_1 | bVar1;
  }
  if ((param_1 & 4) != 0) {
    bVar1 = FUN_0058a500(param_1,param_2,param_3,param_5);
    local_1 = local_1 | bVar1;
  }
  return local_1;
}

