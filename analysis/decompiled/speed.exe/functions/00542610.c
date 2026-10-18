/* speed.exe 00542610 FUN_00542610; analysis pseudocode, not buildable source.
 * calls 005bbb80 FUN_005bbb80
 * calls 00525790 FUN_00525790
 */

void __thiscall FUN_00542610(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_005bbb80();
  *(undefined1 *)(*param_1 + 0x524c) = 0;
  iVar1 = DAT_0091cae0;
  if (param_2 != -1) {
    if (param_2 == 4) {
      *(undefined4 *)(DAT_0091cae0 + 2) = 0;
      *(undefined4 *)(iVar1 + 6) = 0;
    }
    else {
      *(undefined1 *)(DAT_0091cae0 + 2 + param_2) = 0;
    }
  }
  if ((char)param_1[1] != '\0') {
    iVar2 = 0;
    do {
      if (*(char *)(iVar1 + 2 + iVar2) != '\0') goto LAB_00542665;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    FUN_00525790(1);
LAB_00542665:
    DAT_0091cae4 = DAT_0091cae4 + -1;
  }
  return;
}

