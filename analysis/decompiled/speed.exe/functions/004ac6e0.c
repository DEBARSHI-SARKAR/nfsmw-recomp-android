/* speed.exe 004ac6e0 FUN_004ac6e0; analysis pseudocode, not buildable source.
 * calls 00831a8a FUN_00831a8a
 * calls 0083198b FUN_0083198b
 */

int __thiscall FUN_004ac6e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (2000 < param_2) {
    param_2 = 2000;
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0x7fff < param_3) {
    param_3 = 0x7fff;
  }
  *(int *)(param_1 + 8) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (0x1fff < param_4) {
    param_4 = 0x1fff;
  }
  *(int *)(param_1 + 0xc) = param_4;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0xffff < param_5) {
    param_5 = 0xffff;
  }
  *(int *)(param_1 + 0x10) = param_5;
  iVar2 = FUN_00831a8a(&DAT_0091493c,piVar1,param_1);
  if (iVar2 < 0) {
    FUN_0083198b(&PTR_s_PlayFrontEndSample_008f02c0);
    FUN_00831a8a(&DAT_0091493c,piVar1,param_1);
  }
  return param_1;
}

