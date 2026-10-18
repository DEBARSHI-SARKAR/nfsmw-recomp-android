/* speed.exe 0056be80 FUN_0056be80; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_0056be80(uint *param_1,int param_2,int param_3,ushort *param_4)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = 0;
  bVar2 = false;
  if (0 < param_3) {
    do {
      uVar3 = *param_4;
      param_4 = param_4 + 1;
      if (0xff7f < uVar3) {
        uVar3 = uVar3 + 0x100;
      }
      if (uVar3 < 0x80) {
        *(char *)(iVar6 + param_2) = (char)uVar3;
        iVar6 = iVar6 + 1;
      }
      else if (DAT_0091cf88 == 0) {
        uVar1 = *param_1;
        uVar5 = 0x80;
        if (0x80 < (int)uVar1) {
          puVar7 = param_1 + 0x41;
          do {
            if ((ushort)*puVar7 == uVar3) break;
            uVar5 = uVar5 + 1;
            puVar7 = (uint *)((int)puVar7 + 2);
          } while ((int)uVar5 < (int)uVar1);
        }
        if (uVar5 == uVar1) {
LAB_0056bf89:
          bVar2 = true;
        }
        else if ((int)uVar5 < 0x100) {
          *(char *)(iVar6 + param_2) = (char)uVar5;
          iVar6 = iVar6 + 1;
        }
        else {
          iVar4 = 0x80;
          puVar7 = param_1 + 0x41;
          do {
            if ((uint)(ushort)*puVar7 == (int)(uVar5 + ((int)uVar5 >> 0x1f & 0x7fU)) >> 7) {
              *(char *)(iVar6 + param_2) = (char)iVar4;
              uVar5 = uVar5 & 0x8000007f;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xffffff80) + 1;
              }
              *(char *)(iVar6 + 1 + param_2) = (char)uVar5 + -0x80;
              iVar6 = iVar6 + 2;
              break;
            }
            iVar4 = iVar4 + 1;
            puVar7 = (uint *)((int)puVar7 + 2);
          } while (iVar4 < 0x100);
          if (iVar4 == 0x100) goto LAB_0056bf89;
        }
      }
      else if (uVar3 < 0x100) {
        *(char *)(iVar6 + param_2) = (char)uVar3;
        iVar6 = iVar6 + 1;
      }
    } while ((uVar3 != 0) && (iVar6 < param_3));
  }
  return !bVar2;
}

