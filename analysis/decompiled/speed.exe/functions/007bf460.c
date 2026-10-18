/* speed.exe 007bf460 FUN_007bf460; analysis pseudocode, not buildable source.
 * calls 007aade0 FUN_007aade0
 * calls 00524850 FUN_00524850
 * calls 00573140 FUN_00573140
 * calls 007ba5c0 FUN_007ba5c0
 * calls 00516b50 FUN_00516b50
 * calls 00525220 FUN_00525220
 */

void __fastcall FUN_007bf460(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00516b50("UI_OLViewTrack.fng");
  if (cVar1 != '\0') {
    return;
  }
  switch(*(undefined4 *)(DAT_0091cf90 + 0x18)) {
  case 0:
    uVar2 = 0xc2d85652;
    break;
  case 1:
    uVar2 = 0x3de80a85;
    break;
  case 2:
    uVar2 = 0x136c5c90;
    break;
  case 3:
    uVar2 = 0xd6d65640;
    break;
  case 4:
    uVar2 = 0xe3afadc9;
    break;
  case 5:
    uVar2 = 0x3070453a;
    break;
  default:
    uVar2 = 0;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xb71b576d,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_00573140("TRACK_MAP");
  uVar2 = FUN_00524850(uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x10c) = uVar2;
  FUN_007ba5c0();
  FUN_007aade0();
  return;
}

