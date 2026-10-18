/* speed.exe 00557210 FUN_00557210; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 0054bb90 FUN_0054bb90
 * calls 007aade0 FUN_007aade0
 * calls 00516af0 FUN_00516af0
 * calls 00525220 FUN_00525220
 */

void __fastcall FUN_00557210(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0x3bc6066d);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = FUN_00573140("TRACK_MAP");
  if (iVar2 != 0) {
    iVar2 = FUN_00516af0(iVar2);
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(uVar1);
      if (iVar2 != 0) goto LAB_0055725c;
    }
  }
  iVar2 = 0;
LAB_0055725c:
  *(int *)(param_1 + 0x10c) = iVar2;
  FUN_0054bb90();
  FUN_007aade0();
  return;
}

