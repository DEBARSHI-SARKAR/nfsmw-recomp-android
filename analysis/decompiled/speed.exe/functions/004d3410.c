/* speed.exe 004d3410 FUN_004d3410; analysis pseudocode, not buildable source.
 * calls 0083198b FUN_0083198b
 * calls 00831a8a FUN_00831a8a
 */

int __thiscall
FUN_004d3410(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (10 < param_2) {
    param_2 = 10;
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (100 < param_3) {
    param_3 = 100;
  }
  *(int *)(param_1 + 8) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (10000 < param_4) {
    param_4 = 10000;
  }
  *(int *)(param_1 + 0xc) = param_4;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x8013 < param_5) {
    param_5 = 0x8013;
  }
  *(int *)(param_1 + 0x10) = param_5;
  if (param_6 < 0) {
    param_6 = 0;
  }
  else if (0x10000 < param_6) {
    param_6 = 0x10000;
  }
  *(int *)(param_1 + 0x14) = param_6;
  if (param_7 < -0x3fff) {
    param_7 = -0x3fff;
  }
  else if (0x3fff < param_7) {
    param_7 = 0x3fff;
  }
  *(int *)(param_1 + 0x18) = param_7;
  if (param_8 < 0) {
    param_8 = 0;
  }
  else if (0x400 < param_8) {
    param_8 = 0x400;
  }
  *(int *)(param_1 + 0x1c) = param_8;
  iVar2 = FUN_00831a8a(&DAT_009147ec,piVar1,param_1);
  if (iVar2 < 0) {
    FUN_0083198b(&PTR_s_CAR_SWTN_008f0250);
    FUN_00831a8a(&DAT_009147ec,piVar1,param_1);
  }
  return param_1;
}

