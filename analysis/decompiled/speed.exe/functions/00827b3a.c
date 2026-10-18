/* speed.exe 00827b3a FUN_00827b3a; analysis pseudocode, not buildable source.
 * calls 00827acf FUN_00827acf
 * calls 00827b07 FUN_00827b07
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00827b3a(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar4 = 0;
  if (param_2 == 0) {
    do {
      uVar6 = *(uint *)(param_1 + 4) & 3;
      uVar2 = _DAT_00890e94;
      if ((uVar6 == 1) || (uVar2 = _DAT_00890d3c, uVar6 == 3)) {
        uVar7 = 2;
      }
      else {
        uVar2 = 0;
        uVar7 = 1;
      }
      *(undefined4 *)(param_3 + iVar4 * 4) = uVar2;
      FUN_00827b07(param_1,uVar7);
      iVar4 = iVar4 + param_4;
    } while (iVar4 < 0x6c);
  }
  else {
    param_2 = 0;
    iVar4 = 0;
    do {
      uVar6 = (uint)(byte)(&DAT_0090ca58)[param_2 * 0x100 + (*(uint *)(param_1 + 4) & 0xff)];
      iVar5 = uVar6 * 0xc;
      param_2 = *(int *)(&DAT_0090cc58 + iVar5);
      FUN_00827b07(param_1,*(undefined4 *)(&DAT_0090cc5c + iVar5));
      if (uVar6 < 4) {
        if (uVar6 < 2) {
          iVar5 = 7;
          iVar3 = FUN_00827acf();
          while (iVar3 == 1) {
            iVar5 = iVar5 + 1;
            iVar3 = FUN_00827acf();
          }
          iVar3 = FUN_00827acf();
          if (iVar3 == 1) {
            fVar1 = (float)iVar5;
          }
          else {
            fVar1 = (float)-iVar5;
          }
          goto LAB_00827c0c;
        }
        iVar5 = FUN_00827acf();
        iVar5 = iVar5 + 7;
        if (0x6c < iVar5 * param_4 + iVar4) {
          iVar5 = (0x6c - iVar4) / param_4;
        }
        if (0 < iVar5) {
          do {
            *(undefined4 *)(param_3 + iVar4 * 4) = 0;
            iVar4 = iVar4 + param_4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      else {
        fVar1 = *(float *)(&DAT_0090cc60 + iVar5);
LAB_00827c0c:
        *(float *)(param_3 + iVar4 * 4) = fVar1;
        iVar4 = iVar4 + param_4;
      }
    } while (iVar4 < 0x6c);
  }
  return;
}

