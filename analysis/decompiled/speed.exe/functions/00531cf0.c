/* speed.exe 00531cf0 FUN_00531cf0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00525220 FUN_00525220
 */

void __fastcall FUN_00531cf0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("SMS_MESSAGE_%d_FROM",**(undefined1 **)(param_1 + 0xdc));
  FUN_00525220(uVar1,0xfeced617,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("SMS_MESSAGE_%d_SUBJECT",**(undefined1 **)(param_1 + 0xdc));
  FUN_00525220(uVar1,0x2c167533,uVar2);
  return;
}

