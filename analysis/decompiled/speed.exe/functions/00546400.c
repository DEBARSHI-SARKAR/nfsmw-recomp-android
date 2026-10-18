/* speed.exe 00546400 FUN_00546400; analysis pseudocode, not buildable source.
 * calls 00508b10 FUN_00508b10
 * calls 00510ac0 FUN_00510ac0
 * calls 00514c70 FUN_00514c70
 * calls 00503380 FUN_00503380
 * calls 00503360 FUN_00503360
 */

void __thiscall
FUN_00546400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  FUN_00514c70(param_3);
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 6) == '\0')) {
    param_5 = *(undefined4 *)(param_1 + 0x14);
    FUN_00503360(&param_5,1);
    FUN_00503380("TRACKS\\L2RA\\TrackMaps.bin");
    param_5 = FUN_00510ac0();
    *(undefined4 *)(param_1 + 0x14) = param_5;
    FUN_00508b10(&param_5,1,&LAB_0052c2a0,param_5,*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}

