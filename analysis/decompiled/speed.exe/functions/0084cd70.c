/* speed.exe 0084cd70 FUN_0084cd70; analysis pseudocode, not buildable source.
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084c580 FUN_0084c580
 */

int FUN_0084cd70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0084bd60(param_1);
  iVar1 = *(int *)(param_1 + 0x24);
  do {
    if (iVar1 == 0) {
LAB_0084cdcc:
      FUN_0084bdf0(param_1);
      return (iVar1 != 0) - 1;
    }
    if (((param_2 == 0) || (iVar2 = FUN_0084c580(), iVar2 == 0)) &&
       ((param_3 == 0 || (iVar2 = FUN_0084c580(), iVar2 == 0)))) {
      *(undefined4 *)(iVar1 + 0x180) = 0;
      goto LAB_0084cdcc;
    }
    iVar1 = *(int *)(iVar1 + 0x1a0);
  } while( true );
}

