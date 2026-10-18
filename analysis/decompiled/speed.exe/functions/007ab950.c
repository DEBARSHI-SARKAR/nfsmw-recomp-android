/* speed.exe 007ab950 FUN_007ab950; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ab950(int *param_1,undefined4 param_2,int param_3)

{
  if ((param_3 == -0x6edfbf62) || (param_3 == -0x4a68e40f)) {
    *(bool *)(DAT_0091cf90 + 0x173) = *(char *)(DAT_0091cf90 + 0x173) == '\0';
  }
  if (*(char *)(DAT_0091cf90 + 0x173) != '\0') {
    *(undefined1 *)(DAT_0091cf90 + 0x144) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

