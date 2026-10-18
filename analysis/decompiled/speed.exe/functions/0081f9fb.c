/* speed.exe 0081f9fb FUN_0081f9fb; analysis pseudocode, not buildable source.
 * calls 0081f9c2 FUN_0081f9c2
 * calls 0081ef5e FUN_0081ef5e
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

undefined4 FUN_0081f9fb(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_8;
  
  iVar5 = 0;
  local_8 = param_1;
  if ((param_1 == 0) || (0x3f < param_2)) {
    iVar2 = FUN_0081f9c2(&local_8,&DAT_00894304);
    iVar3 = FUN_0081f9c2(&local_8,"SND library main RAM heap map.\n");
    iVar4 = FUN_0081f9c2(&local_8,"------------------------------\n");
    param_2 = ((param_2 - iVar2) - iVar3) - iVar4;
    iVar2 = 0;
    bVar6 = param_1 != 0;
    if (bVar6) {
      FUN_0081bccb();
    }
    if (*(int *)(DAT_009c21fc + 0x14) < 0) {
      do {
        if (param_1 == 0) {
          FUN_0081bccb();
          bVar6 = true;
        }
        puVar1 = (undefined4 *)(*(int *)(DAT_009c21fc + 4) + iVar5 * 8);
        iVar2 = iVar2 + puVar1[1];
        if (param_1 == 0) {
          FUN_0081bcd9();
          bVar6 = false;
        }
        else if (param_2 < 0x1e) goto LAB_0081fb03;
        iVar3 = FUN_0081f9c2(&local_8,"addr: %-6i size: %i\n",*puVar1,puVar1[1]);
        param_2 = param_2 - iVar3;
        iVar5 = iVar5 + -1;
      } while (*(int *)(DAT_009c21fc + 0x14) < iVar5);
    }
    if (param_1 != 0) {
      FUN_0081bcd9();
      bVar6 = false;
      if (param_2 < 0x20) {
        return 0xfffffffa;
      }
    }
    iVar5 = FUN_0081f9c2(&local_8,"   Total main RAM in use: %i\n\n",iVar2);
    iVar5 = FUN_0081ef5e(local_8,param_2 - iVar5);
    if (iVar5 == 0) {
      return 0;
    }
LAB_0081fb03:
    if (bVar6) {
      FUN_0081bcd9();
    }
  }
  return 0xfffffffa;
}

