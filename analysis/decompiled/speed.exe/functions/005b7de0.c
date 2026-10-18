/* speed.exe 005b7de0 FUN_005b7de0; analysis pseudocode, not buildable source.
 * calls 005b13d0 FUN_005b13d0
 */

void __thiscall FUN_005b7de0(int param_1,int param_2,float *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  do {
    if (iVar2 == 0) {
      if (param_4 != '\0') {
        iVar2 = FUN_005b13d0(param_2);
        pfVar3 = (float *)(iVar2 + *(int *)(extraout_ECX + 0x2c));
        *pfVar3 = *(float *)(iVar2 + *(int *)(extraout_ECX + 0x2c)) + *param_3;
        pfVar3[1] = param_3[1] + pfVar3[1];
        pfVar3[2] = param_3[2] + pfVar3[2];
        return;
      }
      iVar2 = FUN_005b13d0(param_2);
      pfVar3 = (float *)(iVar2 + *(int *)(extraout_ECX_00 + 0x2c));
      *pfVar3 = *param_3;
      pfVar3[1] = param_3[1];
      pfVar3[2] = param_3[2];
      return;
    }
    uVar1 = 0;
    if (*(uint *)(iVar2 + 0x1c) != 0) {
      iVar4 = *(int *)(iVar2 + 0x20) + 4;
      do {
        if ((int)*(char *)(iVar4 + 3) == *(int *)(&DAT_008a2be8 + param_2 * 4)) {
          iVar4 = uVar1 * 0x38 + *(int *)(iVar2 + 0x20);
          if (iVar4 != 0) {
            if (param_4 == '\0') {
              *(float *)(iVar4 + 0x18) = *param_3;
              *(float *)(iVar4 + 0x1c) = param_3[1];
              *(float *)(iVar4 + 0x20) = param_3[2];
            }
            else {
              *(float *)(iVar4 + 0x18) = *param_3 + *(float *)(iVar4 + 0x18);
              *(float *)(iVar4 + 0x1c) = param_3[1] + *(float *)(iVar4 + 0x1c);
              *(float *)(iVar4 + 0x20) = param_3[2] + *(float *)(iVar4 + 0x20);
            }
            *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0x7f;
          }
          break;
        }
        uVar1 = uVar1 + 1;
        iVar4 = iVar4 + 0x38;
      } while (uVar1 < *(uint *)(iVar2 + 0x1c));
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

