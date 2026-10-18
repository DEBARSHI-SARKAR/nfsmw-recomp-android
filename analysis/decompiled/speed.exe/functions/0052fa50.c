/* speed.exe 0052fa50 FUN_0052fa50; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00525220 FUN_00525220
 * calls 0056bc10 FUN_0056bc10
 * calls 00515e20 FUN_00515e20
 * calls 005252d0 FUN_005252d0
 */

void __fastcall FUN_0052fa50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_20 [32];
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = FUN_0056bc10(0x3a64de21,DAT_0091ca3c);
  }
  else {
    uVar1 = FUN_0056bc10(0x96ca2471,DAT_0091ca3c);
  }
  FUN_00515e20(local_20,0x20,uVar1);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x242657ce,&DAT_008941f8,local_20);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("BLACKLIST_RIVAL_%02d_NAME",DAT_0091ca3c);
  FUN_00525220(uVar1,0x7ac3d0c9,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("BLACKLIST_RIVAL_%02d_AKA",DAT_0091ca3c);
  FUN_00525220(uVar1,0xb1f2748d,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("BLACKLIST_RIVAL_%02d_BIO",DAT_0091ca3c);
  FUN_00525220(uVar1,0x27e1d6d8,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("BLACKLIST_RIVAL_%02d_CAR",DAT_0091ca3c);
  FUN_00525220(uVar1,0xcb5bf41a,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("BLACKLIST_RIVAL_%02d_STRENGTH",DAT_0091ca3c);
  FUN_00525220(uVar1,0xa6f07bf3,uVar2);
  return;
}

