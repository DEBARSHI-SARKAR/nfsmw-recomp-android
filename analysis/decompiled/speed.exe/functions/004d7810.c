/* speed.exe 004d7810 FUN_004d7810; analysis pseudocode, not buildable source.
 * calls 0083198b FUN_0083198b
 * calls 00831a8a FUN_00831a8a
 */

int __thiscall
FUN_004d7810(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int param_12,int param_13)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = param_2;
  if (param_3 < -0x2000) {
    param_3 = -0x2000;
  }
  else if (0x2000 < param_3) {
    param_3 = 0x2000;
  }
  *(int *)(param_1 + 8) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (1 < param_4) {
    param_4 = 1;
  }
  *(int *)(param_1 + 0xc) = param_4;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x7fff < param_5) {
    param_5 = 0x7fff;
  }
  *(int *)(param_1 + 0x10) = param_5;
  if (param_6 < 0) {
    param_6 = 0;
  }
  else if (0xffff < param_6) {
    param_6 = 0xffff;
  }
  *(int *)(param_1 + 0x14) = param_6;
  if (param_7 < 0) {
    param_7 = 0;
  }
  else if (0x400 < param_7) {
    param_7 = 0x400;
  }
  *(int *)(param_1 + 0x18) = param_7;
  if (param_8 < -100) {
    param_8 = -100;
  }
  else if (100 < param_8) {
    param_8 = 100;
  }
  *(int *)(param_1 + 0x1c) = param_8;
  if (param_9 < 0) {
    param_9 = 0;
  }
  else if (25000 < param_9) {
    param_9 = 25000;
  }
  *(int *)(param_1 + 0x20) = param_9;
  if (param_10 < 0) {
    param_10 = 0;
  }
  else if (25000 < param_10) {
    param_10 = 25000;
  }
  *(int *)(param_1 + 0x24) = param_10;
  if (param_11 < 0) {
    param_11 = 0;
  }
  else if (0x7fff < param_11) {
    param_11 = 0x7fff;
  }
  *(int *)(param_1 + 0x28) = param_11;
  if (param_12 < 0) {
    param_12 = 0;
  }
  else if (0x7fff < param_12) {
    param_12 = 0x7fff;
  }
  *(int *)(param_1 + 0x2c) = param_12;
  if (param_13 < 0) {
    param_13 = 0;
  }
  else if (0x3ff < param_13) {
    param_13 = 0x3ff;
  }
  *(int *)(param_1 + 0x30) = param_13;
  iVar2 = FUN_00831a8a(&DAT_009148cc,piVar1,param_1);
  if (iVar2 < 0) {
    FUN_0083198b(&PTR_s_FX_Helicopter_008f0308);
    FUN_00831a8a(&DAT_009148cc,piVar1,param_1);
  }
  return param_1;
}

