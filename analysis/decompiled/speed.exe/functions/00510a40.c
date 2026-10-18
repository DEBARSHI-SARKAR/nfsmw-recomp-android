/* speed.exe 00510a40 FUN_00510a40; analysis pseudocode, not buildable source.
 * calls 00731160 FUN_00731160
 * calls 00503360 FUN_00503360
 * calls 00503380 FUN_00503380
 * calls 005033c0 FUN_005033c0
 * calls 00507e40 FUN_00507e40
 * calls 00730390 FUN_00730390
 */

void __fastcall FUN_00510a40(undefined4 *param_1)

{
  undefined4 *local_4;
  
  *param_1 = &PTR_FUN_0089b144;
  local_4 = param_1;
  if (*(char *)((int)param_1 + 7) != '\0') {
    if (*(char *)((int)param_1 + 5) == '\0') {
      FUN_00730390();
    }
    DAT_009aac81 = 0;
    FUN_00731160();
  }
  FUN_00503380("TRACKS\\L2RA\\TrackMaps.bin");
  local_4 = (undefined4 *)param_1[5];
  FUN_00503360(&local_4,1);
  FUN_005033c0("TRACKS\\L2RA\\TrackMaps.bin");
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_00507e40("TRACKS\\L2RA\\TrackMaps.bin");
  }
  DAT_0091ca30 = 0;
  return;
}

