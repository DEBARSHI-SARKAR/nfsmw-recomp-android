/* speed.exe 005d9050 FUN_005d9050; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d8c40 FUN_005d8c40
 * calls 00466440 FUN_00466440
 * calls 005d8de0 FUN_005d8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d9050(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  if (DAT_0091dfe0 != '\0') {
    if (*(int *)(param_1 + 0x28) == param_1 + 0x28) {
      iVar5 = FUN_005d8c40(0);
      *(undefined4 *)(iVar5 + 8) = 0;
      FUN_005d8de0(iVar5);
    }
    DAT_0091dfe0 = '\0';
  }
  puVar6 = (undefined4 *)(param_1 + 0x28);
  if (*(undefined4 **)(param_1 + 0x28) == puVar6) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)*puVar6;
  }
  while (piVar4 = piVar7, piVar4 != (int *)0x0) {
    if (piVar4 == *(int **)(param_1 + 0x2c)) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)*piVar4;
    }
    if (*(int *)(piVar4[2] + 4) == 5) {
      thunk_FUN_007c7250(piVar4[2]);
      iVar5 = *piVar4;
      piVar1 = (int *)piVar4[1];
      *piVar1 = iVar5;
      *(int **)(iVar5 + 4) = piVar1;
      FUN_00466440(piVar4);
    }
  }
  if ((undefined4 *)*puVar6 == puVar6) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)*puVar6;
  }
  do {
    while( true ) {
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      iVar5 = puVar6[2];
      if (puVar6 == *(undefined4 **)(param_1 + 0x2c)) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar2 = *(int *)(iVar5 + 4);
      if (iVar2 != 0) break;
      *(undefined4 *)(iVar5 + 4) = 1;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(iVar5 + 4) = 2;
      *(undefined4 *)(iVar5 + 0xc) = 0;
LAB_005d91a0:
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    else {
      if (iVar2 == 2) {
        bVar3 = *(float *)(iVar5 + 0x10) < _DAT_0089096c;
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 0x10);
        if (bVar3) goto LAB_005d91a3;
        *(undefined4 *)(iVar5 + 4) = 3;
        goto LAB_005d91a0;
      }
      if (iVar2 == 3) {
        *(undefined4 *)(iVar5 + 0xc) = 0x3f800000;
        if (_DAT_0089096c <= *(float *)(iVar5 + 0x10)) {
          *(undefined4 *)(iVar5 + 4) = 4;
          goto LAB_005d91a0;
        }
      }
      else if ((iVar2 == 4) &&
              (*(float *)(iVar5 + 0xc) = _DAT_0089096c - *(float *)(iVar5 + 0x10),
              _DAT_0089096c <= *(float *)(iVar5 + 0x10))) {
        *(undefined4 *)(iVar5 + 4) = 5;
        goto LAB_005d91a0;
      }
    }
LAB_005d91a3:
    *(float *)(iVar5 + 0x10) = *(float *)(iVar5 + 0x10) + _DAT_008a3628;
  } while( true );
}

