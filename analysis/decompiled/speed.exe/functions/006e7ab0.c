/* speed.exe 006e7ab0 FUN_006e7ab0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_006e7ab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x25) = 1;
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  param_1[0x2a] = param_4[2];
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[8] = param_2[4];
  param_1[9] = param_2[5];
  param_1[10] = param_2[6];
  param_1[0xc] = param_2[8];
  param_1[0xd] = param_2[9];
  uVar1 = param_2[10];
  param_1[0x10] = (float)param_1[4] * (float)param_1[0x28];
  param_1[0xe] = uVar1;
  param_1[0x23] = 0;
  param_1[0x1f] = 0;
  param_1[0x11] = (float)param_1[5] * (float)param_1[0x28];
  param_1[0x24] = 0xc7c35000;
  param_1[0x12] = (float)param_1[0x28] * (float)param_1[6];
  param_1[0x14] = (float)param_1[0x29] * (float)param_1[8];
  param_1[0x15] = (float)param_1[9] * (float)param_1[0x29];
  param_1[0x16] = (float)param_1[10] * (float)param_1[0x29];
  param_1[0x18] = (float)param_1[0x2a] * (float)param_1[0xc];
  param_1[0x19] = (float)param_1[0x2a] * (float)param_1[0xd];
  param_1[0x1a] = (float)param_1[0x2a] * (float)param_1[0xe];
  return;
}

