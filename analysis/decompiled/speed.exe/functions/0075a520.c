/* speed.exe 0075a520 FUN_0075a520; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0075a520(undefined4 *param_1,int param_2,uint param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (param_2 != 0) {
    if (param_3 < *(byte *)(param_2 + 4)) {
      param_1[6] = 0xffffff;
      param_1[5] = param_3;
      param_1[4] = param_2;
      goto LAB_0075a56e;
    }
  }
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
LAB_0075a56e:
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *DAT_009b0f94 = param_1;
  puVar1 = param_1;
  param_1[1] = DAT_009b0f94;
  DAT_009b0f94 = puVar1;
  *param_1 = &DAT_009b0f90;
  *(undefined1 *)((int)param_1 + 0x2b) = param_4;
  return;
}

