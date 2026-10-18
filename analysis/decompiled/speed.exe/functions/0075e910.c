/* speed.exe 0075e910 FUN_0075e910; analysis pseudocode, not buildable source.
 * calls 0074b420 FUN_0074b420
 * calls 007c5df0 _atexit
 * calls 00652ad0 _malloc
 */

undefined4 FUN_0075e910(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  if (*param_1 != -0x7ffc4a00) {
    return 0;
  }
  piVar2 = (int *)(param_1[1] + 8 + (int)param_1);
  param_1 = param_1 + 2;
  piVar8 = param_1;
  while (piVar8 < piVar2) {
    if (*piVar8 == -0x7ffc49ff) {
      puVar5 = _malloc(0x28);
      puVar7 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar7 = puVar5 + 8;
        *puVar7 = puVar7;
        puVar5[9] = puVar7;
        puVar7 = puVar5;
      }
      FUN_0074b420(&param_1);
      if ((DAT_009b37c0 & 1) == 0) {
        DAT_009b37c0 = DAT_009b37c0 | 1;
        DAT_009b37b8 = &DAT_009b37b8;
        DAT_009b37bc = &DAT_009b37b8;
        _atexit(FUN_0088eea0);
      }
      *DAT_009b37bc = puVar7;
      puVar5 = puVar7;
      puVar7[1] = DAT_009b37bc;
      DAT_009b37bc = puVar5;
      *puVar7 = &DAT_009b37b8;
      piVar8 = param_1;
    }
  }
  if ((DAT_009b37b4 & 1) == 0) {
    DAT_009b37b4 = DAT_009b37b4 | 1;
    DAT_009b37ac = (int *)&DAT_009b37ac;
    DAT_009b37b0 = &DAT_009b37ac;
    _atexit(FUN_0088ed80);
  }
  if (DAT_009b37ac == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = DAT_009b37ac + -1;
  }
LAB_0075ea30:
  do {
    do {
      piVar8 = piVar2;
      if ((DAT_009b37b4 & 1) == 0) {
        DAT_009b37b4 = DAT_009b37b4 | 1;
        DAT_009b37ac = (int *)&DAT_009b37ac;
        DAT_009b37b0 = &DAT_009b37ac;
        _atexit(FUN_0088ed80);
      }
      if (piVar8 == &DAT_009b37a8) {
        return 1;
      }
      piVar1 = piVar8 + 1;
      if (piVar8[1] == 0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)(piVar8[1] + -4);
      }
      iVar3 = piVar8[4];
      piVar2 = param_1;
    } while (iVar3 == 0);
    iVar6 = *piVar1;
    piVar2 = (int *)piVar8[2];
    *piVar2 = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    if ((DAT_009b37c0 & 1) == 0) {
      DAT_009b37c0 = DAT_009b37c0 | 1;
      DAT_009b37b8 = &DAT_009b37b8;
      DAT_009b37bc = &DAT_009b37b8;
      _atexit(FUN_0088eea0);
    }
    puVar7 = DAT_009b37b8;
    if ((undefined4 **)DAT_009b37b8 != &DAT_009b37b8) {
      do {
        if ((int *)puVar7[2] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)puVar7[2];
        }
        if (iVar6 == iVar3) {
          (**(code **)(*piVar8 + 8))();
          if (piVar8[3] != 0) {
            iVar3 = *piVar1;
            piVar2 = (int *)piVar8[2];
            *piVar2 = iVar3;
            *(int **)(iVar3 + 4) = piVar2;
          }
          piVar8[3] = (int)puVar7;
          (**(code **)(*piVar8 + 0x14))();
          iVar3 = piVar8[3];
          puVar7 = *(undefined4 **)(iVar3 + 0x24);
          *puVar7 = piVar1;
          *(int **)(iVar3 + 0x24) = piVar1;
          piVar8[2] = (int)puVar7;
          *piVar1 = iVar3 + 0x20;
          piVar2 = param_1;
          goto LAB_0075ea30;
        }
        puVar7 = (undefined4 *)*puVar7;
      } while ((undefined4 **)puVar7 != &DAT_009b37b8);
    }
    if ((DAT_009b37b4 & 1) == 0) {
      DAT_009b37b4 = DAT_009b37b4 | 1;
      DAT_009b37ac = (int *)&DAT_009b37ac;
      DAT_009b37b0 = &DAT_009b37ac;
      _atexit(FUN_0088ed80);
    }
    piVar4 = DAT_009b37ac;
    piVar2 = DAT_009b37ac + 1;
    DAT_009b37ac = piVar1;
    *piVar2 = (int)piVar1;
    piVar8[2] = (int)&DAT_009b37ac;
    *piVar1 = (int)piVar4;
    piVar2 = param_1;
  } while( true );
}

