/* speed.exe 00625fc0 FUN_00625fc0; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 00614f10 FUN_00614f10
 * calls 006189d0 FUN_006189d0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 005e29e0 FUN_005e29e0
 * calls 0060e370 FUN_0060e370
 * calls 00605eb0 FUN_00605eb0
 */

void FUN_00625fc0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"Sender");
  iVar1 = FUN_005e29e0();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00614f10(param_1,4);
    *piVar2 = iVar1;
    FUN_006189d0(param_1,"GRuntimeInstance");
    FUN_0060e370(param_1,0xfffffffd);
    return;
  }
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

