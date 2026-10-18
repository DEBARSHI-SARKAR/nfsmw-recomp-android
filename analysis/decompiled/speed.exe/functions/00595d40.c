/* speed.exe 00595d40 FUN_00595d40; analysis pseudocode, not buildable source.
 * calls 00525b20 FUN_00525b20
 * calls 00516b50 FUN_00516b50
 */

bool FUN_00595d40(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  if (((DAT_0092d884 != 0) && (piVar5 = (int *)*DAT_0092d87c, piVar5 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar5 + 0x20))(), iVar4 != 0)) {
    piVar5 = (int *)(**(code **)(*piVar5 + 0x20))();
    cVar2 = (**(code **)(*piVar5 + 0x18))();
    if (cVar2 == '\0') {
      return false;
    }
  }
  if ((((param_1 * 0x70 != -0x9195e0) &&
       (puVar1 = (undefined4 *)(&DAT_00919624)[param_1 * 0x1c],
       puVar1 != &DAT_00919624 + param_1 * 0x1c)) &&
      ((puVar1 != (undefined4 *)0x0 && ((puVar1 + -1 != (int *)0x0 && (puVar1[2] == 1)))))) &&
     (sVar3 = (**(code **)(puVar1[-1] + 0x30))(), sVar3 != 0)) {
    return false;
  }
  cVar2 = FUN_00525b20(1);
  if (((((cVar2 == '\0') && (DAT_0091cf90 != 0)) &&
       (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x39) != '\0')) &&
      ((iVar4 = *(int *)(*(int *)(DAT_0091cf90 + 0x10) + (param_1 * 5 + 0x1e) * 4), iVar4 != 2 &&
       (iVar4 != 3)))) && ((iVar4 != 4 && ((iVar4 != 5 && (iVar4 != 6)))))) {
    cVar2 = FUN_00516b50("HUD_SingleRace.fng");
    return cVar2 != '\0';
  }
  return false;
}

