/* speed.exe 0055a280 FUN_0055a280; analysis pseudocode, not buildable source.
 * calls 00731040 FUN_00731040
 * calls 00507dc0 FUN_00507dc0
 * calls 0050dc80 FUN_0050dc80
 */

undefined4 * __fastcall FUN_0055a280(undefined4 *param_1)

{
  bool bVar1;
  
  *param_1 = &PTR_FUN_0089b144;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_0050dc80(1,0x3f800000);
  FUN_0050dc80(1,0x3f800000);
  *(undefined1 *)(param_1 + 0x33) = 1;
  param_1[0x10] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  *(undefined2 *)((int)param_1 + 0xca) = 0;
  DAT_0091ca30 = param_1;
  param_1[7] = 0x3f800000;
  if (param_1[9] != 0x3f800000) {
    *(undefined2 *)(param_1 + 0x11) = 2;
  }
  param_1[0x12] = 0x3f800000;
  if (param_1[0x14] != 0x3f800000) {
    *(undefined2 *)(param_1 + 0x1c) = 2;
  }
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  bVar1 = DAT_00925e90 == 6;
  *(bool *)((int)param_1 + 7) = bVar1;
  if (bVar1) {
    param_1[2] = 7;
    DAT_009aac81 = 1;
    FUN_00731040(0x300000,&LAB_0055a260,param_1);
    return param_1;
  }
  FUN_00507dc0("TRACKS\\L2RA\\TrackMaps.bin",&LAB_00546480,param_1,0);
  return param_1;
}

