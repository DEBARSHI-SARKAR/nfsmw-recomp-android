/* speed.exe 00497240 FUN_00497240; analysis pseudocode, not buildable source.
 * calls 00496e40 FUN_00496e40
 */

void __thiscall
FUN_00497240(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_5 <= param_4 + -1) {
    param_4 = ((param_4 + -1) - param_5) + 1;
    do {
      uVar1 = (uint)*(byte *)(param_3 + 6);
      iVar2 = uVar1 - 1;
      if (-1 < iVar2) {
        iVar4 = iVar2 * 0x20;
        pfVar3 = (float *)(iVar2 * 0x10 + 8 + param_6);
        do {
          FUN_00496e40(*(int *)(param_1 + 0x10) + iVar4,&local_10);
          iVar4 = iVar4 + -0x20;
          uVar1 = uVar1 - 1;
          pfVar3[-2] = pfVar3[-2] - local_10;
          pfVar3[-1] = pfVar3[-1] - local_c;
          *pfVar3 = *pfVar3 - local_8;
          pfVar3[1] = pfVar3[1] - local_4;
          pfVar3 = pfVar3 + -4;
        } while (uVar1 != 0);
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

