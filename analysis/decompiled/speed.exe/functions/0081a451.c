/* speed.exe 0081a451 FUN_0081a451; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 * calls 0081f7ff FUN_0081f7ff
 * calls 0081a42f FUN_0081a42f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081a451(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar5 = param_1;
  iVar3 = FUN_0081f7cb(*(undefined4 *)(param_1 + 8));
  pbVar7 = (byte *)(param_1 + 0x1c);
  if (iVar3 < 0) {
    uVar4 = FUN_0081a42f(param_1);
  }
  else {
    param_1 = 0;
    if (*(char *)(iVar5 + 0xe) != '\0') {
      do {
        if (*(int *)(pbVar7 + 8) != *(int *)(pbVar7 + 4)) {
          (*(code *)(&PTR_FUN_0090bb90)[*pbVar7])(iVar3,*(int *)(pbVar7 + 8));
          *(int *)(pbVar7 + 4) = *(int *)(pbVar7 + 8);
        }
        pbVar7 = pbVar7 + 0xc;
        param_1 = param_1 + 1;
      } while (param_1 < (int)(uint)*(byte *)(iVar5 + 0xe));
    }
    if (*(char *)(iVar5 + 0xf) != '\0') {
      iVar6 = iVar3 * 0x90 + DAT_009c21f4;
      fVar1 = _DAT_00894200 / (float)*(ushort *)(iVar6 + 0x20);
      iVar5 = FUN_0081f7ff(iVar3);
      *(int *)(pbVar7 + 4) = (int)ROUND((float)iVar5 * fVar1);
      if (*(int *)(iVar6 + 0x18) < 1) {
        iVar5 = *(int *)(iVar6 + 0x14) - iVar5;
        fVar2 = (float)iVar5;
        if (iVar5 < 0) {
          fVar2 = fVar2 + _DAT_00891214;
        }
        *(int *)pbVar7 = (int)ROUND(fVar2 * fVar1);
      }
      else {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

