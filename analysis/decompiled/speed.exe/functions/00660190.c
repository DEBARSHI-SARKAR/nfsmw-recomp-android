/* speed.exe 00660190 FUN_00660190; analysis pseudocode, not buildable source.
 * calls 0065ffd0 FUN_0065ffd0
 */

void FUN_00660190(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      if (DAT_009258d4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_0065ffd0(8,param_3);
        if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
          DAT_009258dc = (int *)0x0;
          DAT_009258d4 = 0;
        }
      }
      *(undefined1 *)(iVar2 + param_1) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

