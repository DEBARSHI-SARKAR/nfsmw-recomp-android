/* speed.exe 0082c7b0 FUN_0082c7b0; analysis pseudocode, not buildable source.
 * calls 0082c650 FUN_0082c650
 * calls 0082c400 FUN_0082c400
 * calls 0082c560 FUN_0082c560
 */

int FUN_0082c7b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar4 = 0;
  local_8 = 0xc0;
  do {
    if (*(int *)(DAT_009c2964 + 0x1100) <= iVar4) {
      *(undefined4 *)(local_8 + DAT_009c2964) = 0;
    }
    piVar1 = *(int **)(local_8 + DAT_009c2964);
    if (piVar1 != (int *)0x0) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)piVar1 + 0xf) <= (piVar1[4] & 0xffU)) {
        iVar3 = 3;
      }
      if ((piVar1[1] != 0) && ((uint)(*piVar1 + piVar1[1]) < DAT_009c2980)) {
        iVar3 = 1;
      }
      if ((piVar1[4] & 0xf000U) == 0) {
LAB_0082c83b:
        if (iVar3 == 0) {
          iVar3 = FUN_0082c400(iVar4);
          local_c = local_c + iVar3;
          goto LAB_0082c866;
        }
      }
      else {
        iVar2 = FUN_0082c650(iVar4);
        if (iVar2 != 0) goto LAB_0082c83b;
        iVar3 = 2;
      }
      FUN_0082c560(iVar4,iVar3);
      iVar4 = iVar4 + -1;
      local_8 = local_8 + -4;
    }
LAB_0082c866:
    iVar4 = iVar4 + 1;
    local_8 = local_8 + 4;
    if (0xf < iVar4) {
      return local_c;
    }
  } while( true );
}

