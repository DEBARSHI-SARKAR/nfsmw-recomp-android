/* speed.exe 00422240 FUN_00422240; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 00462520 FUN_00462520
 * calls 005dbef0 FUN_005dbef0
 * calls 005dbed0 FUN_005dbed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422240(void)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fStack_c;
  
  iVar4 = FUN_005dbef0();
  iVar7 = 0;
  if (iVar4 < 1) {
    return;
  }
  while ((piVar5 = (int *)FUN_005dbed0(iVar7), *(char *)((int)piVar5 + 0x21) == '\0' ||
         (piVar5[4] != 1))) {
    iVar7 = iVar7 + 1;
    if (iVar4 <= iVar7) {
      return;
    }
  }
  if ((*piVar5 == 0) ||
     (iVar7 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar5), iVar7 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(iVar7 + 4);
  }
  cVar2 = (**(code **)(*piVar5 + 0x24))();
  fStack_c = -1.0;
  iVar7 = 0;
  do {
    piVar5 = (int *)FUN_005dbed0(iVar7);
    if (*(char *)((int)piVar5 + 0x21) != '\0') goto LAB_00422341;
    fVar1 = (float)piVar5[0x3e];
    if (_DAT_00890968 <= fStack_c) {
      if (cVar2 == '\0') {
        if ((*piVar5 == 0) ||
           (iVar6 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar5), iVar6 == 0))
        {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(iVar6 + 4);
        }
        cVar3 = (**(code **)(*piVar5 + 0x24))();
        if (cVar3 != '\0') goto LAB_00422339;
      }
      else if (fVar1 < fStack_c) goto LAB_00422339;
    }
    else {
LAB_00422339:
      fStack_c = fVar1;
    }
LAB_00422341:
    iVar7 = iVar7 + 1;
    if (iVar4 <= iVar7) {
      if (fStack_c <= _DAT_00890fc8) {
        return;
      }
      fVar1 = _DAT_00891068;
      if (cVar2 != '\0') {
        fVar1 = _DAT_00890634;
      }
      _DAT_008eb200 = _DAT_008eb200 + fVar1;
      if (_DAT_00890968 < _DAT_008eb200) {
        if (_DAT_0089096c < _DAT_008eb200) {
          _DAT_008eb200 = _DAT_0089096c;
        }
        FUN_00462520();
        return;
      }
      _DAT_008eb200 = _DAT_00890968;
      FUN_00462520();
      return;
    }
  } while( true );
}

