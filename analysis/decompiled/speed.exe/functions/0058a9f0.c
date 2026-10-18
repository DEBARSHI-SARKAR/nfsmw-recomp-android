/* speed.exe 0058a9f0 FUN_0058a9f0; analysis pseudocode, not buildable source.
 * calls 0058a5f0 FUN_0058a5f0
 * calls 0058a0d0 FUN_0058a0d0
 * calls 00576ad0 FUN_00576ad0
 */

byte FUN_0058a9f0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 local_1;
  
  if (DAT_00926124 != '\0') {
    return 1;
  }
  local_1 = 0;
  if ((param_1 & 1) != 0) {
    local_1 = FUN_0058a0d0(param_1,param_2,param_3);
  }
  if ((param_1 & 2) != 0) {
    bVar1 = FUN_0058a5f0(param_1,param_2);
    local_1 = local_1 | bVar1;
  }
  if ((param_1 & 4) != 0) {
    bVar1 = FUN_0058a0d0(param_1,param_2,0);
    local_1 = local_1 | bVar1;
  }
  if (DAT_008f8718 != '\0') {
    cVar2 = FUN_00576ad0(param_2);
    if (cVar2 != '\0') {
      return local_1 | 1;
    }
  }
  return local_1;
}

