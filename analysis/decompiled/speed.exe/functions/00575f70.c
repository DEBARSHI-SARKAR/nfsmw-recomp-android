/* speed.exe 00575f70 FUN_00575f70; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 */

void __thiscall FUN_00575f70(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x5cdded4,0x40230063);
  }
  else {
    if (param_2 == 1) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x5cdded4,0x40230064);
      return;
    }
    if (param_2 == 2) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x5cdded4,0x40230065);
      return;
    }
  }
  return;
}

