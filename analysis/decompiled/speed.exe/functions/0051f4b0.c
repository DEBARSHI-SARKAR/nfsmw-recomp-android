/* speed.exe 0051f4b0 FUN_0051f4b0; analysis pseudocode, not buildable source.
 * calls 00730390 FUN_00730390
 * calls 00507e40 FUN_00507e40
 * calls 00503360 FUN_00503360
 * calls 00731160 FUN_00731160
 * calls 00503380 FUN_00503380
 */

void __fastcall FUN_0051f4b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0089c3f8;
  if (*(char *)(param_1 + 2) != '\0') {
    if (*(char *)((int)param_1 + 9) == '\0') {
      FUN_00730390();
    }
    DAT_009aac81 = 0;
    FUN_00731160();
  }
  FUN_00503380("Global\\Rivals.bin");
  FUN_00503360(param_1 + 8,param_1[7]);
  param_1[7] = 0;
  param_1[5] = 0xffffffff;
  FUN_00507e40("Global\\Rivals.bin");
  return;
}

