/* speed.exe 00625610 FUN_00625610; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00614e00 FUN_00614e00
 */

void FUN_00625610(undefined4 param_1,int param_2)

{
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,&DAT_008a7620);
  FUN_00605ed0(param_1,(float)*(int *)(param_2 + 0x10));
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

