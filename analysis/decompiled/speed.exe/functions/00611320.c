/* speed.exe 00611320 FUN_00611320; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 005d59f0 FUN_005d59f0
 * calls 00460d60 FUN_00460d60
 * calls 0056bc60 FUN_0056bc60
 * calls 00460c50 FUN_00460c50
 */

void FUN_00611320(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_00460c50("LANGUAGE_");
    iVar2 = FUN_00460d60(param_1,"LANGUAGE_",uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00460c50("LANGUAGE_");
      param_1 = param_1 + iVar2;
    }
    uVar1 = FUN_00460bf0(param_1);
    if (DAT_0092d884 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*DAT_0092d87c;
    }
    iVar2 = (**(code **)(*piVar3 + 0x20))();
    if (iVar2 != 0) {
      if (DAT_0092d884 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)*DAT_0092d87c;
      }
      (**(code **)(*piVar3 + 0x20))();
      piVar3 = (int *)FUN_005d59f0(&LAB_005650b0);
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        uVar1 = FUN_0056bc60(uVar1,0,0x8ab83edb,0,0,5);
        (**(code **)(iVar2 + 4))(uVar1);
      }
    }
  }
  return;
}

