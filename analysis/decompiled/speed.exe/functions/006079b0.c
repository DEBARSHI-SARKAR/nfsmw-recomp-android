/* speed.exe 006079b0 FUN_006079b0; analysis pseudocode, not buildable source.
 * calls 00607920 FUN_00607920
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_006079b0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_68;
  int local_64 [25];
  
  iVar1 = param_1;
  iVar8 = *(int *)(param_1 + 0x1c);
  local_68 = 0;
  iVar5 = 0;
  piVar7 = local_64;
  iVar6 = 0;
  do {
    iVar2 = 1 << ((byte)iVar6 & 0x1f);
    if ((iVar8 < iVar2) && (iVar2 = iVar8, iVar8 <= iVar5)) {
      if (iVar6 < 0x19) {
        piVar7 = local_64 + iVar6;
        for (iVar8 = 0x19 - iVar6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
      }
      break;
    }
    *piVar7 = 0;
    if (iVar5 < iVar2) {
      iVar2 = iVar2 - iVar5;
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + iVar5 * 8);
      iVar5 = iVar5 + iVar2;
      do {
        if (*piVar4 != 0) {
          *piVar7 = *piVar7 + 1;
          local_68 = local_68 + 1;
        }
        piVar4 = piVar4 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar6 < 0x19);
  *param_2 = local_68;
  param_1 = 1 << (*(byte *)(param_1 + 7) & 0x1f);
  if (param_1 != 0) {
    iVar8 = param_1 * 0x14;
    do {
      iVar8 = iVar8 + -0x14;
      piVar7 = (int *)(*(int *)(iVar1 + 0x10) + iVar8);
      if (*(int *)(*(int *)(iVar1 + 0x10) + 8 + iVar8) != 0) {
        if ((((*piVar7 == 3) && (iVar5 = FUN_007c4b80(), (float)piVar7[1] == (float)iVar5)) &&
            (0 < iVar5)) && (((iVar5 - 1U & 0xff000000) == 0 && (-1 < iVar5)))) {
          uVar3 = iVar5 - 1;
          if (uVar3 < 0x10000) {
            if (uVar3 < 0x100) {
              if (uVar3 == 0) {
                uVar3 = 0xffffffff;
              }
              else {
                uVar3 = (uint)(byte)(&DAT_008a3fc7)[uVar3 & 0xff];
              }
            }
            else {
              uVar3 = (byte)(&DAT_008a3fc7)[uVar3 >> 8 & 0xff] + 8;
            }
          }
          else if (uVar3 < 0x1000000) {
            uVar3 = (byte)(&DAT_008a3fc7)[uVar3 >> 0x10 & 0xff] + 0x10;
          }
          else {
            uVar3 = (byte)(&DAT_008a3fc7)[uVar3 >> 0x18] + 0x18;
          }
          local_64[uVar3 + 1] = local_64[uVar3 + 1] + 1;
          *param_2 = *param_2 + 1;
        }
        local_68 = local_68 + 1;
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_00607920(local_68,param_2,param_3);
  return;
}

