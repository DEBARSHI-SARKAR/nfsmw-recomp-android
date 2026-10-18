/* speed.exe 004ba7b0 FUN_004ba7b0; analysis pseudocode, not buildable source.
 * calls 004b14e0 FUN_004b14e0
 * calls 004b14b0 FUN_004b14b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ba7b0(int param_1)

{
  int extraout_ECX;
  undefined1 local_8;
  char local_7;
  char local_6;
  char local_5;
  char local_4;
  char local_3;
  char local_2;
  
  *(undefined1 *)(param_1 + 0x18c) = 0;
  FUN_004b14e0(&local_8);
  switch(*(int *)(extraout_ECX + 0x184)) {
  case 0:
    if (local_7 != '\0') {
      FUN_004b14b0(1);
      return;
    }
    goto LAB_004ba7fa;
  case 1:
    if (local_7 != '\0') {
      return;
    }
LAB_004ba7fa:
    FUN_004b14b0(3);
    return;
  case 2:
    if (local_5 != '\0') {
      FUN_004b14b0(3);
      return;
    }
    break;
  case 3:
    if (DAT_009142dc - _DAT_0089096c < *(float *)(extraout_ECX + 400)) {
      return;
    }
    if (local_3 != '\0') {
LAB_004ba897:
      FUN_004b14b0(5);
      return;
    }
    if (local_2 != '\0') {
LAB_004ba8ac:
      FUN_004b14b0(6);
      return;
    }
    if (local_4 == '\0') {
      if (local_6 == '\0') {
        return;
      }
      FUN_004b14b0(2);
      return;
    }
    goto LAB_004ba911;
  case 4:
    if (*(float *)(extraout_ECX + 400) <= DAT_009142dc - _DAT_008933d4) {
      if (local_3 != '\0') goto LAB_004ba897;
      if (local_2 != '\0') goto LAB_004ba8ac;
      if ((local_5 != '\0') && (local_4 == '\0')) {
        FUN_004b14b0(3);
        return;
      }
    }
    break;
  case 5:
  case 6:
    if (DAT_009142dc - *(float *)(&DAT_008963ec + *(int *)(extraout_ECX + 0x184) * 4) <
        *(float *)(extraout_ECX + 400)) {
      return;
    }
    if (local_5 == '\0') {
      if (local_4 == '\0') {
        return;
      }
    }
    else if (local_4 == '\0') {
      FUN_004b14b0(3);
      return;
    }
LAB_004ba911:
    FUN_004b14b0(4);
  }
  return;
}

