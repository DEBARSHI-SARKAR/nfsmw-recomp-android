/* speed.exe 004adfc0 FUN_004adfc0; analysis pseudocode, not buildable source.
 * calls 00831a8a FUN_00831a8a
 * calls 0083198b FUN_0083198b
 */

int __thiscall
FUN_004adfc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x10 < param_2) {
    param_2 = 0x10;
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0x3ff < param_3) {
    param_3 = 0x3ff;
  }
  *(int *)(param_1 + 8) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (0x7fff < param_4) {
    param_4 = 0x7fff;
  }
  *(int *)(param_1 + 0xc) = param_4;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x2000 < param_5) {
    param_5 = 0x2000;
  }
  *(int *)(param_1 + 0x10) = param_5;
  if (param_6 < 0) {
    param_6 = 0;
  }
  else if (0x10000 < param_6) {
    param_6 = 0x10000;
  }
  *(int *)(param_1 + 0x14) = param_6;
  if (param_7 < 0) {
    param_7 = 0;
  }
  else if (4000 < param_7) {
    param_7 = 4000;
  }
  *(int *)(param_1 + 0x18) = param_7;
  if (param_8 < 0) {
    param_8 = 0;
  }
  else if (0x7fff < param_8) {
    param_8 = 0x7fff;
  }
  *(int *)(param_1 + 0x1c) = param_8;
  if (param_9 < 0) {
    param_9 = 0;
  }
  else if (0x7fff < param_9) {
    param_9 = 0x7fff;
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
  else if (25000 < param_11) {
    param_11 = 25000;
  }
  *(int *)(param_1 + 0x28) = param_11;
  iVar2 = FUN_00831a8a(&DAT_009148b4,piVar1,param_1);
  if (iVar2 < 0) {
    FUN_0083198b(&PTR_s_AEMS_StichStatic_008f0350);
    FUN_00831a8a(&DAT_009148b4,piVar1,param_1);
  }
  return param_1;
}

