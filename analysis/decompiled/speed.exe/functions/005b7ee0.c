/* speed.exe 005b7ee0 FUN_005b7ee0; analysis pseudocode, not buildable source.
 * calls 005b13d0 FUN_005b13d0
 */

void __thiscall FUN_005b7ee0(int param_1,int param_2,float *param_3,char param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  do {
    if (iVar3 == 0) {
      if (param_4 != '\0') {
        iVar3 = FUN_005b13d0(param_2);
        pfVar4 = (float *)(iVar3 + *(int *)(extraout_ECX + 0x2c));
        *pfVar4 = (float)(extraout_ST1 + (float10)*(float *)(iVar3 + *(int *)(extraout_ECX + 0x2c)))
        ;
        pfVar4[1] = (float)(extraout_ST0 + (float10)pfVar4[1]);
        return;
      }
      iVar3 = FUN_005b13d0(param_2);
      pfVar4 = (float *)(iVar3 + *(int *)(extraout_ECX_00 + 0x2c));
      *pfVar4 = *param_3;
      pfVar4[1] = param_3[1];
      return;
    }
    uVar2 = 0;
    if (*(uint *)(iVar3 + 0x1c) != 0) {
      iVar5 = *(int *)(iVar3 + 0x20) + 4;
      do {
        if ((int)*(char *)(iVar5 + 3) == *(int *)(&DAT_008a2be8 + param_2 * 4)) {
          iVar5 = uVar2 * 0x38 + *(int *)(iVar3 + 0x20);
          if (iVar5 != 0) {
            if (param_4 == '\0') {
              *(float *)(iVar5 + 0x18) = *param_3;
              *(float *)(iVar5 + 0x1c) = param_3[1];
              *(byte *)(iVar5 + 3) = *(byte *)(iVar5 + 3) & 0x7f;
            }
            else {
              fVar1 = param_3[1];
              *(float *)(iVar5 + 0x18) = *param_3 + *(float *)(iVar5 + 0x18);
              *(float *)(iVar5 + 0x1c) = fVar1 + *(float *)(iVar5 + 0x1c);
              *(byte *)(iVar5 + 3) = *(byte *)(iVar5 + 3) & 0x7f;
            }
          }
          break;
        }
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 0x38;
      } while (uVar2 < *(uint *)(iVar3 + 0x1c));
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}

