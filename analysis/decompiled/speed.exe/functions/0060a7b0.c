/* speed.exe 0060a7b0 FUN_0060a7b0; analysis pseudocode, not buildable source.
 * calls 006043d0 FUN_006043d0
 * calls 0056bc10 FUN_0056bc10
 * calls 005faa20 FUN_005faa20
 * calls 00454810 FUN_00454810
 * calls 005dad50 FUN_005dad50
 * calls 005eda20 FUN_005eda20
 * calls 005e4770 FUN_005e4770
 * calls 005e8b20 FUN_005e8b20
 * calls 00452430 FUN_00452430
 * calls 00601730 FUN_00601730
 * calls 00654af0 FUN_00654af0
 * calls 005dc790 FUN_005dc790
 * calls 00605140 FUN_00605140
 * calls 005dcc70 FUN_005dcc70
 * calls 00460bf0 FUN_00460bf0
 * calls 005d59f0 FUN_005d59f0
 * calls 005e9d40 FUN_005e9d40
 * calls 004647c0 FUN_004647c0
 * calls 006269b0 FUN_006269b0
 * calls 00603bd0 FUN_00603bd0
 * calls 005e56c0 FUN_005e56c0
 * calls 00605730 FUN_00605730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060a7b0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_40 [64];
  
  FUN_005dad50(param_1);
  FUN_006043d0();
  FUN_00654af0();
  FUN_005eda20();
  iVar1 = FUN_005e9d40();
  iVar2 = FUN_00452430();
  do {
    if (iVar1 == 0) {
LAB_0060a872:
      if (DAT_0091e000 != 0) {
        if (*(int *)(DAT_0091e000 + 0x1960) == 0) {
          FUN_005e56c0();
          FUN_00605730();
          FUN_00605140();
          return;
        }
        if ((*(int *)(DAT_0091e000 + 0x1968) != 0) && (iVar1 = FUN_005faa20(), iVar1 == 5)) {
          FUN_005dcc70();
          uVar5 = 0;
          iVar1 = FUN_00603bd0();
          if (iVar1 != 0) {
            do {
              piVar3 = (int *)FUN_00454810();
              if (piVar3 == (int *)0x0) {
                piVar3 = (int *)FUN_006269b0();
              }
              iVar1 = *piVar3;
              iVar2 = FUN_00452430();
              if ((iVar1 == iVar2) && (iVar1 = FUN_005e8b20(), iVar1 != 0)) {
                FUN_005dc790();
              }
              uVar5 = uVar5 + 1;
              uVar4 = FUN_00603bd0();
            } while (uVar5 < uVar4);
          }
        }
        piVar3 = (int *)(**(code **)(*param_3 + 0x20))();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x20))();
          piVar3 = (int *)FUN_005d59f0();
          if (piVar3 != (int *)0x0) {
            FUN_0056bc10();
            FUN_004647c0(auStack_40);
            iVar1 = *piVar3;
            FUN_00460bf0();
            (**(code **)(iVar1 + 4))(auStack_40,0);
          }
        }
      }
      return;
    }
    if (*(int *)(iVar1 + 4) == iVar2) {
      FUN_00601730();
      goto LAB_0060a872;
    }
    iVar1 = FUN_005e4770();
  } while( true );
}

