/* speed.exe 0044d510 FUN_0044d510; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 * calls 0044d2b0 FUN_0044d2b0
 */

void __fastcall FUN_0044d510(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) && (*(char *)(param_1 + 5) == '\0')) &&
     (*(char *)((int)param_1 + 0x15) == '\0')) {
    FUN_0044d2b0(param_1 + 6);
    *(undefined1 *)(param_1 + 5) = 1;
    uVar1 = FUN_004662e0(0x24,0xd5,"WorldAnimEntity_SlotPool",0);
    *param_1 = uVar1;
    uVar1 = FUN_004662e0(0x2c,0x42,"WorldAnimEntityTree_SlotPool",0);
    param_1[1] = uVar1;
    uVar1 = FUN_004662e0(0x58,0x27,"WorldAnimEntityTreeInfo_SlotPool",0);
    param_1[2] = uVar1;
    uVar1 = FUN_004662e0(0x74,0x95,"WorldAnimCtrl_SlotPool",0);
    param_1[3] = uVar1;
    uVar1 = FUN_004662e0(0x10,0x42,"WorldAnimInstanceEntry_SlotPool",0);
    param_1[4] = uVar1;
  }
  return;
}

