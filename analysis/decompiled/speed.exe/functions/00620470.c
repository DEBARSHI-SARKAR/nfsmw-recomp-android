/* speed.exe 00620470 FUN_00620470; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 00605eb0 FUN_00605eb0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 006189d0 FUN_006189d0
 * calls 00614e00 FUN_00614e00
 * calls 00614f10 FUN_00614f10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00620470(undefined4 param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"hSimable");
  fVar1 = (float)*(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  FUN_00605ed0(param_1,fVar1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"CarID");
  fVar1 = (float)*(int *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x14) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  FUN_00605ed0(param_1,fVar1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"CarState");
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_00605eb0(param_1);
  }
  else {
    puVar2 = (undefined4 *)FUN_00614f10(param_1,4);
    *puVar2 = *(undefined4 *)(param_2 + 0x18);
    FUN_006189d0(param_1,"EAX_CarState");
  }
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"PatterToPlay");
  fVar1 = (float)*(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x1c) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  FUN_00605ed0(param_1,fVar1);
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

