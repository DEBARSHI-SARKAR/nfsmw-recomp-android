/* speed.exe 0072db80 FUN_0072db80; analysis pseudocode, not buildable source.
 * calls 0045f6d0 FUN_0045f6d0
 * calls 0072ca00 FUN_0072ca00
 * calls 00727480 FUN_00727480
 * calls 0045f610 FUN_0045f610
 * calls 00722980 FUN_00722980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0072db80(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = 0;
  bVar3 = false;
  fVar2 = SQRT((float)param_2[3] * (float)param_2[3] + (float)param_2[4] * (float)param_2[4]);
  iVar4 = FUN_00727480(param_2,6,0);
  if (iVar4 != 0) {
    do {
      fVar10 = *(float *)(iVar4 + 0x14);
      if (((fVar10 <= _DAT_00890968) || (fVar10 <= (float)param_2[2])) &&
         ((_DAT_00890968 <= fVar10 || ((float)param_2[2] <= ABS(fVar10))))) {
        if (fVar2 <= _DAT_008b2b10) {
          if (fVar2 * _DAT_008b27a8 <= _DAT_00890fc8) {
            fVar10 = 1.5;
          }
          else {
            fVar10 = _DAT_00890fc8 / fVar2;
          }
          FUN_0045f610(&local_8,param_2,param_2 + 3,fVar10);
        }
        else {
          local_8 = *param_2;
          local_4 = param_2[1];
        }
        iVar5 = FUN_0072ca00(&local_8);
        if (iVar5 != 0) {
          iVar9 = 0;
          piVar7 = (int *)(iVar4 + 0x30);
          do {
            if (*piVar7 == 0) break;
            if ((int)*(short *)(iVar5 + 0xc) == *piVar7) {
              uVar1 = *(undefined2 *)(iVar5 + 0xc);
              bVar3 = true;
              break;
            }
            iVar9 = iVar9 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar9 < 4);
        }
      }
      iVar4 = FUN_00727480(param_2,6,iVar4);
    } while (iVar4 != 0);
    if (bVar3) {
      iVar4 = FUN_0045f6d0(&local_8,param_2,0x3a83126f);
      bVar3 = true;
      if ((iVar4 == 0) && (iVar4 = *(int *)(param_1 + 0x14), 0 < iVar4)) {
        iVar9 = *(int *)(param_1 + 0x18);
        iVar5 = iVar9 + 8;
        iVar8 = iVar4;
        do {
          iVar4 = FUN_00722980(iVar9,iVar5,param_2,&local_8);
          if ((char)iVar4 != '\0') {
            bVar3 = false;
            uVar1 = 0;
          }
          iVar9 = iVar9 + 0x10;
          iVar5 = iVar5 + 0x10;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar6 = (undefined2)((uint)iVar4 >> 0x10);
      if (bVar3) goto LAB_0072dd5f;
    }
  }
  iVar4 = FUN_0072ca00(param_2);
  uVar6 = 0;
  if (iVar4 != 0) {
    return (int)*(short *)(iVar4 + 0xc);
  }
LAB_0072dd5f:
  return CONCAT22(uVar6,uVar1);
}

