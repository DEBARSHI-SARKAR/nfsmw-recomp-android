/* speed.exe 00419910 FUN_00419910; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

int FUN_00419910(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_4;
  
  local_4 = 0;
  iVar5 = DAT_0092cd7c;
  if (DAT_0092cd7c != DAT_0092cd7c + DAT_0092cd84 * 4) {
    do {
      piVar1 = (int *)FUN_005d59f0(&LAB_004037e0);
      if ((piVar1 != (int *)0x0) &&
         (piVar2 = (int *)FUN_005d59f0(&LAB_00403700), piVar2 != (int *)0x0)) {
        iVar3 = (**(code **)(*piVar2 + 0xa0))();
        if (((local_4 == 0) || (iVar3 != 0)) &&
           (local_4 = (**(code **)(*piVar1 + 0x10))(), iVar3 != 0)) {
          return local_4;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != DAT_0092cd7c + DAT_0092cd84 * 4);
  }
  puVar4 = DAT_0092cf5c;
  if (DAT_0092cf5c != DAT_0092cf5c + DAT_0092cf64) {
    do {
      iVar5 = (**(code **)(*(int *)*puVar4 + 0x58))();
      if ((((iVar5 != 0) && (iVar5 != 6)) &&
          (piVar1 = (int *)FUN_005d59f0(&LAB_004037e0), piVar1 != (int *)0x0)) &&
         (piVar2 = (int *)FUN_005d59f0(&LAB_00403700), piVar2 != (int *)0x0)) {
        iVar5 = (**(code **)(*piVar2 + 0xa0))();
        if (((local_4 == 0) || (iVar5 != 0)) &&
           (local_4 = (**(code **)(*piVar1 + 0x10))(), iVar5 != 0)) {
          return local_4;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != DAT_0092cf5c + DAT_0092cf64);
  }
  return local_4;
}

