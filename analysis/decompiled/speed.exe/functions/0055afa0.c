/* speed.exe 0055afa0 FUN_0055afa0; analysis pseudocode, not buildable source.
 * calls 00731040 FUN_00731040
 * calls 00507dc0 FUN_00507dc0
 */

undefined4 * __thiscall FUN_0055afa0(undefined4 *param_1,undefined4 param_2,char param_3)

{
  param_1[3] = param_2;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  *param_1 = &PTR_FUN_0089c3f8;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_3 != '\0') {
    param_1[1] = 7;
    DAT_009aac81 = 1;
    FUN_00731040(0x180000,&LAB_0055a4b0,param_1);
    return param_1;
  }
  FUN_00507dc0("Global\\Rivals.bin",&LAB_00551040,param_1,0);
  return param_1;
}

