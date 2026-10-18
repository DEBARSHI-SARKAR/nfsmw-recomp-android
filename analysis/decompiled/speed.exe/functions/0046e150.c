/* speed.exe 0046e150 FUN_0046e150; analysis pseudocode, not buildable source.
 * calls 00789870 FUN_00789870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046e150(undefined4 *param_1)

{
  char cVar1;
  float local_2c [4];
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_2c[0] = 0.0;
  if (DAT_00925e90 == 6) {
    local_18 = *param_1;
    local_2c[3] = -(float)param_1[1];
    local_1c = (float)param_1[2] + _DAT_0089472c;
    local_14 = 0;
    local_2c[1] = 0.0;
    local_2c[2] = 4.2039e-45;
    cVar1 = FUN_00789870(local_2c + 3,local_2c,0);
    if (cVar1 == '\0') {
      return (float10)(float)param_1[2];
    }
  }
  return (float10)local_2c[0];
}

