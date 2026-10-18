/* speed.exe 00650310 FUN_00650310; analysis pseudocode, not buildable source.
 */

bool FUN_00650310(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x57574153) {
    if (((uVar1 == 0x57574152) || (uVar1 == 0x46465548)) || (uVar1 == 0x504d4f43)) {
      return (char)param_1[1] == '\x01';
    }
  }
  else if (uVar1 == 0x5a4c444a) {
    return (char)param_1[1] == '\x02';
  }
  return false;
}

