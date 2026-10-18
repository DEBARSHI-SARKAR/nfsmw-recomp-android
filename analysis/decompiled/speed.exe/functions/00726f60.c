/* speed.exe 00726f60 FUN_00726f60; analysis pseudocode, not buildable source.
 * calls 00789cc0 FUN_00789cc0
 * calls 00768200 FUN_00768200
 * calls 00449320 FUN_00449320
 */

float10 FUN_00726f60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  float10 fVar1;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [64];
  byte local_c;
  
  local_50 = *param_1;
  local_54 = param_1[2];
  local_58 = -(float)param_1[1];
  FUN_00449320(0x3ccccccd);
  FUN_00789cc0(&local_58,local_4c,1,0,1);
  if (param_4 != (byte *)0x0) {
    *param_4 = local_c & 1;
  }
  if ((local_c & 1) != 0) {
    fVar1 = (float10)FUN_00768200(&local_58);
    return fVar1;
  }
  return (float10)(float)param_1[2];
}

