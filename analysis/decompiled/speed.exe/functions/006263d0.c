/* speed.exe 006263d0 FUN_006263d0; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 00614f10 FUN_00614f10
 * calls 006189d0 FUN_006189d0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00605eb0 FUN_00605eb0
 */

void FUN_006263d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"Event");
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar1 = (undefined4 *)FUN_00614f10(param_1,4);
    *puVar1 = *(undefined4 *)(param_2 + 0x10);
    FUN_006189d0(param_1,"Speech::ScheduledSpeechEvent");
    FUN_0060e370(param_1,0xfffffffd);
    return;
  }
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

