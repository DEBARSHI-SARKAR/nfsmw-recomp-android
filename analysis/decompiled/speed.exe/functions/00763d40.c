/* speed.exe 00763d40 FUN_00763d40; analysis pseudocode, not buildable source.
 * calls 005c67f0 FUN_005c67f0
 * calls 005c6420 FUN_005c6420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00763d40(void)

{
  float *in_EAX;
  float *unaff_ESI;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = in_EAX[4] - *in_EAX;
  local_8 = in_EAX[5] - in_EAX[1];
  local_4 = in_EAX[6] - in_EAX[2];
  local_18 = *in_EAX - in_EAX[8];
  local_14 = in_EAX[1] - in_EAX[9];
  local_10 = in_EAX[2] - in_EAX[10];
  FUN_005c6420(&local_c,&local_18,&local_24);
  if (((local_24 == _DAT_00890968) && (local_20 == _DAT_00890968)) && (local_1c == _DAT_00890968)) {
    *unaff_ESI = 0.0;
    unaff_ESI[1] = 1.0;
    unaff_ESI[2] = 0.0;
  }
  else {
    FUN_005c67f0(&local_24);
  }
  if (unaff_ESI[1] < _DAT_00890968) {
    *unaff_ESI = -*unaff_ESI;
    unaff_ESI[1] = -unaff_ESI[1];
    unaff_ESI[2] = -unaff_ESI[2];
  }
  if (_DAT_0089097c <= unaff_ESI[1]) {
    unaff_ESI[1] = 0.9999;
  }
  return;
}

