/* speed.exe 005d0bf0 FUN_005d0bf0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_005d0bf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  if ((uint)param_1[0x1b] < 2) {
    param_1[0x18] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[4] = *param_3;
    param_1[5] = param_3[1];
    param_1[6] = param_3[2];
    param_1[8] = *param_5;
    param_1[9] = param_5[1];
    param_1[10] = param_5[2];
    param_1[0xc] = *param_4;
    param_1[0xd] = param_4[1];
    param_1[0xe] = param_4[2];
    param_1[3] = 0;
    param_1[7] = 0;
    param_1[0xb] = 0;
    param_1[0xf] = 0;
  }
  return;
}

