/* speed.exe 00497180 FUN_00497180; analysis pseudocode, not buildable source.
 * calls 00496e40 FUN_00496e40
 */

uint __thiscall
FUN_00497180(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = (param_4 + 2) * (uint)*(byte *)(param_3 + 6);
  if (param_4 < param_5) {
    uVar1 = (uint)*(byte *)(param_3 + 6);
    param_4 = param_5 - param_4;
    do {
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar2 = 0;
        pfVar4 = (float *)(param_6 + 8);
        do {
          FUN_00496e40(*(int *)(param_1 + 0x10) + iVar2,&local_10);
          iVar3 = iVar3 + 1;
          pfVar4[-2] = local_10 + pfVar4[-2];
          iVar2 = iVar2 + 0x20;
          pfVar4[-1] = local_c + pfVar4[-1];
          *pfVar4 = local_8 + *pfVar4;
          pfVar4[1] = local_4 + pfVar4[1];
          uVar1 = (uint)*(byte *)(param_3 + 6);
          pfVar4 = pfVar4 + 4;
        } while (iVar3 < (int)uVar1);
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return uVar1;
}

