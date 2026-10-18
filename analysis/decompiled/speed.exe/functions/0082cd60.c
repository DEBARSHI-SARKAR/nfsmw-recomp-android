/* speed.exe 0082cd60 FUN_0082cd60; analysis pseudocode, not buildable source.
 * calls 00829290 FUN_00829290
 */

int FUN_0082cd60(byte param_1,byte param_2)

{
  int iVar1;
  int local_40 [14];
  int local_8;
  
  local_8 = 1;
  do {
    iVar1 = (0x10000000 << ((byte)local_8 & 0x1f) | 0x1000000 << (param_1 & 0x1f)) +
            (1 << (param_2 & 0x1f));
    FUN_00829290(iVar1,local_40);
    if (-1 < local_40[0]) {
      return iVar1;
    }
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return 0;
}

