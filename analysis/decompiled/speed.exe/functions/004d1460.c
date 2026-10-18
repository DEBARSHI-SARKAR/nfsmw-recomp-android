/* speed.exe 004d1460 FUN_004d1460; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0064cef0 thunk_FUN_007ec59c
 * calls 0070f230 FUN_0070f230
 * calls 004d0a60 FUN_004d0a60
 * calls 00700140 FUN_00700140
 * calls 004d0c40 FUN_004d0c40
 * calls 00661c70 FUN_00661c70
 * calls 004d0610 FUN_004d0610
 * calls 004e3f80 FUN_004e3f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d1460(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_008f86f8 != 0) {
    if (DAT_008f8700 != 0) {
      FUN_00700140();
    }
    _DAT_00911fa4 = 0;
    while ((((DAT_0091236c != 0 || (DAT_00912378 != 0)) || (DAT_0091237d != '\0')) ||
           (DAT_0091230c < DAT_00912310 + -1))) {
      FUN_004d0610(0x3dcccccd);
      FUN_00661c70();
    }
    FUN_0070f230();
    piVar2 = &DAT_00911f60;
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x18))();
      }
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x911f94);
    if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x80))(1);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_004e3f80();
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x60) + 4) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x58))(1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    while (DAT_00912310 != 0) {
      FUN_004d0a60(0);
    }
    FUN_004d0c40();
    DAT_00911ed4 = 0;
    _DAT_00912320 = DAT_00912324;
    DAT_00911ed8 = 0;
    _DAT_00911edc = 0;
    DAT_00911ee0 = 0;
    DAT_0091230c = -1;
    DAT_00912310 = 0;
    piVar2 = (int *)*DAT_0091232c;
    *DAT_0091232c = (int)DAT_0091232c;
    DAT_0091232c[1] = (int)DAT_0091232c;
    _DAT_00912330 = 0;
    if (piVar2 != DAT_0091232c) {
      do {
        piVar1 = (int *)*piVar2;
        FUN_005d0370(piVar2,0x30,0);
        piVar2 = piVar1;
      } while (piVar1 != DAT_0091232c);
    }
    FUN_004d0c40();
    DAT_00911ed4 = 0;
    DAT_00911ed8 = 0;
    _DAT_00911edc = 0;
    _DAT_00912320 = DAT_00912324;
    DAT_00911ee0 = 0;
    thunk_FUN_007ec59c();
    if (DAT_008f8700 != 0) {
      FUN_00700140();
      return;
    }
  }
  return;
}

