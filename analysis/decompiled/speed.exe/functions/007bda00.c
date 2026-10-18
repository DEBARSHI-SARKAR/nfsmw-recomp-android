/* speed.exe 007bda00 FUN_007bda00; analysis pseudocode, not buildable source.
 * calls 007b7a50 FUN_007b7a50
 * calls 007b21b0 FUN_007b21b0
 * calls 007b2460 FUN_007b2460
 * calls 007b7ac0 FUN_007b7ac0
 */

void __fastcall FUN_007bda00(int *param_1)

{
  int iVar1;
  
  param_1[0x57] = -0x4e4f1751;
  FUN_007b7a50(0x86,0x70f56628,0xe18ddce1);
  FUN_007b7a50(0x87,0xbf6682c9,0xe18ddce0);
  FUN_007b7a50(0x85,0xcc9e1ce4,0xe18ddcdf);
  iVar1 = DAT_009b9e84;
  if (DAT_009b9e84 == 0) {
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(1);
  }
  else {
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(iVar1);
    DAT_009b9e84 = 0;
  }
  FUN_007b7ac0();
  FUN_007b2460();
  FUN_007b21b0();
                    /* WARNING: Could not recover jumptable at 0x007bdad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

