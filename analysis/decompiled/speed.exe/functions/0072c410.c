/* speed.exe 0072c410 FUN_0072c410; analysis pseudocode, not buildable source.
 * calls 00728430 FUN_00728430
 * calls 00721910 FUN_00721910
 * calls 007218e0 FUN_007218e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0072c410(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  _DAT_009ae354 = DAT_00925968;
  local_4 = 0;
  local_c = 0;
  local_8 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    local_10 = (int *)(param_1 + 0x2c4);
    do {
      iVar3 = *local_10;
      sVar1 = *(short *)(iVar3 + 8);
      iVar4 = (int)sVar1;
      cVar2 = (((char)(iVar4 / 100) + (char)(sVar1 >> 7)) -
              (char)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + '@';
      iVar5 = 0;
      if ((((cVar2 == 'Y') || (cVar2 == 'W')) || (cVar2 == 'X')) || (cVar2 == 'U')) {
        iVar5 = 2;
        if (((sVar1 == 0x9c4) || (sVar1 == 0x8fc)) || (sVar1 == 0x960)) {
          iVar5 = 1;
        }
        else if (((*(int *)(param_1 + 0x188) == 1) && (cVar2 = FUN_007218e0(iVar4), cVar2 != '\0'))
                && ((*(int *)(iVar3 + 0xc) == 4 && (*(char *)(param_1 + 0xb0) == '\0')))) {
          iVar5 = 10000;
        }
        else if ((((*(int *)(param_1 + 0x188) == 3) && (cVar2 = FUN_00721910(iVar4), cVar2 != '\0'))
                 && (*(int *)(iVar3 + 0xc) == 4)) && (*(char *)(param_1 + 0xb0) == '\0')) {
          iVar5 = 10000;
        }
LAB_0072c4d8:
        if ((*(int *)(iVar3 + 0xc) != 3) && (*(int *)(iVar3 + 0xc) != 4)) {
          iVar5 = iVar5 + 1;
        }
      }
      else if (('@' < cVar2) && (cVar2 < 'U')) {
        iVar4 = FUN_00728430(iVar3,param_1 + 0xc0,1);
        if ((*(char *)(param_1 + 0xb0) != '\0') &&
           (iVar5 = FUN_00728430(iVar3,param_1 + 0x124,1), iVar5 < iVar4)) {
          iVar4 = iVar5;
        }
        iVar5 = (iVar4 * 5 + 0x32) * 2;
        if (iVar5 != 0) goto LAB_0072c4d8;
      }
      if (local_c < iVar5) {
        local_c = iVar5;
        local_4 = iVar3;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      iVar3 = local_4;
    } while (local_8 < *(int *)(param_1 + 0x2c0));
  }
  return iVar3;
}

