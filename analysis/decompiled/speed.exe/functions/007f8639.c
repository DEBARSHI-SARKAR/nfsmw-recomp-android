/* speed.exe 007f8639 FUN_007f8639; analysis pseudocode, not buildable source.
 * calls 007f85de FUN_007f85de
 */

char * FUN_007f8639(uint param_1)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  char *local_38 [6];
  undefined **local_20;
  char *local_1c;
  undefined *local_18;
  char *local_14;
  char *local_10;
  uint local_c;
  undefined1 local_5;
  
  uVar2 = 0;
  local_5 = 9;
  if (param_1 != 0) {
    do {
      if ((*(char *)(uVar2 + unaff_EBX) == '\t') || (*(char *)(uVar2 + unaff_EBX) == '\r')) {
        local_5 = *(undefined1 *)(uVar2 + unaff_EBX);
        *(undefined1 *)(uVar2 + unaff_EBX) = 0;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  local_10 = (char *)0xffffffff;
  local_38[5] = "RIGHT";
  local_20 = &PTR_LAB_008c273c;
  local_1c = "CENTER";
  local_18 = &DAT_008c272c;
  local_14 = "BOTTOM";
  local_38[0] = (char *)0x0;
  local_38[1] = (char *)0x1;
  local_38[2] = (char *)0x2;
  local_38[3] = (char *)0x3;
  local_38[4] = (char *)0x4;
  local_c = 0;
  do {
    iVar1 = FUN_007f85de();
    if (iVar1 == 0) {
      local_10 = local_38[local_c];
      break;
    }
    local_c = local_c + 1;
  } while (local_c < 5);
  if (uVar2 != param_1) {
    *(undefined1 *)(uVar2 + unaff_EBX) = local_5;
  }
  return local_10;
}

