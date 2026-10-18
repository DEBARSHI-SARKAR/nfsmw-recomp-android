/* speed.exe 00660320 FUN_00660320; analysis pseudocode, not buildable source.
 * calls 00660100 FUN_00660100
 * calls 0065ffd0 FUN_0065ffd0
 * calls 00460c50 FUN_00460c50
 * calls 0065fe90 FUN_0065fe90
 */

void FUN_00660320(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_009258d4 != 0) {
    iVar2 = FUN_00660100(0x10,param_2);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (DAT_009258d4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_0065ffd0(8,param_2);
          if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
            DAT_009258dc = (int *)0x0;
            DAT_009258d4 = 0;
          }
        }
        *(undefined1 *)(iVar3 + param_1) = uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    *(undefined1 *)(iVar3 + param_1) = 0;
  }
  if (DAT_009258d8 != 0) {
    iVar2 = FUN_00460c50(param_1);
    if (DAT_009258d8 != 0) {
      FUN_0065fe90(iVar2,0x10,param_2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (DAT_009258d8 != 0) {
          FUN_0065fe90((int)*(char *)(iVar3 + param_1),8,param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return;
}

