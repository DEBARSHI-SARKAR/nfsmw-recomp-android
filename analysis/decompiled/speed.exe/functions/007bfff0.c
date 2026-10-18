/* speed.exe 007bfff0 FUN_007bfff0; analysis pseudocode, not buildable source.
 * calls 007a66d0 FUN_007a66d0
 * calls 007bcdb0 FUN_007bcdb0
 * calls 00575b30 FUN_00575b30
 * calls 007a65c0 FUN_007a65c0
 * calls 00575b50 FUN_00575b50
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bfff0(int *param_1)

{
  undefined4 uVar1;
  
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    param_1[0x53] = (int)"MyCarsManager.fng";
  }
  else {
    param_1[0x53] = (int)PTR_s_OL_MAIN_fng_008f3220;
  }
  uVar1 = FUN_00575b00();
  FUN_007a66d0(uVar1);
  FUN_007a65c0();
  FUN_00575b30(0);
  FUN_00575b50(0);
  param_1[0x54] = 0;
  FUN_007bcdb0();
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(param_1[0x55] & 0xffff00ff);
                    /* WARNING: Could not recover jumptable at 0x007c0098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

