/* speed.exe 005b5b10 FUN_005b5b10; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 005aeda0 FUN_005aeda0
 */

int FUN_005b5b10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005af1c0(param_1);
  do {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = param_1;
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_005b5b4c:
      if (iVar2 == 0) {
        return param_2;
      }
    }
    else if (iVar1 == *(int *)(param_2 + 0x10)) {
      iVar2 = FUN_005aeda0(*(int *)(param_2 + 0xc),param_1);
      goto LAB_005b5b4c;
    }
    param_2 = *(int *)(param_2 + 4);
  } while( true );
}

