/* speed.exe 005b7fe0 FUN_005b7fe0; analysis pseudocode, not buildable source.
 * calls 005b13d0 FUN_005b13d0
 */

void __thiscall FUN_005b7fe0(int param_1,int param_2,int *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x4c);
  do {
    if (iVar4 == 0) {
      if (param_4 != '\0') {
        iVar2 = FUN_005b13d0(param_2);
        iVar4 = *(int *)(extraout_ECX + 0x2c);
        iVar5 = *(int *)(iVar2 + 4 + iVar4);
        piVar3 = (int *)(iVar2 + iVar4);
        piVar3[2] = *(int *)(iVar2 + 8 + iVar4) + param_3[2];
        piVar3[1] = iVar5 + param_3[1];
        *piVar3 = *piVar3 + *param_3;
        piVar3[3] = piVar3[3] + param_3[3];
        return;
      }
      iVar4 = FUN_005b13d0(param_2);
      piVar3 = (int *)(iVar4 + *(int *)(extraout_ECX_00 + 0x2c));
      piVar3[3] = param_3[3];
      piVar3[2] = param_3[2];
      piVar3[1] = param_3[1];
      *piVar3 = *param_3;
      return;
    }
    uVar1 = 0;
    if (*(uint *)(iVar4 + 0x1c) != 0) {
      iVar5 = *(int *)(iVar4 + 0x20) + 4;
      do {
        if ((int)*(char *)(iVar5 + 3) == *(int *)(&DAT_008a2be8 + param_2 * 4)) {
          iVar5 = uVar1 * 0x38 + *(int *)(iVar4 + 0x20);
          if (iVar5 != 0) {
            if (param_4 == '\0') {
              *(int *)(iVar5 + 0x24) = param_3[3];
              *(int *)(iVar5 + 0x20) = param_3[2];
              *(int *)(iVar5 + 0x1c) = param_3[1];
              *(int *)(iVar5 + 0x18) = *param_3;
            }
            else {
              *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + param_3[2];
              *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + param_3[1];
              *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + *param_3;
              *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + param_3[3];
            }
            *(byte *)(iVar5 + 3) = *(byte *)(iVar5 + 3) & 0x7f;
          }
          break;
        }
        uVar1 = uVar1 + 1;
        iVar5 = iVar5 + 0x38;
      } while (uVar1 < *(uint *)(iVar4 + 0x1c));
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

