/* speed.exe 00447390 FUN_00447390; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447390(int param_1,float param_2,float param_3,float param_4)

{
  if ((-1 < param_1) && (param_1 < 4)) {
    *(undefined4 *)(&DAT_0090da28 + param_1 * 4) = 0;
    if (_DAT_00890968 < param_3) {
      *(float *)(&DAT_0090da38 + param_1 * 4) = param_3;
      (&DAT_0090da48)[param_1] = param_2;
      *(float *)(&DAT_0090da58 + param_1 * 4) = param_4 - param_2;
      (&DAT_009ae8a0)[param_1] = param_2;
      return;
    }
    *(undefined4 *)(&DAT_0090da38 + param_1 * 4) = 0;
    (&DAT_009ae8a0)[param_1] = param_2;
  }
  return;
}

