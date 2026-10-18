/* speed.exe 00829500 FUN_00829500; analysis pseudocode, not buildable source.
 * calls 00834ec8 FUN_00834ec8
 * calls 0082cca0 FUN_0082cca0
 * calls 00834e6d FUN_00834e6d
 * calls 0082e390 FUN_0082e390
 * calls 0082e470 FUN_0082e470
 */

int FUN_00829500(uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int local_c;
  uint local_8;
  
  if (DAT_009c2974 == '\0') {
    return 0;
  }
  local_c = 0;
  iVar2 = FUN_00834e6d(&local_c);
  if (iVar2 != 0) {
    return -0x12;
  }
  local_c = 0;
  local_8 = 0;
  do {
    iVar2 = FUN_0082e390(local_8 & 0xff,param_1);
    if (iVar2 != 0) {
      bVar3 = 0;
      iVar4 = 0x40;
      iVar2 = DAT_009c2964;
      do {
        iVar1 = *(int *)(iVar4 + iVar2);
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 & 0x1f)) != 0)) {
          *(undefined4 *)(iVar4 + iVar2) = 0;
          if (*(undefined4 **)(iVar1 + 300) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 300))(1);
          }
          *(undefined4 *)(iVar1 + 300) = 0;
          if (DAT_009c298c != (code *)0x0) {
            (*DAT_009c298c)(iVar1);
          }
          local_c = local_c + 1;
          iVar2 = DAT_009c2964;
        }
        iVar4 = iVar4 + 4;
        bVar3 = bVar3 + 1;
      } while (iVar4 < 0xa0);
      iVar2 = FUN_0082cca0(0x1000000 << ((byte)local_8 & 0x1f));
      if (iVar2 == 0) {
        if (DAT_009c298c != (code *)0x0) {
          (*DAT_009c298c)(DAT_009c2964);
        }
        (&DAT_009c2954)[local_8] = 0;
      }
    }
    local_8 = local_8 + 1;
  } while ((int)local_8 < 4);
  FUN_0082e470();
  DAT_009c2964 = 0;
  FUN_00834ec8(1);
  return local_c;
}

