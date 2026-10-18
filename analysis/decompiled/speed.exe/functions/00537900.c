/* speed.exe 00537900 FUN_00537900; analysis pseudocode, not buildable source.
 * calls 00525940 FUN_00525940
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_00537900(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1168) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x1168));
    *(undefined4 *)(param_1 + 0x1168) = 0;
  }
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  *(undefined4 *)(DAT_0091cf90 + 300) = 0;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar1 = *(uint *)(DAT_0091cf90 + 300) | 8;
  }
  else {
    uVar1 = *(uint *)(DAT_0091cf90 + 300) | 0x40;
  }
  *(uint *)(DAT_0091cf90 + 300) = uVar1;
  FUN_00525940("OL_MAIN.fng",0,0,0);
  return;
}

