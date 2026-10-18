/* speed.exe 004b57e0 FUN_004b57e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b57e0(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(float *)(param_1 + 0x9c) = (float)param_3;
  *(undefined1 *)(param_1 + 0x94) = 1;
  fVar1 = (float)*(int *)(&DAT_008f2150 + *(int *)(param_1 + 0x98) * 0x18) * _DAT_00890d60;
  *(float *)(param_1 + 0x7c) = fVar1;
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    *(undefined4 *)(param_1 + 0x7c) = 0x3c23d70a;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  return;
}

