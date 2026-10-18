/* speed.exe 007a2f20 FUN_007a2f20; analysis pseudocode, not buildable source.
 * calls 00573870 FUN_00573870
 * calls 00525220 FUN_00525220
 */

void __fastcall FUN_007a2f20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00573870();
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  uVar2 = 0x1f203817;
  if (((uVar1 >> 3 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) {
    if (((uVar1 & 4) != 0) && (*DAT_0091cf90 == '\x02')) {
      uVar2 = 0x43c825ed;
    }
  }
  else {
    uVar2 = 0x6703b807;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xb71b576d,uVar2);
  return;
}

