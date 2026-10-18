/* speed.exe 005c6780 FUN_005c6780; analysis pseudocode, not buildable source.
 * calls 005c66d0 FUN_005c66d0
 * calls 005c6620 FUN_005c6620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6780(float param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  float10 fVar1;
  float10 fVar2;
  undefined1 local_24 [36];
  
  fVar2 = (float10)_DAT_008a2f94;
  param_4[1] = 0;
  fVar1 = (float10)fsin((float10)param_1 * fVar2);
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[6] = 0;
  *param_4 = 0x3f800000;
  fVar2 = (float10)fcos((float10)param_1 * fVar2);
  param_4[5] = (float)fVar1;
  param_4[4] = (float)fVar2;
  param_4[7] = -(float)fVar1;
  param_4[8] = (float)fVar2;
  FUN_005c6620(param_4,param_2,local_24);
  FUN_005c66d0(local_24,param_3,param_4);
  return;
}

