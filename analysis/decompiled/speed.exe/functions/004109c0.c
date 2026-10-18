/* speed.exe 004109c0 FUN_004109c0; analysis pseudocode, not buildable source.
 * calls 00789870 FUN_00789870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004109c0(float *param_1)

{
  int *piVar1;
  float *pfVar2;
  char cVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40 [48];
  float fStack_10;
  float fStack_8;
  
  pfVar2 = param_1;
  local_4c = 0;
  local_48 = 3;
  cVar3 = FUN_00789870(param_1,&param_1,0);
  if (cVar3 == '\0') {
    return 1;
  }
  puVar5 = DAT_0092fe24;
  if (DAT_0092fe24 != DAT_0092fe24 + DAT_0092fe2c) {
    do {
      cVar3 = (*(code *)**(undefined4 **)*puVar5)(local_40,&local_4c);
      if (cVar3 != '\0') {
        if ((fStack_8 - pfVar2[2]) * (fStack_8 - pfVar2[2]) +
            (fStack_10 - *pfVar2) * (fStack_10 - *pfVar2) < _DAT_00890f90) {
          return 1;
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_0092fe24 + DAT_0092fe2c);
  }
  puVar5 = DAT_0092cd1c;
  if (DAT_0092cd1c != DAT_0092cd1c + DAT_0092cd24) {
    do {
      piVar1 = (int *)*puVar5;
      cVar3 = (**(code **)(*piVar1 + 0x88))();
      if (cVar3 != '\0') {
        pfVar4 = (float *)(**(code **)(*piVar1 + 0xc))();
        if ((pfVar4[2] - pfVar2[2]) * (pfVar4[2] - pfVar2[2]) +
            (*pfVar4 - *pfVar2) * (*pfVar4 - *pfVar2) < _DAT_00890f8c) {
          return 1;
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_0092cd1c + DAT_0092cd24);
  }
  return 0;
}

