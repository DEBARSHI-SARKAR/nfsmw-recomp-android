/* speed.exe 00497430 FUN_00497430; analysis pseudocode, not buildable source.
 * calls 00496e40 FUN_00496e40
 */

void __thiscall
FUN_00497430(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)(param_3 + 0xc);
  if (param_4 < param_5) {
    param_4 = param_5 - param_4;
    do {
      iVar5 = 0;
      if (*(char *)(param_3 + 6) != '\0') {
        iVar3 = 0;
        pfVar4 = (float *)(param_6 + 8);
        do {
          bVar1 = *(byte *)(iVar5 + iVar2);
          if ((*(uint *)(param_7 + ((int)(uint)bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) != 0) {
            FUN_00496e40(*(int *)(param_1 + 0x10) + iVar3,&local_10);
            pfVar4[-2] = local_10 + pfVar4[-2];
            pfVar4[-1] = local_c + pfVar4[-1];
            *pfVar4 = local_8 + *pfVar4;
            pfVar4[1] = local_4 + pfVar4[1];
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x20;
          pfVar4 = pfVar4 + 4;
        } while (iVar5 < (int)(uint)*(byte *)(param_3 + 6));
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

