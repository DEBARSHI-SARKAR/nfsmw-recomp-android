/* speed.exe 00622720 FUN_00622720; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 00605eb0 FUN_00605eb0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00614e00 FUN_00614e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00622720(undefined4 param_1,int param_2)

{
  float fVar1;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"Position");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"Vector");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"Velocity");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"hSimable");
  fVar1 = (float)*(int *)(param_2 + 0x40);
  if (*(int *)(param_2 + 0x40) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  FUN_00605ed0(param_1,fVar1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"AttribKey");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

