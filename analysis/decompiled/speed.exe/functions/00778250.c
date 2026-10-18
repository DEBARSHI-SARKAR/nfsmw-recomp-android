/* speed.exe 00778250 FUN_00778250; analysis pseudocode, not buildable source.
 * calls 00765c30 FUN_00765c30
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 007753e0 FUN_007753e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00778250(int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_00890968 < param_3) {
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2cc);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2cc);
    *(float *)(param_1 + 0x2cc) = param_2;
    *(float *)(param_1 + 0x2d0) = param_3;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    return;
  }
  if (*(float *)(param_1 + 0x2c4) != param_2) {
    iVar1 = *(short *)(param_1 + 0x8e) * 0x16;
    *(float *)(param_1 + 0x2c4) = param_2;
    *(float *)(param_1 + 0x2cc) = param_2;
    *(float *)(param_1 + 0x2c8) = param_2;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    iVar2 = iVar1 + DAT_009b38c0;
    if (((*(byte *)(iVar1 + 10 + DAT_009b38c0) & 1) == 0) || (*(int *)(param_1 + 0x80) == 6)) {
      FUN_0076f4a0(iVar2,param_2,0);
      FUN_0076f4a0(iVar2,param_2,1);
      FUN_0076f140(iVar2,1);
      FUN_0076f140(iVar2,0);
    }
    else {
      FUN_0076f4a0(iVar2,param_2,0);
      FUN_0076f140(iVar2,0);
    }
    FUN_00765c30(iVar2);
    FUN_007753e0(iVar2);
  }
  return;
}

