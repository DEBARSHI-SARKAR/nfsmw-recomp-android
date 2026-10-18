/* speed.exe 006f1170 FUN_006f1170; analysis pseudocode, not buildable source.
 * calls 00723920 FUN_00723920
 * calls 007317a0 FUN_007317a0
 * calls 007310b0 FUN_007310b0
 * calls 006f0f80 FUN_006f0f80
 * calls 00723820 FUN_00723820
 * calls 00730370 FUN_00730370
 */

void FUN_006f1170(float *param_1,char param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  
  if (DAT_009885e0 != 0) {
    local_20 = param_1[2];
    local_18 = param_1[1];
    local_1c = -*param_1;
    FUN_00723920();
    FUN_00723820(0,&local_20);
    if (param_2 != '\0') {
      FUN_006f0f80(1);
      FUN_00730370();
      FUN_007317a0();
      FUN_00723820(0,&local_20);
      FUN_007310b0();
      return;
    }
    FUN_007310b0();
    FUN_00730370();
  }
  return;
}

